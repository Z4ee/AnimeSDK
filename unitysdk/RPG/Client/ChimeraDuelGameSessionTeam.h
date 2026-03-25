#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_606;
class Class_1_02098A44CBBFEEE1;
class Class_1_6E708EAB438EC183_23;
class Class_1_735612C94F558EAE_22;
class Class_1_B3B48B7EEC81A99A_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChimeraDuelGameSessionTeamMember; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x93A4350)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0x93A39C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93A4B90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x93A4E40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET UNITYSDK_OFFSET(0x93A2BE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_ISSELLFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93A3820)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0x93A36C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x93A36A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x93A37D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2430)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_REQUIREDMINMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x93A3920)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x93A32A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET UNITYSDK_OFFSET(0x93A2560)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET UNITYSDK_OFFSET(0x93A2820)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x93A2480)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET UNITYSDK_OFFSET(0x93A2770)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x93A3610)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET UNITYSDK_OFFSET(0x93A3350)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET UNITYSDK_OFFSET(0x93A2DC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET UNITYSDK_OFFSET(0x93A2C20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0x93A36B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET UNITYSDK_OFFSET(0x93A4EF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET UNITYSDK_OFFSET(0x93A2AE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET UNITYSDK_OFFSET(0x93A4BD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x93A4C90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET UNITYSDK_OFFSET(0x93A2390)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x93A3220)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET UNITYSDK_OFFSET(0x93A4DD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET UNITYSDK_OFFSET(0x93A2CC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x93A4240)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0x93A2880)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeam_TypeDefinitionIndex = 51393;

	class ChimeraDuelGameSessionTeam : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* _PendingUpgradeEffect; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionTeamMember*>* _Members; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _Slotted; // 0x20
		::System::Action* OnSold; // 0x28
		::System::Action* OnChanged; // 0x30
		::Class_0_16E4307DCC419505_606* _Dependencies; // 0x38
		::System::UInt32 _MasterID_k__BackingField; // 0x40

		::System::Void _ctor(::Class_0_16E4307DCC419505_606* dependencies)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_606*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__CTOR_OFFSET))(this, dependencies);
		}

		::System::Void OnNotifyRemoveMember(::System::UInt32 chimeraUniqueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET))(this, chimeraUniqueId);
		}

		::System::Void OnNotifyInsertMember(::Class_1_02098A44CBBFEEE1* chimeraUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET))(this, chimeraUpdate);
		}

		::System::Void OnNotifyUpdateMember(::Class_1_02098A44CBBFEEE1* chimeraUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET))(this, chimeraUpdate);
		}

		::System::Void OnNotifyLineupUpdate(::Class_1_6E708EAB438EC183_23* lineupUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET))(this, lineupUpdate);
		}

		::System::Void SwapMembers(::System::Int32 sourceSlotIndex, ::System::Int32 targetSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET))(this, sourceSlotIndex, targetSlotIndex);
		}

		::System::Void UpgradeMember(::System::Int32 sourceSlotIndex, ::System::Int32 targetSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET))(this, sourceSlotIndex, targetSlotIndex);
		}

		::System::Void ReorderMembers(::Il2CppArray<::System::UInt32>* lineup)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET))(this, lineup);
		}

		::System::Void ReorderMembersAndUpgrade(::Il2CppArray<::System::UInt32>* lineup, ::System::UInt32 sourceUniqueID, ::System::UInt32 targetUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET))(this, lineup, sourceUniqueID, targetUniqueID);
		}

		::System::Void OnChangeLineupScRsp(::Class_1_735612C94F558EAE_22* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET))(this, rsp);
		}

		::System::Void ReorderMembersAndSell(::Il2CppArray<::System::UInt32>* lineup, ::System::UInt32 soldUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET))(this, lineup, soldUniqueID);
		}

		::System::Void OnSellChimeraScRsp(::Class_1_B3B48B7EEC81A99A_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET))(this, rsp);
		}

		::System::Void _SyncLineupChange(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* newLineup)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET))(this, newLineup);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelMasterData* get_MasterData()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERDATA_OFFSET))(this);
		}

		::System::Int32 get_MemberSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERSLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSellFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_ISSELLFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_RequiredMinMemberCount()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_REQUIREDMINMEMBERCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeam* Create(::Class_0_16E4307DCC419505_606* dependencies, ::System::UInt32 master, ::System::Collections::Generic::IEnumerable_1<::Class_1_02098A44CBBFEEE1*>* chimeras, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* lineup)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::Class_0_16E4307DCC419505_606*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_02098A44CBBFEEE1*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET))(dependencies, master, chimeras, lineup);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeam* CreateFake(::Class_0_16E4307DCC419505_606* dependencies)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::Class_0_16E4307DCC419505_606*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET))(dependencies);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMemberAtSlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET))(this, slotIndex);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMember(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET))(this, uniqueID);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshotAtSlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET))(this, slotIndex);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshot(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET))(this, uniqueID);
		}

		::System::Int32 TryGetSlotOfMember(::System::UInt32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ExportAllMembersSnapshot()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ExportLineup()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET))(this);
		}

		static ::System::Void SimulateInsertion(::System::Int32 equivalentSourceSlotIndex, ::Il2CppArray<::System::UInt32>* lineup, ::System::Int32 targetSlotIndex)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET))(equivalentSourceSlotIndex, lineup, targetSlotIndex);
		}
	};
}
