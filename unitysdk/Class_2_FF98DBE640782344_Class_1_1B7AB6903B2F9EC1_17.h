#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17_METHOD_1_D106E07823D41800_OFFSET UNITYSDK_OFFSET(0x102E3130)
#define CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x102E30D0)
#define CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17__CTOR_OFFSET UNITYSDK_OFFSET(0x102E30C0)

inline static constexpr unsigned int Class_2_FF98DBE640782344_Class_1_1B7AB6903B2F9EC1_17_TypeDefinitionIndex = 82439;

class Class_2_FF98DBE640782344_Class_1_1B7AB6903B2F9EC1_17 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D106E07823D41800(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_1B7AB6903B2F9EC1_17_METHOD_1_D106E07823D41800_OFFSET))(this, a1);
	}
};
