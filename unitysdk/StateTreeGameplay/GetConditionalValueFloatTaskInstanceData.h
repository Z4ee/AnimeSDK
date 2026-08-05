#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA13830)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA13800)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3517F0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA137F0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA13790)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA13870)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA13830)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA13800)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA13850)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA138D0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3519A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex = 81417;

	struct alignas(4) GetConditionalValueFloatTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(GetConditionalValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x50380);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x987D3C63; // 0x0
		::System::Boolean Condition; // 0x10
		::System::Single TrueValue; // 0x14
		::System::Single FalseValue; // 0x18
		::System::Single ResultValue; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_GetConditionalValueFloatTaskInstanceData__CopyAssign(::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
