#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingPolicyRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_POLICY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA57970)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GETDESC_OFFSET UNITYSDK_OFFSET(0xCA57BE0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCA57C90)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCA57D10)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xCA57D30)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCA57CD0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xCA57CB0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA57CF0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0xCA57DB0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xCA57D90)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xCA57D50)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLSOLDIERLIST_OFFSET UNITYSDK_OFFSET(0xCA57D70)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCA57CA0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_DESC_OFFSET UNITYSDK_OFFSET(0xCA57D20)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xCA57D40)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCA57CE0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xCA57CC0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCA57D00)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0xCA57DC0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xCA57DA0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xCA57D60)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLSOLDIERLIST_OFFSET UNITYSDK_OFFSET(0xCA57D80)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA57A10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Policy_TypeDefinitionIndex = 76370;

	class Policy : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _RelatedCardIDs_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _SkillSoldierList_k__BackingField; // 0x20
		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* _RelatedCardConfigs_k__BackingField; // 0x28
		::System::UInt32 _EffectID_k__BackingField; // 0x30
		::System::UInt32 _ConfigID_k__BackingField; // 0x34
		::RPG::GameCore::ChenLingIconType _IconType_k__BackingField; // 0x38
		::System::UInt32 _SkillID_k__BackingField; // 0x3C
		::RPG::Client::TextID _Desc_k__BackingField; // 0x40
		::RPG::Client::TextID _Name_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::GameCore::ChenLingPolicyRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingPolicyRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::Policy* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::Policy*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_CREATE_OFFSET))(a1);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_CONFIGID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingIconType get_IconType()
		{
			return ((::RPG::GameCore::ChenLingIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::GameCore::ChenLingIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingIconType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_EFFECTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SkillSoldierList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLSOLDIERLIST_OFFSET))(this);
		}

		::System::Void set_SkillSoldierList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLSOLDIERLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RelatedCardIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDIDS_OFFSET))(this);
		}

		::System::Void set_RelatedCardIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* get_RelatedCardConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDCONFIGS_OFFSET))(this);
		}

		::System::Void set_RelatedCardConfigs(::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDCONFIGS_OFFSET))(this, a1);
		}
	};
}
