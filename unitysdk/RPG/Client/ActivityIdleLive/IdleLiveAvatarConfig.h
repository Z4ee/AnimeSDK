#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/Struct_2_D2305C6B6C29E31F_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F6FE6E1D7EC0127D;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPosTypeConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarSkillConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B22620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B2D240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9B2D280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET UNITYSDK_OFFSET(0x9B2D120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET UNITYSDK_OFFSET(0x9B2D1C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0x9B2D200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x9B2D220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0x9B2D140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0x9B2D180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9B2D260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D1E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B2D250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9B2D290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET UNITYSDK_OFFSET(0x9B2D1D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0x9B2D210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x9B2D230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D2F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0x9B2D150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D1B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0x9B2D190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x9B2D270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x9B2D330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B2D1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D040)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarConfig_TypeDefinitionIndex = 69127;

	class IdleLiveAvatarConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* _PropertyConfigs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* _SkillConfigs_k__BackingField; // 0x18
		::System::String* _RoundIconPath_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _DescList_k__BackingField; // 0x28
		::System::String* _IconPath_k__BackingField; // 0x30
		::System::String* _FigurePath_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* _TagConfigs_k__BackingField; // 0x40
		::System::String* _GachaAvatarVoiceEvent_k__BackingField; // 0x48
		::System::String* _MiniIconPath_k__BackingField; // 0x50
		::Class_1_F6FE6E1D7EC0127D* _RarityConfig_k__BackingField; // 0x58
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* _PosTypeConfig_k__BackingField; // 0x60
		::System::String* _ShopIconPath_k__BackingField; // 0x68
		::System::UInt32 _Rarity_k__BackingField; // 0x70
		::System::UInt32 _AvatarId_k__BackingField; // 0x74
		::RPG::Client::TextID _AvatarName_k__BackingField; // 0x78
		::RPG::Client::TextID _GachaAvatarText_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* Create(::System::UInt32 avatarId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET))(avatarId);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_AvatarPosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* get_PosTypeConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET))(this);
		}

		::System::Void set_PosTypeConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* get_SkillConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET))(this);
		}

		::System::Void set_SkillConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET))(this, value);
		}

		::Class_1_F6FE6E1D7EC0127D* get_RarityConfig()
		{
			return ((::Class_1_F6FE6E1D7EC0127D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET))(this);
		}

		::System::Void set_RarityConfig(::Class_1_F6FE6E1D7EC0127D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F6FE6E1D7EC0127D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* get_PropertyConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET))(this);
		}

		::System::Void set_PropertyConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_DescList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET))(this);
		}

		::System::Void set_DescList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* get_TagConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET))(this);
		}

		::System::Void set_TagConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_GachaAvatarText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET))(this, value);
		}

		::System::String* get_GachaAvatarVoiceEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarVoiceEvent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Void set_AvatarName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::Void set_FigurePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET))(this, value);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET))(this, value);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_RoundIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::Void set_ShopIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET))(this, value);
		}
	};
}
