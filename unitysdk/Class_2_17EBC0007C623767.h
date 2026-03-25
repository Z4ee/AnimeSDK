#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"

class Class_1_811684F8F4BAD8BC;

#define CLASS_2_17EBC0007C623767_CLEAR_OFFSET UNITYSDK_OFFSET(0x115B9020)
#define CLASS_2_17EBC0007C623767_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x115B90A0)
#define CLASS_2_17EBC0007C623767_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x115B90B0)
#define CLASS_2_17EBC0007C623767__CTOR_OFFSET UNITYSDK_OFFSET(0x115B90C0)
#define CLASS_2_17EBC0007C623767___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x115B90D0)

inline static constexpr unsigned int Class_2_17EBC0007C623767_TypeDefinitionIndex = 62955;

class Class_2_17EBC0007C623767 : public ::Class_1_75C90E178B164D38
{
public:
	::Class_1_811684F8F4BAD8BC* _Config_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17EBC0007C623767__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17EBC0007C623767_CLEAR_OFFSET))(this);
	}

	::Class_1_811684F8F4BAD8BC* get_Config()
	{
		return ((::Class_1_811684F8F4BAD8BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17EBC0007C623767_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_811684F8F4BAD8BC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_811684F8F4BAD8BC*))((::PBYTE)hIl2Cpp + CLASS_2_17EBC0007C623767_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17EBC0007C623767___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
