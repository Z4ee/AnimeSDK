#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_PhoneBind;

#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11EB0C10)
#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EB0D70)
#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EB0DD0)
#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11EB0D80)
#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EB0C00)
#define CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB0BF0)

inline static constexpr unsigned int CustomSkin_PhoneBind__CountDown_d__19_TypeDefinitionIndex = 39885;

class CustomSkin_PhoneBind__CountDown_d__19 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_PhoneBind* __4__this; // 0x18
	::System::Single time; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single _startTime_5__2; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
