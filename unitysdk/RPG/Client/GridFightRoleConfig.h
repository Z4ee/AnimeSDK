#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class AvatarRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET UNITYSDK_OFFSET(0x98911C0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x98910E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x9891000)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET UNITYSDK_OFFSET(0x988F070)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x9891CE0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x98912A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x9891CC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x9891360)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9891880)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x9885340)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET UNITYSDK_OFFSET(0x9891380)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET UNITYSDK_OFFSET(0x988E8A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET UNITYSDK_OFFSET(0x9891570)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET UNITYSDK_OFFSET(0x98916D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET UNITYSDK_OFFSET(0x98914A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET UNITYSDK_OFFSET(0x9891620)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0x9891340)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET UNITYSDK_OFFSET(0x988E880)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET UNITYSDK_OFFSET(0x98913A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET UNITYSDK_OFFSET(0x98913C0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET UNITYSDK_OFFSET(0x9891780)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET UNITYSDK_OFFSET(0x98912F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x98917A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x9891CD0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x98912C0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x9891400)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x98913E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x988EC40)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9891960)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x9891A40)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x9891CA0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x9891BC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x9891490)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0x987EFD0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98905D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x9891CF0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9891890)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x98917B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9891970)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x9891A50)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x9891BD0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET UNITYSDK_OFFSET(0x9890CE0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x9890A60)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x9890E90)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET UNITYSDK_OFFSET(0x9890730)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x98908F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig_TypeDefinitionIndex = 52868;

	class GridFightRoleConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* _ModifyConfigs; // 0x18
		::RPG::GameCore::AvatarRow* _AvatarRow; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _TraitConfigs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleStarConfig*>* _StarConfigs; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* _BackRankConfigs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackEquipmentConfig*>* _BackEquipmentConfigs; // 0x40

		::System::Void _ctor(::RPG::GameCore::GridFightRoleConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::GridFightRoleStarConfig* GetStarConfig(::System::UInt32 star)
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET))(this, star);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig(::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET))(this, rank);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig(::System::UInt32 equipmentID, ::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET))(this, equipmentID, rank);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfigByRank(::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET))(this, rank);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_MaxStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET))(this);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET))(this);
		}

		::System::Boolean get_IsBoth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET))(this);
		}

		::System::Boolean get_IsHealer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET))(this);
		}

		::System::Boolean get_IsShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByEnergyBar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET))(this);
		}

		::System::String* get_MaxSPIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET))(this);
		}

		::System::String* get_MiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_TeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* get_BackRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* get_ModifyConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Remark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET))(this);
		}

		::System::String* get_AllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::System::String* _GetMiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET))(this);
		}

		::System::String* _GetRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET))(this);
		}

		::System::String* _GetTeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET))(this);
		}

		::System::String* _GetAllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::System::Void _InitStarConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET))(this);
		}

		::System::Void _InitTraitConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackRankConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitCyreneModifyConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackEquipmentConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET))(this);
		}
	};
}
