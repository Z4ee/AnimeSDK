#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace NPCCrowd::Ability { class VirtualProxy_PlayerAvatarDistanceCondition; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x11502E90)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x718E30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x11503780)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x7196C0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x11503060)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4B6C10)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4B6980)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x4B69E0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3EBE20)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x4B6C70)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3ABA20)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x719400)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7196E0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x7193F0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x11502EE0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4B76B0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x718E30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x4B76F0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x7195A0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x7194B0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x719500)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x719640)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x7195F0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x719550)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x719460)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x7193A0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x11503100)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x719740)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x11503BC0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PlayerAvatarDistanceCondition_TypeDefinitionIndex = 54715;

	struct alignas(4) PlayerAvatarDistanceCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x47D70);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x521CDDFB; // 0x0
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::System::Boolean greater; // 0x2C
		::System::Single distance; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandler; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> playerTransformHandler; // 0x3A

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_PlayerAvatarDistanceCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_PlayerAvatarDistanceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::PlayerAvatarDistanceCondition Create()
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_PlayerAvatarDistanceCondition__CopyAssign(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::PlayerAvatarDistanceCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
