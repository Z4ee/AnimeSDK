#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIIMAGETIMECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C69100)
#define MOLEMOLE_UIIMAGETIMECONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x19C68510)
#define MOLEMOLE_UIIMAGETIMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C69150)
#define MOLEMOLE_UIIMAGETIMECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C69200)

namespace MoleMole
{
	inline static constexpr unsigned int UIImageTimeController_TypeDefinitionIndex = 46930;

	class UIImageTimeController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::Image* H0; // 0x80
		::UnityEngine::UI::Image* H1; // 0x88
		::UnityEngine::UI::Image* M0; // 0x90
		::UnityEngine::UI::Image* M1; // 0x98
		::UnityEngine::UI::Image* S0; // 0xA0
		::UnityEngine::UI::Image* S1; // 0xA8
		::System::Boolean IsAddMinusMix; // 0xB0
		::UnityEngine::UI::Image* Add; // 0xB8
		::UnityEngine::UI::Image* Minus; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIIMAGETIMECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTime(::System::Int32 totalS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIIMAGETIMECONTROLLER_SETTIME_OFFSET))(this, totalS);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIIMAGETIMECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIIMAGETIMECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
