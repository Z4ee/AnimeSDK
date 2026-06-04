#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET UNITYSDK_OFFSET(0x198694B0)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET UNITYSDK_OFFSET(0x19869430)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19869400)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET UNITYSDK_OFFSET(0x198696E0)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x19869830)
#define RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x19867F00)
#define RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET UNITYSDK_OFFSET(0x19869530)
#define RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x19869370)
#define RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x19869330)
#define RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x198692E0)
#define RPG_GAMECORE_JSONENUMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19869A10)
#define RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET UNITYSDK_OFFSET(0x19869320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumStatic_TypeDefinitionIndex = 10465;

	class JsonEnumStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatBackIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4700);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEventEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4708);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTagEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_HeartDialRaid()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4718);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_None()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4720);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatMissionIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4728);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatContinueIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4730);
		}
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_s_DefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4738);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_TriggerProp()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4740);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEvent_TargetStancePreshow()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4748);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_CorrectIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4750);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatLoopIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4758);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_InsertAbility_HideEffectMarkAutoHideInSkill()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DiceCombatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4768);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_AbilityTagDefault()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4770);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_Default()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4778);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DreamlandIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4780);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_BattleIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4788);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatOutIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4790);
		}
		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(JsonEnumStatic_TypeDefinitionIndex)->GetStaticField(0x4798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::JsonEnum* ValueOrEmptyCustomEvent(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET))(a1);
		}

		static ::RPG::GameCore::JsonEnumDefineConfig* get_S_DefineConfig()
		{
			return ((::RPG::GameCore::JsonEnumDefineConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET))();
		}

		static ::System::Void set_S_DefineConfig(::RPG::GameCore::JsonEnumDefineConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::JsonEnumDefineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET))(a1);
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET))();
		}

		static ::System::Boolean Contains(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsAny(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsAll(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsJsonEnumValid(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET))(a1, a2);
		}

		static ::System::String* GetJsonEnumStr(::RPG::GameCore::JsonEnumCategory a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::JsonEnumCategory, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetJsonEnumValue(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void _RegisterConst()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET))();
		}
	};
}
