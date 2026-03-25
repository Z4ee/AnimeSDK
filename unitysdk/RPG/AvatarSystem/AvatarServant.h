#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_5A47224D9FA9E33E.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ServantConfig; }
namespace System { class String; }

#define RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET UNITYSDK_OFFSET(0x8EBD040)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCED0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF90)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCE70)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8EBCE10)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x8EBCE30)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF50)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8EBCE50)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x8EBCF30)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x8EBCFD0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF10)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCEF0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x8EBCFB0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF70)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCE90)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCEB0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCEE0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x8EBCFA0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCE80)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x8EBCE40)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF60)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8EBCE60)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x8EBCF40)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x8EBD000)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF20)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF00)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x8EBCFC0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x8EBCF80)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCEA0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8EBCEC0)
#define RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBD020)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarServant_TypeDefinitionIndex = 42004;

	class AvatarServant : public ::System::Object
	{
	public:
		::System::String* _ManikinJsonPath_k__BackingField; // 0x10
		::System::String* _UIModelPath_k__BackingField; // 0x18
		::System::String* _WaitingServantHeadIconPath_k__BackingField; // 0x20
		::Struct_2_5A47224D9FA9E33E _PropertyValues_k__BackingField; // 0x28
		::System::String* _HeadIconPath_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x68
		::System::String* _ConfigPath_k__BackingField; // 0x70
		::System::String* _ActionServantHeadIconPath_k__BackingField; // 0x78
		::RPG::GameCore::ServantConfig* _JsonConfig_k__BackingField; // 0x80
		::System::String* _ServantSideIconPath_k__BackingField; // 0x88
		::System::String* _Prefab_k__BackingField; // 0x90
		::System::String* _UnCreateHeadIconPath_k__BackingField; // 0x98
		::System::String* _ServantMiniIconPath_k__BackingField; // 0xA0
		::RPG::Client::TextID _Name_k__BackingField; // 0xA8
		::Struct_2_90E529DB4DCB014F _Identifier_k__BackingField; // 0xB8

		::System::Void _ctor(::Struct_2_90E529DB4DCB014F& identifier)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F&))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET))(this, identifier);
		}

		::Struct_2_90E529DB4DCB014F get_Identifier()
		{
			return ((::Struct_2_90E529DB4DCB014F(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::ServantConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::Void set_HeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_UnCreateHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_UnCreateHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_WaitingServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_WaitingServantHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ActionServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_ActionServantHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ServantSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantSideIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ServantMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantMiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET))(this, value);
		}

		::System::String* get_Prefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET))(this, value);
		}

		::System::String* get_ManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET))(this);
		}

		::System::Void set_ManikinJsonPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET))(this, value);
		}

		::System::String* get_UIModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET))(this);
		}

		::System::Void set_UIModelPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET))(this, value);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ConfigPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET))(this, value);
		}

		::Struct_2_5A47224D9FA9E33E get_PropertyValues()
		{
			return ((::Struct_2_5A47224D9FA9E33E(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Void set_PropertyValues(::Struct_2_5A47224D9FA9E33E value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5A47224D9FA9E33E))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET))(this, value);
		}

		::System::Boolean ContainsSkill(::System::UInt32 skillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET))(this, skillID);
		}
	};
}
