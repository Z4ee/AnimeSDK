#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_PARKOURBILLBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xAC22AC0)
#define RPG_CLIENT_PARKOURBILLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xAC22BD0)
#define RPG_CLIENT_PARKOURBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC23190)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourBillboard_TypeDefinitionIndex = 57034;

	class ParkourBillboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MinRequireShowDistance; // 0x18
		::System::Single MaxRequireShowDistance; // 0x1C
		::System::Single FadeTime; // 0x20
		::System::Single Field_5_3; // 0x24
		::UnityEngine::CanvasGroup* Field_5_4; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD_UPDATE_OFFSET))(this);
		}
	};
}
