#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D33CE80)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x98A370)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x98A3D0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x36D760)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x98A430)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D33CFB0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex = 71598;

	struct alignas(8) DebugLogValueDoubleTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogValueDoubleTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4CA10);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x4DA6C3FF; // 0x0
		::System::Double Value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_DebugLogValueDoubleTaskInstanceData__CopyAssign(::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueDoubleTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEDOUBLETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
