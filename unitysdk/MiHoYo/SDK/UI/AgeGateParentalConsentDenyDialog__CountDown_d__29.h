#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDenyDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17665DB0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x176661E0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17666240)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x176661F0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17665DA0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__COUNTDOWN_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x17665B20)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDenyDialog__CountDown_d__29_TypeDefinitionIndex = 7409;

	class AgeGateParentalConsentDenyDialog__CountDown_d__29 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* _enableColor_5__2; // 0x18
		::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog* __4__this; // 0x20
		::System::Single _startTime_5__1; // 0x28
		::System::Single time; // 0x2C
		::System::Int32 __1__state; // 0x30
		::UnityEngine::Color _color_5__3; // 0x34

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
