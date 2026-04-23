#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_7ACCB923E979A908_CLEAR_OFFSET UNITYSDK_OFFSET(0x11D74560)
#define CLASS_1_7ACCB923E979A908_METHOD_1_4B1BC378103A8FD6_OFFSET UNITYSDK_OFFSET(0x11D745C0)
#define CLASS_1_7ACCB923E979A908_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x11D746D0)
#define CLASS_1_7ACCB923E979A908_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x11D74620)
#define CLASS_1_7ACCB923E979A908_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D74800)
#define CLASS_1_7ACCB923E979A908_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x11D747C0)
#define CLASS_1_7ACCB923E979A908_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11D74780)
#define CLASS_1_7ACCB923E979A908__CTOR_OFFSET UNITYSDK_OFFSET(0x11D74840)

inline static constexpr unsigned int Class_1_7ACCB923E979A908_TypeDefinitionIndex = 65541;

class Class_1_7ACCB923E979A908 : public ::System::Object
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_341*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4B1BC378103A8FD6(::System::Action_2<::Class_0_16E4307DCC419505_341*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_341*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB923E979A908_METHOD_1_4B1BC378103A8FD6_OFFSET))(this, a1);
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
