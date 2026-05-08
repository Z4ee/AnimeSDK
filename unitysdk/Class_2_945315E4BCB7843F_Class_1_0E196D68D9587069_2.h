#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_3_4666E61F66433B1E;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x120F0E20)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x120F0E10)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2__CTOR_OFFSET UNITYSDK_OFFSET(0x120F0E00)

inline static constexpr unsigned int Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_2_TypeDefinitionIndex = 64221;

class Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_2 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::Class_1_DD0DD411D84DAED3<::Class_3_4666E61F66433B1E*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_2_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}
};
