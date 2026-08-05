#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x9552350)
#define CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x9552360)
#define CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD__CTOR_OFFSET UNITYSDK_OFFSET(0x9552340)

inline static constexpr unsigned int Class_2_FF98DBE640782344_Class_1_DD48A700089766DD_TypeDefinitionIndex = 82433;

class Class_2_FF98DBE640782344_Class_1_DD48A700089766DD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_1_27F786FF2A30778C<::System::UInt64>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_DD48A700089766DD_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};
