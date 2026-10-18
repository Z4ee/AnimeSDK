#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_102;

#define CLASS_1_B7A5399E4956900D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE2285A0)
#define CLASS_1_B7A5399E4956900D_GET_PREFDESC_OFFSET UNITYSDK_OFFSET(0xE2285C0)
#define CLASS_1_B7A5399E4956900D_METHOD_1_9DD1760D5BD757A7_OFFSET UNITYSDK_OFFSET(0xE2285E0)
#define CLASS_1_B7A5399E4956900D_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE2285B0)
#define CLASS_1_B7A5399E4956900D_SET_PREFDESC_OFFSET UNITYSDK_OFFSET(0xE2285D0)
#define CLASS_1_B7A5399E4956900D__CTOR_OFFSET UNITYSDK_OFFSET(0xE228670)

inline static constexpr unsigned int Class_1_B7A5399E4956900D_TypeDefinitionIndex = 80182;

class Class_1_B7A5399E4956900D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_102* _Config_k__BackingField; // 0x10
	::RPG::Client::TextID _PrefDesc_k__BackingField; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_102* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_102*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_102* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_0_16E4307DCC419505_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PrefDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D_GET_PREFDESC_OFFSET))(this);
	}

	::System::Void set_PrefDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D_SET_PREFDESC_OFFSET))(this, a1);
	}

	static ::Class_1_B7A5399E4956900D* Method_1_9DD1760D5BD757A7(::Class_0_16E4307DCC419505_102* a1, ::RPG::Client::TextID a2)
	{
		return ((::Class_1_B7A5399E4956900D*(*)(::Class_0_16E4307DCC419505_102*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B7A5399E4956900D_METHOD_1_9DD1760D5BD757A7_OFFSET))(a1, a2);
	}
};
