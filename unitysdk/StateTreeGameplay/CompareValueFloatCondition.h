#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonConditionBase.h"
#include "unitysdk/StateTreeGameplay/StateTreeConditionCompareOperator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace StateTreeGameplay { class VirtualProxy_CompareValueFloatCondition; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C13BB80)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8FFA70)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x8FFA10)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C13C390)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x8FF9F0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C13BBE0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x4635B0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x4631D0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x463260)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x425400)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x463640)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x41E4D0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x42ABB0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8FF5C0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x8FFB40)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8FF5B0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x8FFA70)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x8FFA10)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x8FFAC0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8FF820)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x8FF6A0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x8FF720)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8FF920)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x8FF8A0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8FF7A0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x8FF620)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8FF530)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C13BC80)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8FFBA0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13C870)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CompareValueFloatCondition_TypeDefinitionIndex = 50705;

	struct alignas(4) CompareValueFloatCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompareValueFloatCondition_TypeDefinitionIndex)->GetStaticField(0x41210);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB85B7317; // 0x0
		::StateTreeGameplay::StateTreeCommonConditionBase Base; // 0x10
		::System::Boolean Invert; // 0x2C
		::StateTreeGameplay::StateTreeConditionCompareOperator Operator; // 0x2D

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::CompareValueFloatCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::CompareValueFloatCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::CompareValueFloatCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::CompareValueFloatCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::StateTreeGameplay::CompareValueFloatCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::CompareValueFloatCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::StateTreeGameplay::VirtualProxy_CompareValueFloatCondition* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_CompareValueFloatCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::StateTreeGameplay::CompareValueFloatCondition Create()
		{
			return ((::StateTreeGameplay::CompareValueFloatCondition(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_CREATE_OFFSET))();
		}

		::StateTreeGameplay::CompareValueFloatCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareValueFloatCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareValueFloatCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::CompareValueFloatCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::CompareValueFloatCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_CompareValueFloatCondition__CopyAssign(::StateTreeGameplay::CompareValueFloatCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatCondition&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
