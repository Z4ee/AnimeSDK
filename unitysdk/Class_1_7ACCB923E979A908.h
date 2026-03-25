#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_333;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_7ACCB923E979A908_CLEAR_OFFSET UNITYSDK_OFFSET(0x10A4E2C0)
#define CLASS_1_7ACCB923E979A908_METHOD_1_4B1BC378103A8FD6_OFFSET UNITYSDK_OFFSET(0x10A4E320)
#define CLASS_1_7ACCB923E979A908_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x10A4E430)
#define CLASS_1_7ACCB923E979A908_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x10A4E380)
#define CLASS_1_7ACCB923E979A908_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A4E560)
#define CLASS_1_7ACCB923E979A908_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10A4E520)
#define CLASS_1_7ACCB923E979A908_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A4E4E0)
#define CLASS_1_7ACCB923E979A908__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4E5A0)

inline static constexpr unsigned int Class_1_7ACCB923E979A908_TypeDefinitionIndex = 58254;

class Class_1_7ACCB923E979A908 : public ::System::Object
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_333*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4B1BC378103A8FD6(::System::Action_2<::Class_0_16E4307DCC419505_333*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_333*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_METHOD_1_4B1BC378103A8FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_METHOD_1_BCBA2F161B837B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
