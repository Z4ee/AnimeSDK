#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/Struct_2_F9D0A54883B760B5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ServantConfig; }
namespace System { class String; }

#define RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET UNITYSDK_OFFSET(0x1ABAB300)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB180)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB240)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB120)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1ABAB0C0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x1ABAB0E0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB200)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ABAB100)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1ABAB1E0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1ABAB280)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB1C0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB1A0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x1ABAB260)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB220)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB140)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB160)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB190)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB250)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB130)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x1ABAB0F0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB210)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ABAB110)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1ABAB1F0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1ABAB2B0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB1D0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB1B0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x1ABAB270)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB230)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB150)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABAB170)
#define RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAB2E0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarServant_TypeDefinitionIndex = 52266;

	class AvatarServant : public ::System::Object
	{
	public:
		::System::String* _ActionServantHeadIconPath_k__BackingField; // 0x10
		::System::String* _ManikinJsonPath_k__BackingField; // 0x18
		::System::String* _ConfigPath_k__BackingField; // 0x20
		::System::String* _UIModelPath_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x30
		::System::String* _ServantSideIconPath_k__BackingField; // 0x38
		::RPG::GameCore::ServantConfig* _JsonConfig_k__BackingField; // 0x40
		::System::String* _HeadIconPath_k__BackingField; // 0x48
		::System::String* _UnCreateHeadIconPath_k__BackingField; // 0x50
		::System::String* _ServantMiniIconPath_k__BackingField; // 0x58
		::System::String* _Prefab_k__BackingField; // 0x60
		::Struct_2_F9D0A54883B760B5 _PropertyValues_k__BackingField; // 0x68
		::System::String* _WaitingServantHeadIconPath_k__BackingField; // 0xA0
		::RPG::Client::TextID _Name_k__BackingField; // 0xA8
		::Struct_2_F1C4ECC5EFDCA1EF_2 _Identifier_k__BackingField; // 0xB8

		::System::Void _ctor(::Struct_2_F1C4ECC5EFDCA1EF_2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2&))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET))(this, a1);
		}

		::Struct_2_F1C4ECC5EFDCA1EF_2 get_Identifier()
		{
			return ((::Struct_2_F1C4ECC5EFDCA1EF_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::ServantConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::Void set_HeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_UnCreateHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_UnCreateHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_WaitingServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_WaitingServantHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ActionServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_ActionServantHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ServantSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantSideIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ServantMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantMiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_Prefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET))(this, a1);
		}

		::System::String* get_ManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET))(this);
		}

		::System::Void set_ManikinJsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET))(this, a1);
		}

		::System::String* get_UIModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET))(this);
		}

		::System::Void set_UIModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET))(this, a1);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET))(this, a1);
		}

		::Struct_2_F9D0A54883B760B5 get_PropertyValues()
		{
			return ((::Struct_2_F9D0A54883B760B5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Void set_PropertyValues(::Struct_2_F9D0A54883B760B5 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F9D0A54883B760B5))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET))(this, a1);
		}

		::System::Boolean ContainsSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET))(this, a1);
		}
	};
}
