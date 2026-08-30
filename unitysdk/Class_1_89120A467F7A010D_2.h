#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_572302DC5A1A967C;

#define CLASS_1_89120A467F7A010D_2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x158B6650)
#define CLASS_1_89120A467F7A010D_2_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158B6670)
#define CLASS_1_89120A467F7A010D_2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x158B6660)
#define CLASS_1_89120A467F7A010D_2_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158B6680)
#define CLASS_1_89120A467F7A010D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x158B6690)

inline static constexpr unsigned int Class_1_89120A467F7A010D_2_TypeDefinitionIndex = 80390;

class Class_1_89120A467F7A010D_2 : public ::System::Object
{
public:
	::Class_1_572302DC5A1A967C* _Config_k__BackingField; // 0x10
	::System::Boolean _IsUnlocked_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_2__CTOR_OFFSET))(this);
	}

	::Class_1_572302DC5A1A967C* get_Config()
	{
		return ((::Class_1_572302DC5A1A967C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_572302DC5A1A967C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_572302DC5A1A967C*))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_2_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUnlocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_2_GET_ISUNLOCKED_OFFSET))(this);
	}

	::System::Void set_IsUnlocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_2_SET_ISUNLOCKED_OFFSET))(this, a1);
	}
};
