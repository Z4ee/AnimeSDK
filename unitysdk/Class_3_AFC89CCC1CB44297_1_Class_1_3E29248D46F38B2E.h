#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_1.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AFC89CCC1CB44297_1_CLASS_1_3E29248D46F38B2E_METHOD_1_8472AAB82FB51D00_OFFSET UNITYSDK_OFFSET(0x13485E30)
#define CLASS_3_AFC89CCC1CB44297_1_CLASS_1_3E29248D46F38B2E__CTOR_OFFSET UNITYSDK_OFFSET(0x13485AD0)

inline static constexpr unsigned int Class_3_AFC89CCC1CB44297_1_Class_1_3E29248D46F38B2E_TypeDefinitionIndex = 61201;

class Class_3_AFC89CCC1CB44297_1_Class_1_3E29248D46F38B2E : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1_CLASS_1_3E29248D46F38B2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8472AAB82FB51D00(::Enum_3_D2BBBB758B896E04_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_1))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_1_CLASS_1_3E29248D46F38B2E_METHOD_1_8472AAB82FB51D00_OFFSET))(this, a1);
	}
};
