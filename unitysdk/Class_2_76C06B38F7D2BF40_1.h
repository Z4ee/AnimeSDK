#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_21.h"

namespace System { class String; }

#define CLASS_2_76C06B38F7D2BF40_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x16631090)
#define CLASS_2_76C06B38F7D2BF40_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16631050)
#define CLASS_2_76C06B38F7D2BF40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16630F80)

inline static constexpr unsigned int Class_2_76C06B38F7D2BF40_1_TypeDefinitionIndex = 47720;

class Class_2_76C06B38F7D2BF40_1 : public ::Class_1_43BD383C98B4C0C5_21
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_76C06B38F7D2BF40_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76C06B38F7D2BF40_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76C06B38F7D2BF40_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}
};
