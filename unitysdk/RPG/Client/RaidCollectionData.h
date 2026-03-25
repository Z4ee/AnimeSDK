#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityRaidCollectionRow; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_CANEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA275EE0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA275AF0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA275A90)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA275F00)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA275BC0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xA275670)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_RAIDROW_OFFSET UNITYSDK_OFFSET(0xA275AD0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_REWARDIDS_OFFSET UNITYSDK_OFFSET(0xA275B20)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA275AB0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA275AA0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA275F10)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_SET_RAIDROW_OFFSET UNITYSDK_OFFSET(0xA275AE0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA275AC0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_STARTRAID_OFFSET UNITYSDK_OFFSET(0xA2758C0)
#define RPG_CLIENT_RAIDCOLLECTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA275870)
#define RPG_CLIENT_RAIDCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA275590)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionData_TypeDefinitionIndex = 54323;

	class RaidCollectionData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRaidCollectionRow* _Row_k__BackingField; // 0x10
		::RPG::GameCore::RaidConfigRow* _RaidRow_k__BackingField; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void Sync(::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_SYNC_OFFSET))(this, isFinished);
		}

		::System::Void StartRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_STARTRAID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityRaidCollectionRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityRaidCollectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ActivityRaidCollectionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRaidCollectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_RAIDID_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigRow* get_RaidRow()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_RAIDROW_OFFSET))(this);
		}

		::System::Void set_RaidRow(::RPG::GameCore::RaidConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_SET_RAIDROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_DESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_REWARDIDS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_CanEditTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_CANEDITTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONDATA_SET_ISFINISHED_OFFSET))(this, value);
		}
	};
}
