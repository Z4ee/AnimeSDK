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

namespace NPCCrowd::Ability { class VirtualProxy_HasReactionCondition; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_HASREACTIONCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x106F6F70)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x410C50)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x410C00)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x106F7A00)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6C71E0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x106F7090)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x410830)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6C6DB0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6C7200)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x6C6DA0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x106F6FD0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x410C50)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x410C00)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x410C90)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x6C7010)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x6C6E90)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x6C6F10)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x6C7110)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x6C7090)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x6C6F90)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x6C6E10)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x6C6D20)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x106F7130)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_HASREACTIONCONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6C7260)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x106F7E80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int HasReactionCondition_TypeDefinitionIndex = 43369;

	struct alignas(4) HasReactionCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(HasReactionCondition_TypeDefinitionIndex)->GetStaticField(0x4C240);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE313484D; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		static ::System::Boolean Link(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::HasReactionCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::HasReactionCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_HasReactionCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_HasReactionCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::HasReactionCondition Create()
		{
			return ((::NPCCrowd::Ability::HasReactionCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::HasReactionCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::HasReactionCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::HasReactionCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::HasReactionCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::HasReactionCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::HasReactionCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::HasReactionCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::HasReactionCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::HasReactionCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::HasReactionCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_HasReactionCondition__CopyAssign(::NPCCrowd::Ability::HasReactionCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::HasReactionCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_HASREACTIONCONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
