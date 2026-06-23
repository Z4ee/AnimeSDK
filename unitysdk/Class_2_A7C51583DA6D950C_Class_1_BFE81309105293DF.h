#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_3_3485604B04EE4C2F;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x168CC950)
#define CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x168CC960)
#define CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF__CTOR_OFFSET UNITYSDK_OFFSET(0x168CC940)

inline static constexpr unsigned int Class_2_A7C51583DA6D950C_Class_1_BFE81309105293DF_TypeDefinitionIndex = 80440;

class Class_2_A7C51583DA6D950C_Class_1_BFE81309105293DF : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::Class_3_3485604B04EE4C2F*>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A7C51583DA6D950C_CLASS_1_BFE81309105293DF_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};
