#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_641;
class Class_0_16E4307DCC419505_642;
class Class_1_B1FF62FAE312BC49_7;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightRoleEffect; }
namespace RPG::Client { class GridFightRoleSkill; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightRole_GridFightRoleBuilder; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x988EFA0)
#define RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0x988E9D0)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET UNITYSDK_OFFSET(0x988DCE0)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0x9884E50)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E170)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E5B0)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E050)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E290)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E490)
#define RPG_CLIENT_GRIDFIGHTROLE_GETSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x988E6D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x988F290)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x988F360)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0x988EF90)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0x988E830)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0x988F1E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x988F300)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x988ECF0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x988F060)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISBACKCONFIG_OFFSET UNITYSDK_OFFSET(0x988B110)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET UNITYSDK_OFFSET(0x988F130)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISFRONTCONFIG_OFFSET UNITYSDK_OFFSET(0x988E0B0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0x988E930)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x988E980)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x988E810)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x988F120)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTIONID_OFFSET UNITYSDK_OFFSET(0x988ED10)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x988ED80)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x988F380)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x988EAB0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x988F2A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x988F3A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x988F340)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x988E8C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x988F2E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0x988F2C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x988F110)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x988F320)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0x988E820)
#define RPG_CLIENT_GRIDFIGHTROLE_ISUNRELEASEDOUTSIDE_OFFSET UNITYSDK_OFFSET(0x988EE40)
#define RPG_CLIENT_GRIDFIGHTROLE_REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0x988DF40)
#define RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x988F000)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x988DEB0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x988F370)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0x988F1F0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x988F310)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET UNITYSDK_OFFSET(0x988D570)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET UNITYSDK_OFFSET(0x988F140)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x988DAF0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x988F390)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x988F2B0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x988F3B0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x988F350)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET UNITYSDK_OFFSET(0x988F2F0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0x988F2D0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0x988D680)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x988F330)
#define RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x988DD40)
#define RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET UNITYSDK_OFFSET(0x988F700)
#define RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET UNITYSDK_OFFSET(0x988D7F0)
#define RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x988D450)
#define RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET UNITYSDK_OFFSET(0x988E3B0)
#define RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x988DAA0)
#define RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x988F3C0)
#define RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x988F660)
#define RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET UNITYSDK_OFFSET(0x988F4C0)
#define RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x988F750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_TypeDefinitionIndex = 52858;

	class GridFightRole : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x28
		::RPG::Client::GridFightRoleEffect* _RoleEffect_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_641* _PropertyProvider_k__BackingField; // 0x38
		::System::Action* OnActiveChanged; // 0x40
		::RPG::Client::GridFightRoleSkill* _Skill_k__BackingField; // 0x48
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x50
		::RPG::Client::GridFightValueComponent* _SavedValueMap_k__BackingField; // 0x58
		::Class_0_16E4307DCC419505_642* _AvatarDataProvider; // 0x60
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x68
		::RPG::Client::GridFightRoleStarConfig* _StarConfig_k__BackingField; // 0x70
		::RPG::Client::IAvatarInfoProvider* _AvatarData_k__BackingField; // 0x78
		::System::UInt32 _ID; // 0x80
		::System::Boolean _IsDelay; // 0x84
		::System::Boolean IsUnreleased; // 0x85
		::System::UInt32 _DelayRound; // 0x88
		::System::UInt32 _Star; // 0x8C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET))(this, id, star);
		}

		static ::RPG::Client::GridFightRole* _Create(::RPG::Client::GridFightRole_GridFightRoleBuilder* builder)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightRole_GridFightRoleBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET))(builder);
		}

		static ::RPG::Client::GridFightRole* CreateDummy(::System::UInt32 id, ::System::UInt32 star, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET))(id, star, equipIDs);
		}

		static ::RPG::Client::GridFightRole* CreateDummyTeamRole(::Class_1_B1FF62FAE312BC49_7* protoRole)
		{
			return ((::RPG::Client::GridFightRole*(*)(::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET))(protoRole);
		}

		::System::Void Update(::Class_1_B1FF62FAE312BC49_7* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET))(this, role);
		}

		::System::Void RefreshAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_REFRESHAVATARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFrontFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBackFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFrontSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFRONTSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBackSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETBACKSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_CURRENTRANK_OFFSET))(this);
		}

		::System::Boolean get_IsFrontConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISFRONTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsBackConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISBACKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Boolean get_IsTrailAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISTRAILAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* traits)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET))(this, traits);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_REMARK_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPS_OFFSET))(this);
		}

		::System::UInt32 get_ProjectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTIONID_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTION_OFFSET))(this);
		}

		::System::Boolean IsUnreleasedOutside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_ISUNRELEASEDOUTSIDE_OFFSET))(this);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET))(this, value);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET))(this);
		}

		::System::Void set_IsDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET))(this, value);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Void set_DelayRound(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET))(this, value);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleStarConfig* get_StarConfig()
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET))(this);
		}

		::System::Void set_StarConfig(::RPG::Client::GridFightRoleStarConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleSkill* get_Skill()
		{
			return ((::RPG::Client::GridFightRoleSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::GridFightRoleSkill* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightValueComponent* get_SavedValueMap()
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET))(this);
		}

		::System::Void set_SavedValueMap(::RPG::Client::GridFightValueComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightValueComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_641* get_PropertyProvider()
		{
			return ((::Class_0_16E4307DCC419505_641*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::Class_0_16E4307DCC419505_641* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_641*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Void set_RoleEffect(::RPG::Client::GridFightRoleEffect* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET))(this, value);
		}

		::System::Void _InitAvatarDataProvider(::Class_0_16E4307DCC419505_642* avatarDataProvider)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_642*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET))(this, avatarDataProvider);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _OnRolePropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _UpdateTraitIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetRecommendEquipListWithFrontBack(::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>* equipListSelector, ::System::Boolean isFront)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET))(this, equipListSelector, isFront);
		}

		::System::Boolean _ContainsTrait_b__28_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET))(this, id);
		}

		::System::Void __iFixBaseProxy_set_PosIndex(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET))(this, P0);
		}
	};
}
