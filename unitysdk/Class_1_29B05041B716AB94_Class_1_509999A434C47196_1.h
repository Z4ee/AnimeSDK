#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1_METHOD_1_4CA35F322974156E_OFFSET UNITYSDK_OFFSET(0x155EFF50)
#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x155EFF40)
#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155EFF30)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_509999A434C47196_1_TypeDefinitionIndex = 91471;

class Class_1_29B05041B716AB94_Class_1_509999A434C47196_1 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_4CA35F322974156E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_1_METHOD_1_4CA35F322974156E_OFFSET))(this, a1);
	}
};
