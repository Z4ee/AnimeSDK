#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_StateTreeCrowdConditionBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x464AC0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x952D590)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x464AA0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x463260)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x4647E0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x464B10)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x4647D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x464AC0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x464510)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x464980)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x464890)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x4648E0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x464A20)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4649D0)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x464930)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x464840)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x464780)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x952D360)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x464B70)
#define NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x952D810)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeCrowdConditionBase_TypeDefinitionIndex = 43891;

	struct alignas(4) StateTreeCrowdConditionBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeCrowdConditionBase_TypeDefinitionIndex)->GetStaticField(0x511B0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x61D29D25; // 0x0
		::StateTreeCore::StateTreeConditionBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::StateTreeCrowdConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::StateTreeCrowdConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdConditionBase* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdConditionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::StateTreeCrowdConditionBase Create()
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdConditionBase(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::StateTreeCrowdConditionBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::StateTreeCrowdConditionBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::StateTreeCrowdConditionBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::StateTreeCrowdConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdConditionBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::StateTreeCrowdConditionBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdConditionBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_StateTreeCrowdConditionBase__CopyAssign(::NPCCrowd::Ability::StateTreeCrowdConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdConditionBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_STATETREECROWDCONDITIONBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
