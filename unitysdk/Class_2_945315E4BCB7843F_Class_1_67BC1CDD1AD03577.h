#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_3_C24316E73A7EDF3D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577_METHOD_1_1655143A5B0F43FF_OFFSET UNITYSDK_OFFSET(0x1293BF60)
#define CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x1293BFE0)
#define CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577__CTOR_OFFSET UNITYSDK_OFFSET(0x1293BF50)

inline static constexpr unsigned int Class_2_945315E4BCB7843F_Class_1_67BC1CDD1AD03577_TypeDefinitionIndex = 64202;

class Class_2_945315E4BCB7843F_Class_1_67BC1CDD1AD03577 : public ::System::Object
{
public:
	::System::Action_2<::Class_1_DD0DD411D84DAED3<::Class_3_C24316E73A7EDF3D*>*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1655143A5B0F43FF(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577_METHOD_1_1655143A5B0F43FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_67BC1CDD1AD03577_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
