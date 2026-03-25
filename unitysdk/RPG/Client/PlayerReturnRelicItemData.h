#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class RelicConfigRow; }

#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_CREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0x9FEE9F0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9FEEBD0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FEECF0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9FEEBB0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_RELICROW_OFFSET UNITYSDK_OFFSET(0x9FEED10)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FEED00)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9FEEBC0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_RELICROW_OFFSET UNITYSDK_OFFSET(0x9FEED20)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CALCULATERELICVALUE_OFFSET UNITYSDK_OFFSET(0x9FEEC20)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FEEB70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnRelicItemData_TypeDefinitionIndex = 50236;

	class PlayerReturnRelicItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::RelicConfigRow* _RelicRow_k__BackingField; // 0x40
		::System::UInt32 _Level_k__BackingField; // 0x48
		::RPG::GameCore::AvatarPropertyType _MainAffixPropertyType_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CTOR_OFFSET))(this, configID, uID);
		}

		static ::RPG::Client::PlayerReturnRelicItemData* CreateItemData(::System::UInt32 itemID, ::System::UInt32 worldLevel, ::System::UInt32 avatarID)
		{
			return ((::RPG::Client::PlayerReturnRelicItemData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_CREATEITEMDATA_OFFSET))(itemID, worldLevel, avatarID);
		}

		::RPG::GameCore::AvatarPropertyType get_MainAffixPropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_MainAffixPropertyType(::RPG::GameCore::AvatarPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint GetPropertyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GETPROPERTYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _CalculateRelicValue(::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CALCULATERELICVALUE_OFFSET))(this, level);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::RelicConfigRow* get_RelicRow()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_RELICROW_OFFSET))(this);
		}

		::System::Void set_RelicRow(::RPG::GameCore::RelicConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_RELICROW_OFFSET))(this, value);
		}
	};
}
