#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_1_4071A2CC207B5E1F;
class Class_1_7B1192E630B791F8;
class Class_1_8911FA5FAA0406FB;
class Class_1_C6A8ED30077C2CB7;
class Class_1_D24F441AC722A050;
class Class_1_F68BE4ABC598088C;
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0x112196B0)
#define RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET UNITYSDK_OFFSET(0x11219A60)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x11219960)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET UNITYSDK_OFFSET(0x11219860)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x112190E0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x11219460)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0x11218F50)
#define RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x11219B30)
#define RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET UNITYSDK_OFFSET(0x11216E00)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x112167B0)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALFORMATIONDATA_OFFSET UNITYSDK_OFFSET(0x11218310)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x112168F0)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALTASKLISTTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x112169C0)
#define RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0x112197D0)
#define RPG_GAMECORE_ABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x11216AF0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET UNITYSDK_OFFSET(0x11218D60)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET UNITYSDK_OFFSET(0x11218BE0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x11218630)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET UNITYSDK_OFFSET(0x112189A0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET UNITYSDK_OFFSET(0x11218830)
#define RPG_GAMECORE_ABILITYJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11219BB0)
#define RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET UNITYSDK_OFFSET(0x11219330)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET UNITYSDK_OFFSET(0x112183E0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET UNITYSDK_OFFSET(0x11217E70)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x112180C0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET UNITYSDK_OFFSET(0x11217800)
#define RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0x11216A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityJsonTable_TypeDefinitionIndex = 56670;

	class AbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_1_C6A8ED30077C2CB7*>** StaticGet_GlobalTargetEvaluatorMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_1_C6A8ED30077C2CB7*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F68BE4ABC598088C*>** StaticGet_GlobalTaskListTemplateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F68BE4ABC598088C*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4071A2CC207B5E1F*>** StaticGet_TBAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4071A2CC207B5E1F*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C70);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>** StaticGet__ExtraTaskListTemplateLookup()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C78);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8911FA5FAA0406FB*>** StaticGet_GlobalModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8911FA5FAA0406FB*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_GlobalModifierAlias()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7B1192E630B791F8*>** StaticGet_GlobalFormationDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7B1192E630B791F8*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D24F441AC722A050*>** StaticGet_AbilityCameraConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D24F441AC722A050*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x32C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__CCTOR_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void _LoadTurnBasedAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET))(a1);
		}

		static ::System::Void LoadGlobalModifierConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALMODIFIERCONFIG_OFFSET))();
		}

		static ::System::Void LoadGlobalTaskListTemplateConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALTASKLISTTEMPLATECONFIG_OFFSET))();
		}

		static ::System::Void LoadGlobalFormationData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALFORMATIONDATA_OFFSET))();
		}

		static ::System::Void _AddGlobalModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalTemplateTaskList(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalTargetAliasList(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalFormationDataListConfig(::Il2CppArray<::RPG::GameCore::FormationData*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::FormationData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalCameraConfigs(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TurnBasedAbilityConfig* GetTurnBasedAbility(::System::String* a1)
		{
			return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::TurnBasedModifierConfig* GetGlobalModifierConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::TaskListTemplate* GetGlobalTaskListTemplate(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void AddExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(a1);
		}

		static ::System::Void RemoveExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(a1);
		}

		static ::RPG::GameCore::FormationData* GetGlobalFormation(::System::String* a1)
		{
			return ((::RPG::GameCore::FormationData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET))(a1);
		}

		static ::RPG::GameCore::VCameraConfig* GetAbilityCameraConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET))(a1);
		}

		static ::System::Void AddModifierAlias(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET))(a1, a2);
		}

		static ::System::Void LazyLoadRelease()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET))();
		}

		static ::System::Void _LazyLoadGlobalTaskListTemplate(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadGlobalModifier(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadTurnBasedAbilityList(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadGlobalFormationAsset(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET))(a1);
		}

		static ::System::String* _GetModifierAliasMappedName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET))(a1);
		}

		static ::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET))();
		}
	};
}
