#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIWORLDBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x126C5FC0)
#define MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x126C6750)
#define MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x126C6790)
#define MOLEMOLE_UIWORLDBASECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x126C5FD0)
#define MOLEMOLE_UIWORLDBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x126C67D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldBaseController_TypeDefinitionIndex = 39955;

	class UIWorldBaseController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::Camera* WorldCamera; // 0x310
		::System::Boolean isFadeIn; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEINANIMATION_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this);
		}
	};
}
