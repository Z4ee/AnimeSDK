#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_1_16A5F3BE522C8CC5;
class Class_1_45BB92167AED63A0_35;
class Class_1_4BC858D7C27E10ED_31;
class Class_1_4BC858D7C27E10ED_32;
class Class_1_B1FF62FAE312BC49_5;
class Class_1_BE77F98C85B2B14F;
class Class_1_D1E0AD3915BCCF29_39;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameTutorialData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { template <typename T> class GridFightGridContainer_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET UNITYSDK_OFFSET(0xBC0DFF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0xBC0C2C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0xBC0C4C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET UNITYSDK_OFFSET(0xBC0C760)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET UNITYSDK_OFFSET(0xBC0E0B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET UNITYSDK_OFFSET(0xBC0ECE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET UNITYSDK_OFFSET(0xBC0DE30)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0xBC11A60)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET UNITYSDK_OFFSET(0xBC11C90)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0xBC11900)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET UNITYSDK_OFFSET(0xBC114C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET UNITYSDK_OFFSET(0xBC13DA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET UNITYSDK_OFFSET(0xBC106E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET UNITYSDK_OFFSET(0xBC13CF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET UNITYSDK_OFFSET(0xBC10CA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET UNITYSDK_OFFSET(0xBC14C90)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET UNITYSDK_OFFSET(0xBC14BD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xBC09C20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET UNITYSDK_OFFSET(0xBC10400)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xBC11EC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0xBC09DD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET UNITYSDK_OFFSET(0xBC09ED0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xBC0A9E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xBC0A740)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xBC09CB0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET UNITYSDK_OFFSET(0xBC11620)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET UNITYSDK_OFFSET(0xBC109C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET UNITYSDK_OFFSET(0xBC10F80)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xBC09AC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xBC09D40)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0xBC11260)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xBC09880)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xBC09910)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0xBC099F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xBC0A220)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBC13050)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xBC0A430)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xBC0A2D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xBC0A380)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xBC0A170)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xBC13B10)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xBC13B30)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBC12A70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xBC0A730)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET UNITYSDK_OFFSET(0xBC13340)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET UNITYSDK_OFFSET(0xBC13950)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET UNITYSDK_OFFSET(0xBC13920)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET UNITYSDK_OFFSET(0xBC13630)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xBC12980)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBC12730)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBC12D60)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xBC0A720)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET UNITYSDK_OFFSET(0xBC139B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET UNITYSDK_OFFSET(0xBC15660)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET UNITYSDK_OFFSET(0xBC15670)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET UNITYSDK_OFFSET(0xBC129A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET UNITYSDK_OFFSET(0xBC15680)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET UNITYSDK_OFFSET(0xBC15650)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0xBC0F4D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0xBC0E1F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBC0D140)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET UNITYSDK_OFFSET(0xBC10340)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xBC0F7F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xBC0A0A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET UNITYSDK_OFFSET(0xBC15330)
#define RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET UNITYSDK_OFFSET(0xBC11F20)
#define RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBC0FEF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET UNITYSDK_OFFSET(0xBC0FAD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET UNITYSDK_OFFSET(0xBC0FE10)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET UNITYSDK_OFFSET(0xBC0FC80)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBC0F660)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBC0AA40)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET UNITYSDK_OFFSET(0xBC0D0F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET UNITYSDK_OFFSET(0xBC126A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xBC0A010)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET UNITYSDK_OFFSET(0xBC0F740)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET UNITYSDK_OFFSET(0xBC0FD60)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET UNITYSDK_OFFSET(0xBC0FBB0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET UNITYSDK_OFFSET(0xBC0EDA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0xBC0F5B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET UNITYSDK_OFFSET(0xBC0F9C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET UNITYSDK_OFFSET(0xBC0F8B0)
#define RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0xBC0CE30)
#define RPG_CLIENT_GRIDFIGHTTEAM__CHECKMEMBERCANADDPOPULATION_OFFSET UNITYSDK_OFFSET(0xBC15450)
#define RPG_CLIENT_GRIDFIGHTTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xBC08E60)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0xBC09E20)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET UNITYSDK_OFFSET(0xBC120E0)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET UNITYSDK_OFFSET(0xBC092A0)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET UNITYSDK_OFFSET(0xBC09110)
#define RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0xBC0C900)
#define RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xBC13C50)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xBC125E0)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET UNITYSDK_OFFSET(0xBC12350)
#define RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET UNITYSDK_OFFSET(0xBC0DAA0)
#define RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xBC13B50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_TypeDefinitionIndex = 60916;

	class GridFightTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ExceptedRoleIDs; // 0x10
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* __Projections_k__BackingField; // 0x18
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* __Forges_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _OptionRoleMap; // 0x28
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* __NPCs_k__BackingField; // 0x30
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* __Roles_k__BackingField; // 0x38
		::System::Action* _OnRoleNumberModifierChange; // 0x40
		::Class_1_BE77F98C85B2B14F* _TeamFactory; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedProjectionIDs; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightGridData*>* _GridByPos; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExpertRoleIDs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRole(::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGridByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGrid(::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>* a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET))(this, a1);
		}

		::System::Void UpdateExcpetedRoleIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_ExceptedRoleIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_EXCEPTEDROLEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1, ::Class_0_16E4307DCC419505_768* a2, ::Class_0_16E4307DCC419505_768* a3, ::Class_0_16E4307DCC419505_768* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*, ::Class_0_16E4307DCC419505_768*, ::Class_0_16E4307DCC419505_768*, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddMemberCollectionChangedHandler(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET))(this, a1);
		}

		::System::Void AddMemberPropertyChangedHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET))(this, a1);
		}

		::System::Void AddModifierHandler(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET))(this, a1);
		}

		::System::Void _OnModifierChange(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _ApplyModifier(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SetTeamFactory(::Class_1_BE77F98C85B2B14F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE77F98C85B2B14F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_5*>* a1, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_32*>* a2, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_31*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_5*>*, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_32*>*, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Initialize_1(::Class_1_16A5F3BE522C8CC5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_16A5F3BE522C8CC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET))(this, a1);
		}

		::System::Void UpdateRoleOption(::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_35*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_35*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET))(this, a1);
		}

		::System::Void AddRole(::Class_1_B1FF62FAE312BC49_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateRole(::Class_1_B1FF62FAE312BC49_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void AddForge(::Class_1_4BC858D7C27E10ED_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateForge(::Class_1_4BC858D7C27E10ED_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET))(this, a1);
		}

		::System::Boolean IsProjectionIDUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateUnlockProjectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET))(this, a1);
		}

		::System::Void UpdateUnlockExpertID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET))(this, a1);
		}

		::System::Void RemoveForge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET))(this, a1);
		}

		::System::Void AddNPC(::Class_1_4BC858D7C27E10ED_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET))(this, a1);
		}

		::System::Void AddProjection(::Class_1_D1E0AD3915BCCF29_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET))(this, a1);
		}

		::System::Void UpdateProjection(::Class_1_D1E0AD3915BCCF29_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET))(this, a1);
		}

		::System::Void RemoveProjection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET))(this, a1);
		}

		::System::Void UpdateNPC(::Class_1_4BC858D7C27E10ED_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET))(this, a1);
		}

		::System::Void RemoveNPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Boolean IsExpertUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetFrontRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBackRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetOnBoardRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBenchRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetOvercrowdRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRoleByIDAndStar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* GetOnBoardNPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* GetAllNPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET))(this);
		}

		::System::Boolean ContainsRoleID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsRoleOnBoard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* GetGridByPlacementIndex(::RPG::Client::GridFightPlacementType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void MoveGridItemTo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET))(this, a1, a2);
		}

		::System::Void SummonPorjection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_OnBoardMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_OnBoardMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_BenchMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_OvercrowdMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FrontRoleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET))(this);
		}

		::System::Boolean get_IsBoardFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET))(this);
		}

		::System::Boolean get_IsBenchFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_UnlockExpertRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET))(this);
		}

		::System::UInt32 get_BackMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_BenchMemberCountLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET))(this);
		}

		::System::Void _RequestMoveGridItem(::RPG::Client::GridFightGridMember* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestSwapGridItem(::RPG::Client::GridFightGridMember* a1, ::RPG::Client::GridFightGridMember* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET))(this);
		}

		::System::Void _InitContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET))(this);
		}

		::System::Void _UpdateGridItem(::RPG::Client::GridFightGridMember* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveGridItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* _GetGridByPos(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridData* _GetGridByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET))(this, a1);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetBenchRolesNotOnBoard()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllTrackedUnownedRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET))(this);
		}

		::System::UInt32 GetCurOptionRole(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurOptionRoleByAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUsePopulation(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckMemberCanAddPopulation(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__CHECKMEMBERCANADDPOPULATION_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* get__Roles()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* get__Forges()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* get__NPCs()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET))(this);
		}

		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* get__Projections()
		{
			return ((::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET))(this);
		}

		::RPG::Client::GridFightPlayer* get__Player()
		{
			return ((::RPG::Client::GridFightPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTutorialData* get__TutorialData()
		{
			return ((::RPG::Client::GridFightGameTutorialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET))(this);
		}
	};
}
