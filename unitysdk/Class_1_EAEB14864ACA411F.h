#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_105;
class Class_0_16E4307DCC419505_107;

#define CLASS_1_EAEB14864ACA411F_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54F3A0)
#define CLASS_1_EAEB14864ACA411F_GET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1C54F3B0)
#define CLASS_1_EAEB14864ACA411F_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C54F390)
#define CLASS_1_EAEB14864ACA411F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C549840)

inline static constexpr unsigned int Class_1_EAEB14864ACA411F_TypeDefinitionIndex = 41745;

class Class_1_EAEB14864ACA411F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_105* _DisplayConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_107* _Config_k__BackingField; // 0x18
	::System::UInt32 _Identifier_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_107* a2, ::Class_0_16E4307DCC419505_105* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_107*, ::Class_0_16E4307DCC419505_105*))((::PBYTE)hIl2Cpp + CLASS_1_EAEB14864ACA411F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAEB14864ACA411F_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_107* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_107*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAEB14864ACA411F_GET_CONFIG_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_105* get_DisplayConfig()
	{
		return ((::Class_0_16E4307DCC419505_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAEB14864ACA411F_GET_DISPLAYCONFIG_OFFSET))(this);
	}
};
