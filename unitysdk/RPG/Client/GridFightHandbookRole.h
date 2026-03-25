#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightRoleSkill; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightValueComponent; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0x9853B50)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x9853AB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x98539D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x9853A60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETMERGEDTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x9853370)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GETSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x9853B00)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x98537B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0x9853960)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0x9853980)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_DEFAULTROLE_OFFSET UNITYSDK_OFFSET(0x9853280)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9853750)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_HASOTHERROLE_OFFSET UNITYSDK_OFFSET(0x9851590)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x98536D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISBACKCONFIG_OFFSET UNITYSDK_OFFSET(0x98537F0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISFRONTCONFIG_OFFSET UNITYSDK_OFFSET(0x98537D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0x9853880)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x98538E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLE_OFFSET UNITYSDK_OFFSET(0x98532A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x9853940)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x98515A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x9853790)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x9853810)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x9853730)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0x9853710)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x98536F0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9853770)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9853320)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9853660)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SETOTHERROLE_OFFSET UNITYSDK_OFFSET(0x98532D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_DEFAULTROLE_OFFSET UNITYSDK_OFFSET(0x9853290)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLE_OFFSET UNITYSDK_OFFSET(0x98532B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x98532C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole_TypeDefinitionIndex = 52691;

	class GridFightHandbookRole : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _OtherRole_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _DefaultRole_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightRole* defaultRole)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE__CTOR_OFFSET))(this, defaultRole);
		}

		::RPG::Client::GridFightRole* get_DefaultRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_DEFAULTROLE_OFFSET))(this);
		}

		::System::Void set_DefaultRole(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_DEFAULTROLE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_OtherRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_OTHERROLE_OFFSET))(this);
		}

		::System::Void set_OtherRole(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SET_OTHERROLE_OFFSET))(this, value);
		}

		::System::Void SetOtherRole(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_SETOTHERROLE_OFFSET))(this, role);
		}

		static ::RPG::Client::GridFightRole* op_Implicit(::RPG::Client::GridFightHandbookRole* handbook)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_OP_IMPLICIT_OFFSET))(handbook);
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

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_GET_AVATARDATA_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* traits)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE_CONTAINSTRAIT_OFFSET))(this, traits);
		}
	};
}
