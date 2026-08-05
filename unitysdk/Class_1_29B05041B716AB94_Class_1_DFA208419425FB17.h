#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17_METHOD_1_4CA35F322974156E_OFFSET UNITYSDK_OFFSET(0x11582090)
#define CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x115820F0)
#define CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17__CTOR_OFFSET UNITYSDK_OFFSET(0x11582080)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_DFA208419425FB17_TypeDefinitionIndex = 91468;

class Class_1_29B05041B716AB94_Class_1_DFA208419425FB17 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_6; // 0x10
	::System::Action* Field_1_7; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4CA35F322974156E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17_METHOD_1_4CA35F322974156E_OFFSET))(this, a1);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_DFA208419425FB17_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}
};
