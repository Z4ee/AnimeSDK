#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E351F40)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA13A60)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA13AC0)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x463B40)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463B50)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA13B20)
#define STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E352070)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RandomValueFloatTaskInstanceData_TypeDefinitionIndex = 74826;

	struct alignas(4) RandomValueFloatTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(RandomValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x503A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x79FBA81C; // 0x0
		::System::Single RandomValue; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::RandomValueFloatTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::RandomValueFloatTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::RandomValueFloatTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomValueFloatTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::RandomValueFloatTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::RandomValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::RandomValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::RandomValueFloatTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_RandomValueFloatTaskInstanceData__CopyAssign(::StateTreeGameplay::RandomValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::RandomValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_RANDOMVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
