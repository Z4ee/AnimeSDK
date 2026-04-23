#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_1_16A5F3BE522C8CC5;
class Class_1_45BB92167AED63A0_33;
class Class_1_4BC858D7C27E10ED_30;
class Class_1_4BC858D7C27E10ED_31;
class Class_1_B1FF62FAE312BC49_4;
class Class_1_D1E0AD3915BCCF29_37;
class Class_1_F1E9B98123CB5682;
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

#define RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET UNITYSDK_OFFSET(0xA59E250)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0xA59C430)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0xA59C6D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET UNITYSDK_OFFSET(0xA59C8D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET UNITYSDK_OFFSET(0xA59E310)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET UNITYSDK_OFFSET(0xA59EF50)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET UNITYSDK_OFFSET(0xA59E000)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0xA590EB0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET UNITYSDK_OFFSET(0xA5A1760)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0xA5A1600)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET UNITYSDK_OFFSET(0xA5A1270)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET UNITYSDK_OFFSET(0xA5A2D90)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET UNITYSDK_OFFSET(0xA5A07A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET UNITYSDK_OFFSET(0xA5A2CE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET UNITYSDK_OFFSET(0xA5A0C20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA5A3D40)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET UNITYSDK_OFFSET(0xA5900B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0xA59AC70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET UNITYSDK_OFFSET(0xA5A0560)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xA5A18B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0xA59AF70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET UNITYSDK_OFFSET(0xA59B0A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0xA59B810)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0xA59B650)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0xA59AD70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET UNITYSDK_OFFSET(0xA5A13C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET UNITYSDK_OFFSET(0xA5A09E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET UNITYSDK_OFFSET(0xA5A0E60)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0xA59AB60)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0xA59AE70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0xA5A10A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0xA59A8F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0xA59A9F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0xA59AAC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0xA59B2B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA5A2450)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xA59B430)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0xA59B330)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0xA59B3B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0xA59B230)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xA5A2B00)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xA5A2B20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA5A2110)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xA59B640)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET UNITYSDK_OFFSET(0xA5A25F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET UNITYSDK_OFFSET(0xA5A2960)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET UNITYSDK_OFFSET(0xA5A2930)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET UNITYSDK_OFFSET(0xA5A2790)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xA5A2020)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA5A1F10)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA5A22B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0xA59B630)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET UNITYSDK_OFFSET(0xA5A29C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET UNITYSDK_OFFSET(0xA5A4630)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET UNITYSDK_OFFSET(0xA5A4640)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET UNITYSDK_OFFSET(0xA5A2040)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET UNITYSDK_OFFSET(0xA5A4650)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET UNITYSDK_OFFSET(0xA5A4620)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0xA59F750)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0xA59E450)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA59D2E0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5A0500)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA59FB40)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA59B1D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET UNITYSDK_OFFSET(0xA5A4360)
#define RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET UNITYSDK_OFFSET(0xA5A1910)
#define RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xA5A0100)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET UNITYSDK_OFFSET(0xA59FCA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET UNITYSDK_OFFSET(0xA5A0070)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET UNITYSDK_OFFSET(0xA59FEA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0xA59F970)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA59B870)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET UNITYSDK_OFFSET(0xA59D290)
#define RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET UNITYSDK_OFFSET(0xA5A1E80)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xA59B140)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET UNITYSDK_OFFSET(0xA59FA00)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET UNITYSDK_OFFSET(0xA59FF30)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET UNITYSDK_OFFSET(0xA59FD30)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET UNITYSDK_OFFSET(0xA59F010)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0xA59F830)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET UNITYSDK_OFFSET(0xA59FC20)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET UNITYSDK_OFFSET(0xA59FBA0)
#define RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA59CFD0)
#define RPG_CLIENT_GRIDFIGHTTEAM__CHECKMEMBERCANADDPOPULATION_OFFSET UNITYSDK_OFFSET(0xA5A4480)
#define RPG_CLIENT_GRIDFIGHTTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA599F50)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0xA59AFC0)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET UNITYSDK_OFFSET(0xA5A1AD0)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET UNITYSDK_OFFSET(0xA59A380)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET UNITYSDK_OFFSET(0xA59A1F0)
#define RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0xA59CA30)
#define RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xA5A2C40)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xA5A1DC0)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET UNITYSDK_OFFSET(0xA5A1C10)
#define RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET UNITYSDK_OFFSET(0xA59DC20)
#define RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET UNITYSDK_OFFSET(0xA5A2B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_TypeDefinitionIndex = 59981;

	class GridFightTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _OptionRoleMap; // 0x10
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* __NPCs_k__BackingField; // 0x18
		::System::Action* _OnRoleNumberModifierChange; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ExceptedRoleIDs; // 0x28
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* __Projections_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedProjectionIDs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightGridData*>* _GridByPos; // 0x40
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* __Roles_k__BackingField; // 0x48
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* __Forges_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExpertRoleIDs; // 0x58
		::Class_1_F1E9B98123CB5682* _TeamFactory; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRole(::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>* pred)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET))(this, pred);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 projID)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET))(this, projID);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightGridData* GetGridByPos(::System::UInt32 posIndex)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET))(this, posIndex);
		}

		::RPG::Client::GridFightGridData* GetGrid(::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>* pred)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET))(this, pred);
		}

		::System::Void UpdateExcpetedRoleIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* roleIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEEXCPETEDROLEIDS_OFFSET))(this, roleIDs);
		}

		::System::Boolean IsRoleUnlock(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUNLOCK_OFFSET))(this, roleID);
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

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* roleCollector, ::Class_0_16E4307DCC419505_717* forgeCollector, ::Class_0_16E4307DCC419505_717* npcCollector, ::Class_0_16E4307DCC419505_717* projCollector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*, ::Class_0_16E4307DCC419505_717*, ::Class_0_16E4307DCC419505_717*, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET))(this, roleCollector, forgeCollector, npcCollector, projCollector);
		}

		::System::Void AddMemberCollectionChangedHandler(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Void AddMemberPropertyChangedHandler(::System::ComponentModel::PropertyChangedEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Void AddModifierHandler(::RPG::Client::GridFightModifierInfo* modifierInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET))(this, modifierInfo);
		}

		::System::Void _OnModifierChange(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET))(this, modifier);
		}

		::System::Void _ApplyModifier(::RPG::Client::GridFightRole* addRole)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET))(this, addRole);
		}

		::System::Void SetTeamFactory(::Class_1_F1E9B98123CB5682* teamFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1E9B98123CB5682*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET))(this, teamFactory);
		}

		::System::Void Initialize(::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_4*>* roles, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_31*>* forges, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_30*>* npcs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_4*>*, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_31*>*, ::System::Collections::Generic::IList_1<::Class_1_4BC858D7C27E10ED_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET))(this, roles, forges, npcs);
		}

		::System::Void Initialize_1(::Class_1_16A5F3BE522C8CC5* gridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_16A5F3BE522C8CC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET))(this, gridInfo);
		}

		::System::Void UpdateRoleOption(::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_33*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLEOPTION_OFFSET))(this, options);
		}

		::System::Void AddRole(::Class_1_B1FF62FAE312BC49_4* protoRole)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET))(this, protoRole);
		}

		::System::Void UpdateRole(::Class_1_B1FF62FAE312BC49_4* protoRole)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET))(this, protoRole);
		}

		::System::Void RemoveRole(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET))(this, uid);
		}

		::System::Void AddForge(::Class_1_4BC858D7C27E10ED_31* forge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET))(this, forge);
		}

		::System::Void UpdateForge(::Class_1_4BC858D7C27E10ED_31* forge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET))(this, forge);
		}

		::System::Boolean IsProjectionIDUnlocked(::System::UInt32 projectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET))(this, projectionID);
		}

		::System::Void UpdateUnlockProjectionID(::System::UInt32 projectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET))(this, projectionID);
		}

		::System::Void UpdateUnlockExpertID(::System::UInt32 expertRoleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET))(this, expertRoleID);
		}

		::System::Void RemoveForge(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET))(this, uid);
		}

		::System::Void AddNPC(::Class_1_4BC858D7C27E10ED_30* protoNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET))(this, protoNPC);
		}

		::System::Void AddProjection(::Class_1_D1E0AD3915BCCF29_37* protoProjection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET))(this, protoProjection);
		}

		::System::Void UpdateProjection(::Class_1_D1E0AD3915BCCF29_37* protoProjection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET))(this, protoProjection);
		}

		::System::Void RemoveProjection(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET))(this, uid);
		}

		::System::Void UpdateNPC(::Class_1_4BC858D7C27E10ED_30* protoNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET))(this, protoNPC);
		}

		::System::Void RemoveNPC(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET))(this, uid);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Boolean IsExpertUnlock(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET))(this, roleID);
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

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRoleByIDAndStar(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET))(this, id, star);
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

		::System::Boolean ContainsRoleID(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET))(this, roleID);
		}

		::System::Boolean ContainsRoleOnBoard(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET))(this, roleID);
		}

		::RPG::Client::GridFightGridData* GetGridByPlacementIndex(::RPG::Client::GridFightPlacementType type, ::System::UInt32 index)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::Client::GridFightPlacementType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET))(this, type, index);
		}

		::System::Void MoveGridItemTo(::System::UInt32 uid, ::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET))(this, uid, pos);
		}

		::System::Void SummonPorjection(::System::UInt32 projectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET))(this, projectionID);
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

		::System::Void _RequestMoveGridItem(::RPG::Client::GridFightGridMember* member, ::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET))(this, member, pos);
		}

		::System::Void _RequestSwapGridItem(::RPG::Client::GridFightGridMember* lhs, ::RPG::Client::GridFightGridMember* rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET))(this, lhs, rhs);
		}

		::System::Void _InitGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET))(this);
		}

		::System::Void _InitContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET))(this);
		}

		::System::Void _UpdateGridItem(::RPG::Client::GridFightGridMember* member, ::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET))(this, member, pos);
		}

		::System::Void _RemoveGridItem(::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET))(this, pos);
		}

		::RPG::Client::GridFightGridData* _GetGridByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET))(this, pos);
		}

		::RPG::Client::GridFightGridData* _GetGridByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET))(this, uid);
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

		::System::UInt32 GetCurOptionRole(::System::UInt32 roleID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLE_OFFSET))(this, roleID);
		}

		::System::UInt32 GetCurOptionRoleByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETCUROPTIONROLEBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Boolean IsRoleUsePopulation(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ISROLEUSEPOPULATION_OFFSET))(this, role);
		}

		::System::Boolean _CheckMemberCanAddPopulation(::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM__CHECKMEMBERCANADDPOPULATION_OFFSET))(this, grid);
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
