#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define CLASS_1_7AE05552B00B3595_GET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x1445A6E0)
#define CLASS_1_7AE05552B00B3595_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1445A700)
#define CLASS_1_7AE05552B00B3595_METHOD_1_068007F9234F2E32_OFFSET UNITYSDK_OFFSET(0x1445A720)
#define CLASS_1_7AE05552B00B3595_METHOD_1_E2ACF3FF064F9810_1_OFFSET UNITYSDK_OFFSET(0x1445A810)
#define CLASS_1_7AE05552B00B3595_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x1445A790)
#define CLASS_1_7AE05552B00B3595_SET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x1445A6F0)
#define CLASS_1_7AE05552B00B3595_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1445A710)
#define CLASS_1_7AE05552B00B3595__CTOR_OFFSET UNITYSDK_OFFSET(0x1445A6C0)

inline static constexpr unsigned int Class_1_7AE05552B00B3595_TypeDefinitionIndex = 57433;

class Class_1_7AE05552B00B3595 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _EnchantID_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::ChenLingEnchantLevelRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnchantID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_GET_ENCHANTID_OFFSET))(this);
	}

	::System::Void set_EnchantID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_SET_ENCHANTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingEnchantLevelRow* Method_1_068007F9234F2E32()
	{
		return ((::RPG::GameCore::ChenLingEnchantLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_METHOD_1_068007F9234F2E32_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_METHOD_1_E2ACF3FF064F9810_1_OFFSET))(this);
	}
};
