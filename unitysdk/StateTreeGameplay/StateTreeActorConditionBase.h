#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace StateTreeGameplay { class VirtualProxy_StateTreeActorConditionBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x464AC0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D33DFB0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x98A7B0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x98A4F0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x98A7D0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x98A4E0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4644D0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x464AC0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x464510)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x98A690)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x98A5A0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x98A5F0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x98A730)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x98A6E0)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98A640)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x98A550)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x98A490)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1D33DA60)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x98A830)
#define STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D33E3E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeActorConditionBase_TypeDefinitionIndex = 77943;

	struct alignas(4) StateTreeActorConditionBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeActorConditionBase_TypeDefinitionIndex)->GetStaticField(0x4CA40);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x309FF3CE; // 0x0
		::StateTreeCore::StateTreeConditionBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean TestCondition(::StateTreeGameplay::StateTreeActorConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::StateTreeActorConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_StateTreeActorConditionBase* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_StateTreeActorConditionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::StateTreeActorConditionBase Create()
		{
			return ((::StateTreeGameplay::StateTreeActorConditionBase(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_CREATE_OFFSET))();
		}

		::StateTreeGameplay::StateTreeActorConditionBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeActorConditionBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::StateTreeActorConditionBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorConditionBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::StateTreeActorConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorConditionBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::StateTreeActorConditionBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorConditionBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_StateTreeActorConditionBase__CopyAssign(::StateTreeGameplay::StateTreeActorConditionBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorConditionBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORCONDITIONBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
