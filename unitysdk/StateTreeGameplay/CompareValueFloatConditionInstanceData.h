#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E8286D0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3D120)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA3D190)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA3D180)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA3D1F0)
#define STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E828800)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CompareValueFloatConditionInstanceData_TypeDefinitionIndex = 79839;

	struct alignas(4) CompareValueFloatConditionInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompareValueFloatConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x51290);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA6A3EAAC; // 0x0
		::System::Single Left; // 0x10
		::System::Single Right; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::CompareValueFloatConditionInstanceData Create()
		{
			return ((::StateTreeGameplay::CompareValueFloatConditionInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::CompareValueFloatConditionInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareValueFloatConditionInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::CompareValueFloatConditionInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::CompareValueFloatConditionInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::CompareValueFloatConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::CompareValueFloatConditionInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_CompareValueFloatConditionInstanceData__CopyAssign(::StateTreeGameplay::CompareValueFloatConditionInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::CompareValueFloatConditionInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_COMPAREVALUEFLOATCONDITIONINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
