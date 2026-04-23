#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOVIDEOALPHACONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA11E90)
#define RPG_CLIENT_MONOVIDEOALPHACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA11F40)
#define RPG_CLIENT_MONOVIDEOALPHACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA11FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoVideoAlphaController_TypeDefinitionIndex = 67414;

	class MonoVideoAlphaController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Alpha; // 0x18
		::UnityEngine::UI::Image* _Img; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVIDEOALPHACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVIDEOALPHACONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVIDEOALPHACONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
