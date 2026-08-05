#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE;

#define CLASS_1_6F133EAE99AC8EA0_CLASS_1_E92DF68A6F6D6F88_METHOD_1_2B2D7B33AF329EE5_OFFSET UNITYSDK_OFFSET(0x1D7DE3D0)
#define CLASS_1_6F133EAE99AC8EA0_CLASS_1_E92DF68A6F6D6F88__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE3C0)

inline static constexpr unsigned int Class_1_6F133EAE99AC8EA0_Class_1_E92DF68A6F6D6F88_TypeDefinitionIndex = 91666;

class Class_1_6F133EAE99AC8EA0_Class_1_E92DF68A6F6D6F88 : public ::System::Object
{
public:
	::Class_3_01B4CC30216C9ABE* Field_1_0; // 0x10
	::Class_3_01B4CC30216C9ABE* Field_1_1; // 0x18
	::System::Single Field_1_7; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F133EAE99AC8EA0_CLASS_1_E92DF68A6F6D6F88__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2B2D7B33AF329EE5(::Class_3_01B4CC30216C9ABE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*))((::PBYTE)hIl2Cpp + CLASS_1_6F133EAE99AC8EA0_CLASS_1_E92DF68A6F6D6F88_METHOD_1_2B2D7B33AF329EE5_OFFSET))(this, a1);
	}
};
