#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }

#define ARASAMPLES_WALLPLAYERCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E21FE20)
#define ARASAMPLES_WALLPLAYERCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E21FEB0)
#define ARASAMPLES_WALLPLAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E220420)

namespace AraSamples
{
	inline static constexpr unsigned int WallPlayerController_TypeDefinitionIndex = 32920;

	class WallPlayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single speed; // 0x18
		::System::Int32 boardSize; // 0x1C
		::System::Int32 maxTrailLenght; // 0x20
		::Il2CppArray<::UnityEngine::Color>* colors; // 0x28
		::System::Int32 coordX; // 0x30
		::System::Int32 coordZ; // 0x34
		::Ara::AraTrail* trail; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_WALLPLAYERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_WALLPLAYERCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_WALLPLAYERCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
