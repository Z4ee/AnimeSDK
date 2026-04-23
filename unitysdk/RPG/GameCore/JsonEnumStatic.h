#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET UNITYSDK_OFFSET(0x18A380E0)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET UNITYSDK_OFFSET(0x18A38060)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18A38030)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET UNITYSDK_OFFSET(0x18A38280)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x18A383E0)
#define RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x18A36A60)
#define RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET UNITYSDK_OFFSET(0x18A38160)
#define RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18A37FA0)
#define RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x18A37F60)
#define RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x18A37F10)
#define RPG_GAMECORE_JSONENUMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A38500)
#define RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET UNITYSDK_OFFSET(0x18A37F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumStatic_TypeDefinitionIndex = 23587;

	class JsonEnumStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_s_DefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA40);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEventEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA48);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEvent_TargetStancePreshow()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA50);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_InsertAbility_HideEffectMarkAutoHideInSkill()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA58);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatLoopIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA60);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_BattleIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA68);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA70);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTagEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA78);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_TriggerProp()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA80);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatMissionIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA88);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_Default()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA90);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatOutIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDA98);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_CorrectIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAA0);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_AbilityTagDefault()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAA8);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_HeartDialRaid()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAB0);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DiceCombatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAB8);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DreamlandIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAC0);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatContinueIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAC8);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_None()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAD0);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatBackIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0xDAD8);
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

		static ::System::Boolean ContainsAny(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET))(jsonEnumList, jsonEnumList2);
		}

		static ::System::Boolean ContainsAll(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET))(jsonEnumList, jsonEnumList2);
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
