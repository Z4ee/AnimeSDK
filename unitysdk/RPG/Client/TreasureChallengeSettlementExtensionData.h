#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityRaidCollectionGroupRow; }
namespace RPG::GameCore { class ActivityRaidCollectionRow; }
namespace RPG::GameCore { class RaidConfigRow; }

#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_CREATEEXTENSION_OFFSET UNITYSDK_OFFSET(0xA62B2B0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_GET_ISCANGOTONEXT_OFFSET UNITYSDK_OFFSET(0xA62B7B0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_GET_NEXTRAIDROW_OFFSET UNITYSDK_OFFSET(0xA62B7D0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_SET_ISCANGOTONEXT_OFFSET UNITYSDK_OFFSET(0xA62B7C0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_SET_NEXTRAIDROW_OFFSET UNITYSDK_OFFSET(0xA62B7E0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_TRYGETACTIVITYRAIDROWBYRAIDCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0xA62B4F0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_TRYGETACTIVITYRAIDROWBYRAIDID_OFFSET UNITYSDK_OFFSET(0xA62B410)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA62B5E0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA__GETNEXTRAIDROW_OFFSET UNITYSDK_OFFSET(0xA62B5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeSettlementExtensionData_TypeDefinitionIndex = 54342;

	class TreasureChallengeSettlementExtensionData : public ::System::Object
	{
	public:
		::RPG::GameCore::RaidConfigRow* _NextRaidRow_k__BackingField; // 0x10
		::System::Boolean _IsCanGotoNext_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureChallengeSettlementExtensionData* CreateExtension(::System::UInt32 raidID)
		{
			return ((::RPG::Client::TreasureChallengeSettlementExtensionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_CREATEEXTENSION_OFFSET))(raidID);
		}

		static ::RPG::GameCore::ActivityRaidCollectionRow* TryGetActivityRaidRowByRaidID(::System::UInt32 targetRaidID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_TRYGETACTIVITYRAIDROWBYRAIDID_OFFSET))(targetRaidID);
		}

		static ::RPG::GameCore::ActivityRaidCollectionGroupRow* TryGetActivityRaidRowByRaidCollectionID(::System::UInt32 raidCollectionID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_TRYGETACTIVITYRAIDROWBYRAIDCOLLECTIONID_OFFSET))(raidCollectionID);
		}

		::RPG::GameCore::RaidConfigRow* _GetNextRaidRow(::Il2CppArray<::System::UInt32>* raidCollectionIDArray, ::System::UInt32 raidCollectionID)
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA__GETNEXTRAIDROW_OFFSET))(this, raidCollectionIDArray, raidCollectionID);
		}

		::System::Boolean get_IsCanGotoNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_GET_ISCANGOTONEXT_OFFSET))(this);
		}

		::System::Void set_IsCanGotoNext(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_SET_ISCANGOTONEXT_OFFSET))(this, value);
		}

		::RPG::GameCore::RaidConfigRow* get_NextRaidRow()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_GET_NEXTRAIDROW_OFFSET))(this);
		}

		::System::Void set_NextRaidRow(::RPG::GameCore::RaidConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENTEXTENSIONDATA_SET_NEXTRAIDROW_OFFSET))(this, value);
		}
	};
}
