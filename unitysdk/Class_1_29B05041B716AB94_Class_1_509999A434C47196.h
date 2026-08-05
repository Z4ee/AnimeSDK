#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_METHOD_1_4CA35F322974156E_OFFSET UNITYSDK_OFFSET(0x1555E350)
#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_METHOD_1_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0x1555E340)
#define CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196__CTOR_OFFSET UNITYSDK_OFFSET(0x1555E330)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_509999A434C47196_TypeDefinitionIndex = 91469;

class Class_1_29B05041B716AB94_Class_1_509999A434C47196 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_METHOD_1_A1D868D08A5B8F47_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CA35F322974156E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_509999A434C47196_METHOD_1_4CA35F322974156E_OFFSET))(this, a1);
	}
};
