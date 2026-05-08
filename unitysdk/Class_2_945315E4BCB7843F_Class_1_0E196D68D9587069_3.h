#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_3_54853F2CF7152B01_1;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x118F1BB0)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x118F1C30)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3__CTOR_OFFSET UNITYSDK_OFFSET(0x118F1BA0)

inline static constexpr unsigned int Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_3_TypeDefinitionIndex = 64225;

class Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_3 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::Class_1_DD0DD411D84DAED3<::Class_3_54853F2CF7152B01_1*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_3_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
