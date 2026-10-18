#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_111;

#define CLASS_1_FD893FD36F6A3A6D_2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54DF80)
#define CLASS_1_FD893FD36F6A3A6D_2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54DF90)
#define CLASS_1_FD893FD36F6A3A6D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AD20)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_2_TypeDefinitionIndex = 41788;

class Class_1_FD893FD36F6A3A6D_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_111* _Config_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_111* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_111*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_0_16E4307DCC419505_111* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_111*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_2_SET_CONFIG_OFFSET))(this, a1);
	}
};
