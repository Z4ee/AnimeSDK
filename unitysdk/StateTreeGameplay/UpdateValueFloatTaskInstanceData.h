#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x887FA0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x887F90)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18C5BCA0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x887F30)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x887ED0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x887FD0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x887FA0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x887F90)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x887FC0)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x888030)
#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5BE40)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int UpdateValueFloatTaskInstanceData_TypeDefinitionIndex = 77104;

	struct alignas(4) UpdateValueFloatTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UpdateValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x3B360);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB71861F2; // 0x0
		::StateTreeCore::StateTreePropertyRef_1<::System::Single> FloatRef; // 0x10
		::System::Single Value; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::UpdateValueFloatTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::UpdateValueFloatTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::UpdateValueFloatTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::UpdateValueFloatTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::UpdateValueFloatTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::UpdateValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::UpdateValueFloatTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_UpdateValueFloatTaskInstanceData__CopyAssign(::StateTreeGameplay::UpdateValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
