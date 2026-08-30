#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define CLASS_1_7AE05552B00B3595_GET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x16B51450)
#define CLASS_1_7AE05552B00B3595_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16B51470)
#define CLASS_1_7AE05552B00B3595_METHOD_1_068007F9234F2E32_OFFSET UNITYSDK_OFFSET(0x16B51490)
#define CLASS_1_7AE05552B00B3595_METHOD_1_1867A77AD573DAEB_1_OFFSET UNITYSDK_OFFSET(0x16B515A0)
#define CLASS_1_7AE05552B00B3595_METHOD_1_1867A77AD573DAEB_OFFSET UNITYSDK_OFFSET(0x16B51500)
#define CLASS_1_7AE05552B00B3595_SET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0x16B51460)
#define CLASS_1_7AE05552B00B3595_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16B51480)
#define CLASS_1_7AE05552B00B3595__CTOR_OFFSET UNITYSDK_OFFSET(0x16B51430)

inline static constexpr unsigned int Class_1_7AE05552B00B3595_TypeDefinitionIndex = 61526;

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

	::System::UInt32 Method_1_1867A77AD573DAEB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_METHOD_1_1867A77AD573DAEB_OFFSET))(this);
	}

	::System::UInt32 Method_1_1867A77AD573DAEB_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE05552B00B3595_METHOD_1_1867A77AD573DAEB_1_OFFSET))(this);
	}
};
