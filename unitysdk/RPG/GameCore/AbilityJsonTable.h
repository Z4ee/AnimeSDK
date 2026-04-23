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

#define RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0xB513660)
#define RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET UNITYSDK_OFFSET(0xB513A30)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xB5138F0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET UNITYSDK_OFFSET(0xB5137B0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xB513040)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xB5133C0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0xB512EA0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB513B00)
#define RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET UNITYSDK_OFFSET(0xB510CE0)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB5105E0)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALFORMATIONDATA_OFFSET UNITYSDK_OFFSET(0xB512210)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xB510730)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALTASKLISTTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xB510800)
#define RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0xB513720)
#define RPG_GAMECORE_ABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB510930)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET UNITYSDK_OFFSET(0xB512CA0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET UNITYSDK_OFFSET(0xB512B20)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB512540)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET UNITYSDK_OFFSET(0xB5128D0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET UNITYSDK_OFFSET(0xB512750)
#define RPG_GAMECORE_ABILITYJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB513B80)
#define RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET UNITYSDK_OFFSET(0xB5132C0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET UNITYSDK_OFFSET(0xB5122E0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET UNITYSDK_OFFSET(0xB511D50)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xB511FB0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET UNITYSDK_OFFSET(0xB5116E0)
#define RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0xB5108D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityJsonTable_TypeDefinitionIndex = 52064;

	class AbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>** StaticGet__ExtraTaskListTemplateLookup()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E750);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8911FA5FAA0406FB*>** StaticGet_GlobalModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8911FA5FAA0406FB*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E758);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7B1192E630B791F8*>** StaticGet_GlobalFormationDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7B1192E630B791F8*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E760);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F68BE4ABC598088C*>** StaticGet_GlobalTaskListTemplateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F68BE4ABC598088C*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E768);
		}
		static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_1_C6A8ED30077C2CB7*>** StaticGet_GlobalTargetEvaluatorMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_1_C6A8ED30077C2CB7*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E770);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4071A2CC207B5E1F*>** StaticGet_TBAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4071A2CC207B5E1F*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E778);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D24F441AC722A050*>** StaticGet_AbilityCameraConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D24F441AC722A050*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E780);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_GlobalModifierAlias()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x3E788);
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

		static ::System::Void _LoadTurnBasedAbility(::System::String* Path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET))(Path);
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

		static ::System::Void _AddGlobalModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* modifierMap, ::System::String* configPath)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET))(modifierMap, configPath);
		}

		static ::System::Void _AddGlobalTemplateTaskList(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* taskListTemplates, ::System::String* sConfigPath)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET))(taskListTemplates, sConfigPath);
		}

		static ::System::Void _AddGlobalTargetAliasList(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* aliasConfigList, ::System::String* configPath)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET))(aliasConfigList, configPath);
		}

		static ::System::Void _AddGlobalFormationDataListConfig(::Il2CppArray<::RPG::GameCore::FormationData*>* dataList, ::System::String* configPath)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::FormationData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET))(dataList, configPath);
		}

		static ::System::Void _AddGlobalCameraConfigs(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* cameraConfigs, ::System::String* configPath)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET))(cameraConfigs, configPath);
		}

		static ::RPG::GameCore::TurnBasedAbilityConfig* GetTurnBasedAbility(::System::String* AbilityName)
		{
			return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET))(AbilityName);
		}

		static ::RPG::GameCore::TurnBasedModifierConfig* GetGlobalModifierConfig(::System::String* GlobalModifierName)
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET))(GlobalModifierName);
		}

		static ::RPG::GameCore::TaskListTemplate* GetGlobalTaskListTemplate(::System::String* templateName)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET))(templateName);
		}

		static ::System::Void AddExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* lookup)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(lookup);
		}

		static ::System::Void RemoveExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* lookup)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(lookup);
		}

		static ::RPG::GameCore::FormationData* GetGlobalFormation(::System::String* formationName)
		{
			return ((::RPG::GameCore::FormationData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET))(formationName);
		}

		static ::RPG::GameCore::VCameraConfig* GetAbilityCameraConfig(::System::String* cameraConfigName)
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET))(cameraConfigName);
		}

		static ::System::Void AddModifierAlias(::System::String* alias, ::System::String* modifierName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET))(alias, modifierName);
		}

		static ::System::Void LazyLoadRelease()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET))();
		}

		static ::System::Void _LazyLoadGlobalTaskListTemplate(::System::String* sConfigPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET))(sConfigPath);
		}

		static ::System::Void _LazyLoadGlobalModifier(::System::String* sConfigPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET))(sConfigPath);
		}

		static ::System::Void _LazyLoadTurnBasedAbilityList(::System::String* sConfigPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET))(sConfigPath);
		}

		static ::System::Void _LazyLoadGlobalFormationAsset(::System::String* sConfigPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET))(sConfigPath);
		}

		static ::System::String* _GetModifierAliasMappedName(::System::String* origin)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET))(origin);
		}

		static ::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET))();
		}
	};
}
