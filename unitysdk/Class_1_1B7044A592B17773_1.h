#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define CLASS_1_1B7044A592B17773_1_GET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x8CC0E00)
#define CLASS_1_1B7044A592B17773_1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8CC0E20)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_B488B746B35B6CBB_OFFSET UNITYSDK_OFFSET(0x8CC0E40)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_E2ACF3FF064F9810_1_OFFSET UNITYSDK_OFFSET(0x8CC0F30)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x8CC0EB0)
#define CLASS_1_1B7044A592B17773_1_SET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x8CC0E10)
#define CLASS_1_1B7044A592B17773_1_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8CC0E30)
#define CLASS_1_1B7044A592B17773_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC0DE0)

inline static constexpr unsigned int Class_1_1B7044A592B17773_1_TypeDefinitionIndex = 49834;

class Class_1_1B7044A592B17773_1 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _EnchantID_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::ChenLingEnchantLevelRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnchantID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_GET_ENCHANTID_OFFSET))(this);
	}

	::System::Void set_EnchantID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_SET_ENCHANTID_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_SET_LEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingEnchantLevelRow* Method_1_B488B746B35B6CBB()
	{
		return ((::RPG::GameCore::ChenLingEnchantLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_B488B746B35B6CBB_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_E2ACF3FF064F9810_1_OFFSET))(this);
	}
};
