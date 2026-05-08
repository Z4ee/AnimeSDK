#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace NPCCrowd::Ability { class VirtualProxy_AttractorCandidateCondition; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x114FD760)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x4B7660)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x114FDEE0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x717FB0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x114FD880)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x717CF0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x717FD0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x717CE0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x114FD7B0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x4B7660)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x4B76F0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x717E90)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x717DA0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x717DF0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x717F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x717EE0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x717E40)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x717D50)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x717C90)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x114FD920)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x718030)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x114FE330)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateCondition_TypeDefinitionIndex = 39132;

	struct alignas(4) AttractorCandidateCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateCondition_TypeDefinitionIndex)->GetStaticField(0x47CF0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x21AF8EF9; // 0x0
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorCandidateCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_AttractorCandidateCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_AttractorCandidateCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::AttractorCandidateCondition Create()
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorCandidateCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorCandidateCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorCandidateCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorCandidateCondition__CopyAssign(::NPCCrowd::Ability::AttractorCandidateCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
