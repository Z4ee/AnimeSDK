#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::UI { class PayParentConsentSentDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BF846A0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF84AC0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF84B20)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BF84AD0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF84690)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84680)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int PayParentConsentSentDialog__CountDown_d__33_TypeDefinitionIndex = 20144;

	class PayParentConsentSentDialog__CountDown_d__33 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* _enableColor_5__2; // 0x18
		::MiHoYo::SDK::UI::PayParentConsentSentDialog* __4__this; // 0x20
		::System::Single time; // 0x28
		::System::Single _startTime_5__1; // 0x2C
		::System::Int32 __1__state; // 0x30
		::UnityEngine::Color _color_5__3; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
