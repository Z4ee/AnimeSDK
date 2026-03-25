#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1732A880)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET UNITYSDK_OFFSET(0x1732A9D0)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1732AB30)
#define RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x17329290)
#define RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET UNITYSDK_OFFSET(0x1732A8B0)
#define RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1732A7F0)
#define RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x1732A7B0)
#define RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1732A760)
#define RPG_GAMECORE_JSONENUMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732AC50)
#define RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET UNITYSDK_OFFSET(0x1732A7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumStatic_TypeDefinitionIndex = 22614;

	class JsonEnumStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatLoopIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6900);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6908);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTagEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6910);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_BattleIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6918);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEventEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6920);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_HeartDialRaid()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6928);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatContinueIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6930);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatBackIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6938);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatMissionIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6940);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_CorrectIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6948);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatOutIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6950);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_None()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6958);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_TriggerProp()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6960);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DiceCombatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6968);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_AbilityTagDefault()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_Default()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_InsertAbility_HideEffectMarkAutoHideInSkill()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_s_DefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DreamlandIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEvent_TargetStancePreshow()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x6998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::JsonEnum* ValueOrEmptyCustomEvent(::RPG::GameCore::JsonEnum* jsonEnum)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET))(jsonEnum);
		}

		static ::RPG::GameCore::JsonEnumDefineConfig* get_S_DefineConfig()
		{
			return ((::RPG::GameCore::JsonEnumDefineConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET))();
		}

		static ::System::Void set_S_DefineConfig(::RPG::GameCore::JsonEnumDefineConfig* value)
		{
			return ((::System::Void(*)(::RPG::GameCore::JsonEnumDefineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET))(value);
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET))();
		}

		static ::System::Boolean Contains(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::RPG::GameCore::JsonEnum* jsonEnum)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET))(jsonEnumList, jsonEnum);
		}

		static ::System::Boolean IsJsonEnumValid(::RPG::GameCore::JsonEnumCategory category, ::System::String* strValue)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET))(category, strValue);
		}

		static ::System::String* GetJsonEnumStr(::RPG::GameCore::JsonEnumCategory category, ::System::Int32 value)
		{
			return ((::System::String*(*)(::RPG::GameCore::JsonEnumCategory, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET))(category, value);
		}

		static ::System::Int32 GetJsonEnumValue(::RPG::GameCore::JsonEnumCategory category, ::System::String* strValue)
		{
			return ((::System::Int32(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET))(category, strValue);
		}

		static ::System::Void _RegisterConst()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET))();
		}
	};
}
