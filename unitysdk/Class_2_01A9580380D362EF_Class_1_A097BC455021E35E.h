#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_472679C84451629A_13;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E_METHOD_1_EFC58908CA350AE0_OFFSET UNITYSDK_OFFSET(0x192221D0)
#define CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E__CTOR_OFFSET UNITYSDK_OFFSET(0x19221CF0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_A097BC455021E35E_TypeDefinitionIndex = 40017;

class Class_2_01A9580380D362EF_Class_1_A097BC455021E35E : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::Class_2_01A9580380D362EF* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EFC58908CA350AE0(::Class_3_472679C84451629A_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_13*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E_METHOD_1_EFC58908CA350AE0_OFFSET))(this, a1);
	}
};
