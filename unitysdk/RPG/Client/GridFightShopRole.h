#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"

class Class_1_1363318BFADF4D80;
class Class_1_D17272E82AE804C2_377;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xBBE42F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xBBFF940)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBE5780)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0xBBFF020)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xBBFECF0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0xBBFED50)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0xBBFEEA0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0xBBFF080)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET UNITYSDK_OFFSET(0xBBFF4A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xBBFF650)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBBE63F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xBBFF780)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xBBFECD0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xBBFF5F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET UNITYSDK_OFFSET(0xBBFF700)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBBE57D0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xBBFF7A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET UNITYSDK_OFFSET(0xBBFF0E0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET UNITYSDK_OFFSET(0xBBFF2F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET UNITYSDK_OFFSET(0xBBFF140)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0xBBE83D0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xBBFECE0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEB220)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xBBFF950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole_TypeDefinitionIndex = 60998;

	class GridFightShopRole : public ::RPG::Client::GridFightShopGood
	{
	public:
		::Class_1_D17272E82AE804C2_377* _GoodsRole; // 0x20
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_1363318BFADF4D80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1363318BFADF4D80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Boolean get_Upgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET))(this);
		}

		::System::Boolean get_WillLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_UpLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShopRoleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET))(this);
		}
	};
}
