#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NPCCrowd::Ability { class VirtualProxy_CheckIsFollowingCondition; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x410C50)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x410C00)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xA6672E0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x48F730)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA666AD0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4109D0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x410830)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x4108C0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x410AF0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x410A60)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3E3DA0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x48F300)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x48F750)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x48F2F0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xA666A10)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x410C50)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x410C00)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x410C90)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x48F560)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x48F3E0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x48F460)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x48F660)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x48F5E0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x48F4E0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x48F360)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x48F270)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xA666B70)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x48F7B0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA667760)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CheckIsFollowingCondition_TypeDefinitionIndex = 58823;

	struct alignas(4) CheckIsFollowingCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingCondition_TypeDefinitionIndex)->GetStaticField(0x3F810);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF9D3C33F; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdConditionBase Base; // 0x10
		::System::Boolean revert; // 0x2C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x2E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET))();
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::CheckIsFollowingCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_LINK_OFFSET))(self, linker);
		}

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CheckIsFollowingCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::CheckIsFollowingCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_CheckIsFollowingCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_CheckIsFollowingCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::CheckIsFollowingCondition Create()
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::CheckIsFollowingCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CheckIsFollowingCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::CheckIsFollowingCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::CheckIsFollowingCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::CheckIsFollowingCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_CheckIsFollowingCondition__CopyAssign(::NPCCrowd::Ability::CheckIsFollowingCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CheckIsFollowingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
