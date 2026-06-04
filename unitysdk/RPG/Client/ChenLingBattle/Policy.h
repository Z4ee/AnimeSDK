#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingPolicyRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_POLICY_CREATE_OFFSET UNITYSDK_OFFSET(0xB5B5240)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GETDESC_OFFSET UNITYSDK_OFFSET(0xB5C17F0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB5C18A0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB5C1920)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xB5C1940)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5C18E0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB5C18C0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5C1900)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0xB5C19C0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xB5C19A0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB5C1960)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_GET_SKILLSOLDIERLIST_OFFSET UNITYSDK_OFFSET(0xB5C1980)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB5C18B0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB5C1930)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xB5C1950)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5C18F0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB5C18D0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB5C1910)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0xB5C19D0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0xB5C19B0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB5C1970)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY_SET_SKILLSOLDIERLIST_OFFSET UNITYSDK_OFFSET(0xB5C1990)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C1620)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Policy_TypeDefinitionIndex = 70943;

	class Policy : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _RelatedCardIDs_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _SkillSoldierList_k__BackingField; // 0x20
		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* _RelatedCardConfigs_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::RPG::GameCore::ChenLingIconType _IconType_k__BackingField; // 0x40
		::System::UInt32 _ConfigID_k__BackingField; // 0x44
		::RPG::Client::TextID _Name_k__BackingField; // 0x48
		::System::UInt32 _EffectID_k__BackingField; // 0x58
		::System::UInt32 _SkillID_k__BackingField; // 0x5C

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
