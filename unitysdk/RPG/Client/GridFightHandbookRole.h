#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightRoleSkill; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xBB99800)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB99760)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB99680)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB99710)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETMERGEDTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB98EF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB997B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xBB99460)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xBB99610)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0xBB99630)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_DEFAULTROLE_OFFSET UNITYSDK_OFFSET(0xBB98C60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBB99400)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_HASOTHERROLE_OFFSET UNITYSDK_OFFSET(0xBB96DB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBB99380)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISBACKCONFIG_OFFSET UNITYSDK_OFFSET(0xBB994A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISFRONTCONFIG_OFFSET UNITYSDK_OFFSET(0xBB99480)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0xBB99530)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xBB99590)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLES_OFFSET UNITYSDK_OFFSET(0xBB98CA0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLE_OFFSET UNITYSDK_OFFSET(0xBB98C80)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_REMARK_OFFSET UNITYSDK_OFFSET(0xBB995F0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xBB96E10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0xBB99440)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xBB994C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xBB993E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0xBB993C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBB993A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBB99420)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xBB98EA0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0xBB99220)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SETOTHERROLE_OFFSET UNITYSDK_OFFSET(0xBB98D20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_DEFAULTROLE_OFFSET UNITYSDK_OFFSET(0xBB98C70)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLES_OFFSET UNITYSDK_OFFSET(0xBB98CB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLE_OFFSET UNITYSDK_OFFSET(0xBB98C90)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB98CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole_TypeDefinitionIndex = 60682;

	class GridFightHandbookRole : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _OtherRoles_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _OtherRole_k__BackingField; // 0x18
		::RPG::Client::GridFightRole* _DefaultRole_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_DefaultRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_DEFAULTROLE_OFFSET))(this);
		}

		::System::Void set_DefaultRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_DEFAULTROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_OtherRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLE_OFFSET))(this);
		}

		::System::Void set_OtherRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_OtherRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLES_OFFSET))(this);
		}

		::System::Void set_OtherRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLES_OFFSET))(this, a1);
		}

		::System::Void SetOtherRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SETOTHERROLE_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRole* op_Implicit(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetMergedTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETMERGEDTRAITCONFIGS_OFFSET))(this);
		}

		::System::Void RefreshAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_REFRESHAVATARDATA_OFFSET))(this);
		}

		::System::Boolean get_HasOtherRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_HASOTHERROLE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STAR_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleStarConfig* get_StarConfig()
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STARCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkill* get_Skill()
		{
			return ((::RPG::Client::GridFightRoleSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SKILL_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::RPG::Client::GridFightValueComponent* get_SavedValueMap()
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SAVEDVALUEMAP_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Boolean get_IsFrontConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISFRONTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsBackConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISBACKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Boolean get_IsTrailAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISTRAILAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_REMARK_OFFSET))(this);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CURRENTRANK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFrontFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBackFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_CONTAINSTRAIT_OFFSET))(this, a1);
		}
	};
}
