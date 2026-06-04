#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

class Class_1_811684F8F4BAD8BC;

#define CLASS_2_FB50CDBDDEDBBCC8_2_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA09FC0)
#define CLASS_2_FB50CDBDDEDBBCC8_2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAA0A040)
#define CLASS_2_FB50CDBDDEDBBCC8_2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAA0A050)
#define CLASS_2_FB50CDBDDEDBBCC8_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0A060)
#define CLASS_2_FB50CDBDDEDBBCC8_2___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA0A070)

inline static constexpr unsigned int Class_2_FB50CDBDDEDBBCC8_2_TypeDefinitionIndex = 71933;

class Class_2_FB50CDBDDEDBBCC8_2 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::Class_1_811684F8F4BAD8BC* _Config_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_CLEAR_OFFSET))(this);
	}

	::Class_1_811684F8F4BAD8BC* get_Config()
	{
		return ((::Class_1_811684F8F4BAD8BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_811684F8F4BAD8BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_811684F8F4BAD8BC*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
