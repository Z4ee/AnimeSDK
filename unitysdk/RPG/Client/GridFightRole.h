#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_787;
class Class_0_16E4307DCC419505_788;
class Class_1_B1FF62FAE312BC49_5;
namespace RPG::AvatarSystem { class IAvatar; }
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

#define RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xBBDC5E0)
#define RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xBBDBDF0)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET UNITYSDK_OFFSET(0xBBDB060)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0xBBD0750)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDB4F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDB9C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDB3D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDB640)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDB870)
#define RPG_CLIENT_GRIDFIGHTROLE_GETSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBBDBB10)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xBBDC830)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xBBDC900)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xBBDC5D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0xBBDBC90)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xBBDC780)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDC8A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBBDC1F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBDC6A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISBACKCONFIG_OFFSET UNITYSDK_OFFSET(0xBBD6850)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET UNITYSDK_OFFSET(0xBBDC6D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISFRONTCONFIG_OFFSET UNITYSDK_OFFSET(0xBBDB430)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0xBBDBD50)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xBBDBDA0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xBBDBC70)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDC6C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTIONID_OFFSET UNITYSDK_OFFSET(0xBBDC360)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0xBBDC3D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBBDC920)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_REMARK_OFFSET UNITYSDK_OFFSET(0xBBDBF10)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xBBDC840)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xBBDC940)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0xBBDC8E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xBBDBCE0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xBBDC880)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0xBBDC860)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBBDC6B0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDC8C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0xBBDBC80)
#define RPG_CLIENT_GRIDFIGHTROLE_ISUNRELEASEDOUTSIDE_OFFSET UNITYSDK_OFFSET(0xBBDC490)
#define RPG_CLIENT_GRIDFIGHTROLE_REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0xBBDB2C0)
#define RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xBBDC640)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xBBDB230)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xBBDC910)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0xBBDC790)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDC8B0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET UNITYSDK_OFFSET(0xBBDA8E0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET UNITYSDK_OFFSET(0xBBDC6E0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDAEA0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBBDC930)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xBBDC850)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xBBDC950)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0xBBDC8F0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET UNITYSDK_OFFSET(0xBBDC890)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0xBBDC870)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0xBBDAA20)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDC8D0)
#define RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBDB0C0)
#define RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET UNITYSDK_OFFSET(0xBBDCDD0)
#define RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET UNITYSDK_OFFSET(0xBBDAAE0)
#define RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA780)
#define RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET UNITYSDK_OFFSET(0xBBDB790)
#define RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBBDAE50)
#define RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCHANGED_OFFSET UNITYSDK_OFFSET(0xBBDCC30)
#define RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xBBDC960)
#define RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBBDCD30)
#define RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET UNITYSDK_OFFSET(0xBBDCA70)
#define RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDCE20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_TypeDefinitionIndex = 60869;

	class GridFightRole : public ::RPG::Client::GridFightGridMember
	{
	public:
		::Class_0_16E4307DCC419505_787* _AvatarDataProvider; // 0x20
		::System::Action* OnActiveChanged; // 0x28
		::RPG::Client::GridFightRoleSkill* _Skill_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_788* _PropertyProvider_k__BackingField; // 0x38
		::RPG::Client::GridFightRoleStarConfig* _StarConfig_k__BackingField; // 0x40
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x48
		::RPG::Client::GridFightValueComponent* _SavedValueMap_k__BackingField; // 0x50
		::RPG::AvatarSystem::IAvatar* _AvatarData_k__BackingField; // 0x58
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x60
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x68
		::RPG::Client::GridFightRoleEffect* _RoleEffect_k__BackingField; // 0x70
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x78
		::System::UInt32 _ID; // 0x80
		::System::UInt32 _DelayRound; // 0x84
		::System::UInt32 _Star; // 0x88
		::System::Boolean _IsDelay; // 0x8C
		::System::Boolean IsUnreleased; // 0x8D

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightRole* _Create(::RPG::Client::GridFightRole_GridFightRoleBuilder* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightRole_GridFightRoleBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightRole* CreateDummy(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightRole* CreateDummyTeamRole(::Class_1_B1FF62FAE312BC49_5* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET))(a1);
		}

		::System::Void Update(::Class_1_B1FF62FAE312BC49_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET))(this, a1);
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

		::System::Void add_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET))(this);
		}

		::System::Void set_IsDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Void set_DelayRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleStarConfig* get_StarConfig()
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET))(this);
		}

		::System::Void set_StarConfig(::RPG::Client::GridFightRoleStarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleSkill* get_Skill()
		{
			return ((::RPG::Client::GridFightRoleSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::GridFightRoleSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightValueComponent* get_SavedValueMap()
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET))(this);
		}

		::System::Void set_SavedValueMap(::RPG::Client::GridFightValueComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightValueComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_788* get_PropertyProvider()
		{
			return ((::Class_0_16E4307DCC419505_788*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::Class_0_16E4307DCC419505_788* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_788*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Void set_RoleEffect(::RPG::Client::GridFightRoleEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET))(this, a1);
		}

		::System::Void _InitAvatarDataProvider(::Class_0_16E4307DCC419505_787* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_787*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEquipComponentChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRolePropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTraitIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetRecommendEquipListWithFrontBack(::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ContainsTrait_b__28_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET))(this, a1);
		}
	};
}
