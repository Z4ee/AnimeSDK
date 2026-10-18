#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

class Class_1_811684F8F4BAD8BC;

#define CLASS_2_FB50CDBDDEDBBCC8_3_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC388D0)
#define CLASS_2_FB50CDBDDEDBBCC8_3_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC38950)
#define CLASS_2_FB50CDBDDEDBBCC8_3_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC38960)
#define CLASS_2_FB50CDBDDEDBBCC8_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBC38970)

inline static constexpr unsigned int Class_2_FB50CDBDDEDBBCC8_3_TypeDefinitionIndex = 77414;

class Class_2_FB50CDBDDEDBBCC8_3 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::Class_1_811684F8F4BAD8BC* _Config_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_3_CLEAR_OFFSET))(this);
	}

	::Class_1_811684F8F4BAD8BC* get_Config()
	{
		return ((::Class_1_811684F8F4BAD8BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_3_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_811684F8F4BAD8BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_811684F8F4BAD8BC*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_3_SET_CONFIG_OFFSET))(this, a1);
	}
};
