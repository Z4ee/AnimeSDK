#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_OverseaVerifyPhoneNumber;

#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15E08A30)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E08BC0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E08C20)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15E08BD0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E08A20)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08A10)

inline static constexpr unsigned int CustomSkin_OverseaVerifyPhoneNumber__CountDown_d__17_TypeDefinitionIndex = 83081;

class CustomSkin_OverseaVerifyPhoneNumber__CountDown_d__17 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_OverseaVerifyPhoneNumber* __4__this; // 0x18
	::System::Single time; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single _startTime_5__2; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__COUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
