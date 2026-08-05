#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_PhoneLogin;

#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x128BFF60)
#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x128C01B0)
#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x128C0210)
#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x128C01C0)
#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128BFF50)
#define CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x128BFF40)

inline static constexpr unsigned int CustomSkin_PhoneLogin__CountDown_d__42_TypeDefinitionIndex = 42910;

class CustomSkin_PhoneLogin__CountDown_d__42 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_PhoneLogin* __4__this; // 0x18
	::System::Single _startTime_5__2; // 0x20
	::System::Single time; // 0x24
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__COUNTDOWN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
