#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_OverseaBindEmail;

#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11EB09B0)
#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EB0B80)
#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EB0BE0)
#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11EB0B90)
#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EB09A0)
#define CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB0990)

inline static constexpr unsigned int CustomSkin_OverseaBindEmail__CountDown_d__21_TypeDefinitionIndex = 48600;

class CustomSkin_OverseaBindEmail__CountDown_d__21 : public ::System::Object
{
public:
	::CustomSkin_OverseaBindEmail* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single _startTime_5__2; // 0x20
	::System::Single time; // 0x24
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__COUNTDOWN_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
