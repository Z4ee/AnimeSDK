#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_748;
class Class_1_02098A44CBBFEEE1;
class Class_1_075C34D03AFA1215_27;
class Class_1_45BB92167AED63A0_27;
class Class_1_D55C9EF3F758FF20;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChimeraDuelGameSessionTeamMember; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xB684E90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB684280)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6859A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB692030)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET UNITYSDK_OFFSET(0xB68DA00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_ISSELLFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB691990)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0xB691830)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xB691810)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB691940)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xB6906A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_REQUIREDMINMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB691A90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB6913D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET UNITYSDK_OFFSET(0xB6873B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET UNITYSDK_OFFSET(0xB6879B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xB687190)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET UNITYSDK_OFFSET(0xB687520)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xB691740)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET UNITYSDK_OFFSET(0xB691480)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET UNITYSDK_OFFSET(0xB690EA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET UNITYSDK_OFFSET(0xB690D10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xB691820)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET UNITYSDK_OFFSET(0xB68DED0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET UNITYSDK_OFFSET(0xB690C30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET UNITYSDK_OFFSET(0xB691CB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB691D70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET UNITYSDK_OFFSET(0xB68D8C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0xB6872E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET UNITYSDK_OFFSET(0xB691F70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET UNITYSDK_OFFSET(0xB690DC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB691B30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xB6909E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeam_TypeDefinitionIndex = 59261;

	class ChimeraDuelGameSessionTeam : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionTeamMember*>* _Members; // 0x18
		::Class_0_16E4307DCC419505_748* _Dependencies; // 0x20
		::System::Action* OnSold; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _Slotted; // 0x30
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* _PendingUpgradeEffect; // 0x38
		::System::UInt32 _MasterID_k__BackingField; // 0x40

		::System::Void _ctor(::Class_0_16E4307DCC419505_748* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_748*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnNotifyRemoveMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyInsertMember(::Class_1_02098A44CBBFEEE1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyUpdateMember(::Class_1_02098A44CBBFEEE1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyLineupUpdate(::Class_1_075C34D03AFA1215_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET))(this, a1);
		}

		::System::Void SwapMembers(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET))(this, a1, a2);
		}

		::System::Void UpgradeMember(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void ReorderMembers(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET))(this, a1);
		}

		::System::Void ReorderMembersAndUpgrade(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnChangeLineupScRsp(::Class_1_45BB92167AED63A0_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET))(this, a1);
		}

		::System::Void ReorderMembersAndSell(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET))(this, a1, a2);
		}

		::System::Void OnSellChimeraScRsp(::Class_1_D55C9EF3F758FF20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D55C9EF3F758FF20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET))(this, a1);
		}

		::System::Void _SyncLineupChange(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET))(this, a1);
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

		static ::RPG::Client::ChimeraDuelGameSessionTeam* Create(::Class_0_16E4307DCC419505_748* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_02098A44CBBFEEE1*>* a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::Class_0_16E4307DCC419505_748*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_02098A44CBBFEEE1*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeam* CreateFake(::Class_0_16E4307DCC419505_748* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::Class_0_16E4307DCC419505_748*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMemberAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMember(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshotAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshot(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Int32 TryGetSlotOfMember(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ExportAllMembersSnapshot()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ExportLineup()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET))(this);
		}

		static ::System::Void SimulateInsertion(::System::Int32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET))(a1, a2, a3);
		}
	};
}
