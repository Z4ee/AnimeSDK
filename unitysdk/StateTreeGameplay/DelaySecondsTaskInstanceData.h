#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x13457870)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x7CDF20)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7CDEC0)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7CDF50)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDF30)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x7CDF40)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7CDFB0)
#define STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x134579A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DelaySecondsTaskInstanceData_TypeDefinitionIndex = 62564;

	struct alignas(4) DelaySecondsTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DelaySecondsTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3DC20);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x239BEDE2; // 0x0
		::System::Single DelaySeconds; // 0x10
		::System::Single Timer; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::DelaySecondsTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::DelaySecondsTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::DelaySecondsTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DelaySecondsTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DelaySecondsTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DelaySecondsTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::DelaySecondsTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DelaySecondsTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::DelaySecondsTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DelaySecondsTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::DelaySecondsTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DelaySecondsTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_DelaySecondsTaskInstanceData__CopyAssign(::StateTreeGameplay::DelaySecondsTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DelaySecondsTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DELAYSECONDSTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
