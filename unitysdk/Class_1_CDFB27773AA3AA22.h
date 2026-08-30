#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CDFB27773AA3AA22_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16246970)
#define CLASS_1_CDFB27773AA3AA22_GET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x16246990)
#define CLASS_1_CDFB27773AA3AA22_GET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x162469D0)
#define CLASS_1_CDFB27773AA3AA22_GET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x162469B0)
#define CLASS_1_CDFB27773AA3AA22_METHOD_1_6136C199368283F5_OFFSET UNITYSDK_OFFSET(0x16246A40)
#define CLASS_1_CDFB27773AA3AA22_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x162469F0)
#define CLASS_1_CDFB27773AA3AA22_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16246980)
#define CLASS_1_CDFB27773AA3AA22_SET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x162469A0)
#define CLASS_1_CDFB27773AA3AA22_SET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x162469E0)
#define CLASS_1_CDFB27773AA3AA22_SET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0x162469C0)
#define CLASS_1_CDFB27773AA3AA22__CTOR_OFFSET UNITYSDK_OFFSET(0x16246D70)

inline static constexpr unsigned int Class_1_CDFB27773AA3AA22_TypeDefinitionIndex = 74334;

class Class_1_CDFB27773AA3AA22 : public ::System::Object
{
public:
	::System::Single _MainAffixScore_k__BackingField; // 0x10
	::System::Single _SubAffixScore_k__BackingField; // 0x14
	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x18
	::System::Single _RarityCoefficient_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22__CTOR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Single get_MainAffixScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_GET_MAINAFFIXSCORE_OFFSET))(this);
	}

	::System::Void set_MainAffixScore(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_SET_MAINAFFIXSCORE_OFFSET))(this, a1);
	}

	::System::Single get_SubAffixScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_GET_SUBAFFIXSCORE_OFFSET))(this);
	}

	::System::Void set_SubAffixScore(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_SET_SUBAFFIXSCORE_OFFSET))(this, a1);
	}

	::System::Single get_RarityCoefficient()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_GET_RARITYCOEFFICIENT_OFFSET))(this);
	}

	::System::Void set_RarityCoefficient(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_SET_RARITYCOEFFICIENT_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::String* Method_1_6136C199368283F5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDFB27773AA3AA22_METHOD_1_6136C199368283F5_OFFSET))(this);
	}
};
