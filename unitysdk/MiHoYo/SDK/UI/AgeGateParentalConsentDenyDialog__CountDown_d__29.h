#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDenyDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x197F10A0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x197F14C0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x197F1520)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x197F14D0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197F1090)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x197F1080)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDenyDialog__CountDown_d__29_TypeDefinitionIndex = 19236;

	class AgeGateParentalConsentDenyDialog__CountDown_d__29 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog* __4__this; // 0x10
		::System::String* _enableColor_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single time; // 0x28
		::UnityEngine::Color _color_5__3; // 0x2C
		::System::Single _startTime_5__1; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
