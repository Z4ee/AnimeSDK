#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class RelicConfigRow; }

#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_CREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0xC4A98A0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xC4A9A80)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC4A9C10)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC4A9A60)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_RELICROW_OFFSET UNITYSDK_OFFSET(0xC4A9C30)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC4A9C20)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC4A9A70)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_RELICROW_OFFSET UNITYSDK_OFFSET(0xC4A9C40)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CALCULATERELICVALUE_OFFSET UNITYSDK_OFFSET(0xC4A9AD0)
#define RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A9A20)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnRelicItemData_TypeDefinitionIndex = 57872;

	class PlayerReturnRelicItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::RelicConfigRow* _RelicRow_k__BackingField; // 0x40
		::RPG::GameCore::AvatarPropertyType _MainAffixPropertyType_k__BackingField; // 0x48
		::System::UInt32 _Level_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::PlayerReturnRelicItemData* CreateItemData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::PlayerReturnRelicItemData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_CREATEITEMDATA_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::AvatarPropertyType get_MainAffixPropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_MAINAFFIXPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_MainAffixPropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_MAINAFFIXPROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GETPROPERTYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _CalculateRelicValue(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA__CALCULATERELICVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::RelicConfigRow* get_RelicRow()
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_GET_RELICROW_OFFSET))(this);
		}

		::System::Void set_RelicRow(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNRELICITEMDATA_SET_RELICROW_OFFSET))(this, a1);
		}
	};
}
