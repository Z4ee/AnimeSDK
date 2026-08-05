#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::Ability { class VirtualProxy_GameplayTagContainerMatchCondition; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1192C7E0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x754B30)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x1192D300)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x754B10)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1192C890)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7546E0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x754B90)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x7546D0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x1192C840)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x754B30)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x464510)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x754940)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x7547C0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x754840)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x7548C0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x754740)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x754650)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1192C930)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x754BF0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1192D770)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int GameplayTagContainerMatchCondition_TypeDefinitionIndex = 88880;

	struct alignas(8) GameplayTagContainerMatchCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(GameplayTagContainerMatchCondition_TypeDefinitionIndex)->GetStaticField(0x455B0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x1A39D168; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdConditionBase Base; // 0x10
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseData; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		static ::System::Boolean Link(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_GameplayTagContainerMatchCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_GameplayTagContainerMatchCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::GameplayTagContainerMatchCondition Create()
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::GameplayTagContainerMatchCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::GameplayTagContainerMatchCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::GameplayTagContainerMatchCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::GameplayTagContainerMatchCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::GameplayTagContainerMatchCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_GameplayTagContainerMatchCondition__CopyAssign(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::GameplayTagContainerMatchCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
