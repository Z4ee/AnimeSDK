#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
class Class_1_120319518E6F6581_36;
class Class_1_789872D6523A4E58;
class Class_1_99BD961747420BEB_29;
class Class_1_99BD961747420BEB_30;
class Class_1_B1FF62FAE312BC49_7;
class Class_1_E7EDAB23D97798C5_1;
class Class_1_F1E9B98123CB5682;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameTutorialData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { template <typename T> class GridFightGridContainer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET UNITYSDK_OFFSET(0x98BA630)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x98B8850)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET UNITYSDK_OFFSET(0x98B8AF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET UNITYSDK_OFFSET(0x98B8CF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET UNITYSDK_OFFSET(0x98BA6F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET UNITYSDK_OFFSET(0x98BB350)
#define RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET UNITYSDK_OFFSET(0x98BA3F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0x98AE6F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_CONTAINSROLEONBOARD_OFFSET UNITYSDK_OFFSET(0x98BD3F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0x98BD290)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLROLES_OFFSET UNITYSDK_OFFSET(0x98BCF00)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETALLTRACKEDUNOWNEDROLES_OFFSET UNITYSDK_OFFSET(0x98BEC70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBACKROLES_OFFSET UNITYSDK_OFFSET(0x98BC430)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLESNOTONBOARD_OFFSET UNITYSDK_OFFSET(0x98BEBC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETBENCHROLES_OFFSET UNITYSDK_OFFSET(0x98BC8B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x98B7200)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETFRONTROLES_OFFSET UNITYSDK_OFFSET(0x98BC1F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x98BD540)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0x98B7500)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETGRID_OFFSET UNITYSDK_OFFSET(0x98B7630)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x98B7CA0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x98B7AE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x98B7300)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDNPCS_OFFSET UNITYSDK_OFFSET(0x98BD050)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETONBOARDROLES_OFFSET UNITYSDK_OFFSET(0x98BC670)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETOVERCROWDROLES_OFFSET UNITYSDK_OFFSET(0x98BCAF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x98B70F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x98B7400)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0x98BCD30)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x98B6E80)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x98B6F80)
#define RPG_CLIENT_GRIDFIGHTTEAM_GETROLE_OFFSET UNITYSDK_OFFSET(0x98B7050)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x98B7750)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x98BE210)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x98B78D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x98B77D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x98B7850)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x98B76D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BACKMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x98BE8C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x98BE970)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_BENCHMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x98BDED0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_FRONTROLECOUNT_OFFSET UNITYSDK_OFFSET(0x98BE3B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBENCHFULL_OFFSET UNITYSDK_OFFSET(0x98BE720)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISBOARDFULL_OFFSET UNITYSDK_OFFSET(0x98BE6F0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ISOVERCROWD_OFFSET UNITYSDK_OFFSET(0x98BE550)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x98BDD70)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_ONBOARDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x98BDBD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_OVERCROWDMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x98BE070)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x98B7AD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET_UNLOCKEXPERTROLES_OFFSET UNITYSDK_OFFSET(0x98BE780)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__FORGES_OFFSET UNITYSDK_OFFSET(0x98BFBD0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__NPCS_OFFSET UNITYSDK_OFFSET(0x98BFBE0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PLAYER_OFFSET UNITYSDK_OFFSET(0x98BDE20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x98BFBF0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__ROLES_OFFSET UNITYSDK_OFFSET(0x98BFBC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GET__TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0x98BB410)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x98BA830)
#define RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x98B96D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISEXPERTUNLOCK_OFFSET UNITYSDK_OFFSET(0x98BC190)
#define RPG_CLIENT_GRIDFIGHTTEAM_ISPROJECTIONIDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x98BB7D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_MOVEGRIDITEMTO_OFFSET UNITYSDK_OFFSET(0x98BD5A0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x98BBD90)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEFORGE_OFFSET UNITYSDK_OFFSET(0x98BB930)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVENPC_OFFSET UNITYSDK_OFFSET(0x98BBD00)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET UNITYSDK_OFFSET(0x98BBB30)
#define RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0x98BB600)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x98B7D00)
#define RPG_CLIENT_GRIDFIGHTTEAM_SETTEAMFACTORY_OFFSET UNITYSDK_OFFSET(0x98B9680)
#define RPG_CLIENT_GRIDFIGHTTEAM_SUMMONPORJECTION_OFFSET UNITYSDK_OFFSET(0x98BDB40)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET UNITYSDK_OFFSET(0x98BB690)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET UNITYSDK_OFFSET(0x98BBBC0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET UNITYSDK_OFFSET(0x98BB9C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x98BB4C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKEXPERTID_OFFSET UNITYSDK_OFFSET(0x98BB8B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_UPDATEUNLOCKPROJECTIONID_OFFSET UNITYSDK_OFFSET(0x98BB830)
#define RPG_CLIENT_GRIDFIGHTTEAM__APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0x98B93F0)
#define RPG_CLIENT_GRIDFIGHTTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x98B65A0)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYPOS_OFFSET UNITYSDK_OFFSET(0x98B7550)
#define RPG_CLIENT_GRIDFIGHTTEAM__GETGRIDBYUID_OFFSET UNITYSDK_OFFSET(0x98BD760)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITCONTAINERS_OFFSET UNITYSDK_OFFSET(0x98B6910)
#define RPG_CLIENT_GRIDFIGHTTEAM__INITGRIDS_OFFSET UNITYSDK_OFFSET(0x98B6780)
#define RPG_CLIENT_GRIDFIGHTTEAM__ONMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0x98B8E90)
#define RPG_CLIENT_GRIDFIGHTTEAM__REMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x98BEB20)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTMOVEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x98BDA80)
#define RPG_CLIENT_GRIDFIGHTTEAM__REQUESTSWAPGRIDITEM_OFFSET UNITYSDK_OFFSET(0x98BD8A0)
#define RPG_CLIENT_GRIDFIGHTTEAM__RESET_OFFSET UNITYSDK_OFFSET(0x98BA010)
#define RPG_CLIENT_GRIDFIGHTTEAM__UPDATEGRIDITEM_OFFSET UNITYSDK_OFFSET(0x98BEA20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_TypeDefinitionIndex = 52903;

	class GridFightTeam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedProjectionIDs; // 0x10
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightForgeItemData*>* __Forges_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightGridData*>* _GridByPos; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExpertRoleIDs; // 0x28
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightNPC*>* __NPCs_k__BackingField; // 0x30
		::Class_1_F1E9B98123CB5682* _TeamFactory; // 0x38
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightRole*>* __Roles_k__BackingField; // 0x40
		::RPG::Client::GridFightGridContainer_1<::RPG::Client::GridFightProjection*>* __Projections_k__BackingField; // 0x48

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

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* roleCollector, ::Class_0_16E4307DCC419505_626* forgeCollector, ::Class_0_16E4307DCC419505_626* npcCollector, ::Class_0_16E4307DCC419505_626* projCollector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*, ::Class_0_16E4307DCC419505_626*, ::Class_0_16E4307DCC419505_626*, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_SETCOLLECTOR_OFFSET))(this, roleCollector, forgeCollector, npcCollector, projCollector);
		}

		::System::Void AddMemberCollectionChangedHandler(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERCOLLECTIONCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Void AddMemberPropertyChangedHandler(::System::ComponentModel::PropertyChangedEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMEMBERPROPERTYCHANGEDHANDLER_OFFSET))(this, handler);
		}

		::System::Void AddModifierHandler(::Class_1_789872D6523A4E58* modifierInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_789872D6523A4E58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDMODIFIERHANDLER_OFFSET))(this, modifierInfo);
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

		::System::Void Initialize(::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_7*>* roles, ::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_30*>* forges, ::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_29*>* npcs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_B1FF62FAE312BC49_7*>*, ::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_30*>*, ::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_29*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_OFFSET))(this, roles, forges, npcs);
		}

		::System::Void Initialize_1(::Class_1_E7EDAB23D97798C5_1* gridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7EDAB23D97798C5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_INITIALIZE_1_OFFSET))(this, gridInfo);
		}

		::System::Void AddRole(::Class_1_B1FF62FAE312BC49_7* protoRole)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDROLE_OFFSET))(this, protoRole);
		}

		::System::Void UpdateRole(::Class_1_B1FF62FAE312BC49_7* protoRole)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEROLE_OFFSET))(this, protoRole);
		}

		::System::Void RemoveRole(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEROLE_OFFSET))(this, uid);
		}

		::System::Void AddForge(::Class_1_99BD961747420BEB_30* forge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDFORGE_OFFSET))(this, forge);
		}

		::System::Void UpdateForge(::Class_1_99BD961747420BEB_30* forge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEFORGE_OFFSET))(this, forge);
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

		::System::Void AddNPC(::Class_1_99BD961747420BEB_29* protoNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDNPC_OFFSET))(this, protoNPC);
		}

		::System::Void AddProjection(::Class_1_120319518E6F6581_36* protoProjection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ADDPROJECTION_OFFSET))(this, protoProjection);
		}

		::System::Void UpdateProjection(::Class_1_120319518E6F6581_36* protoProjection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATEPROJECTION_OFFSET))(this, protoProjection);
		}

		::System::Void RemoveProjection(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_REMOVEPROJECTION_OFFSET))(this, uid);
		}

		::System::Void UpdateNPC(::Class_1_99BD961747420BEB_29* protoNPC)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_UPDATENPC_OFFSET))(this, protoNPC);
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
