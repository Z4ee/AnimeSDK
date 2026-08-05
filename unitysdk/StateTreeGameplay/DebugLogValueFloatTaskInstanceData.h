#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1878E300)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x881B90)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x881BF0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463B50)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x881C50)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878E430)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugLogValueFloatTaskInstanceData_TypeDefinitionIndex = 78358;

	struct alignas(4) DebugLogValueFloatTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DDB0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x930A3CF4; // 0x0
		::System::Single Value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_DebugLogValueFloatTaskInstanceData__CopyAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
