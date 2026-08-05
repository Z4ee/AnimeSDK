#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E5C40)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9E5C20)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DE8CFA0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9E5C00)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9E5BA0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9E5C70)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9E5C40)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9E5C20)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x9E5C60)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E5CD0)
#define STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8D140)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex = 77057;

	struct alignas(4) AddValueFloatOverTimeTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AddValueFloatOverTimeTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4EF60);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE992491F; // 0x0
		::System::Single BaseValue; // 0x10
		::System::Single AddValuePerSecond; // 0x14
		::System::Single MinValue; // 0x18
		::System::Single MaxValue; // 0x1C
		::System::Single ResultValue; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeGameplay_AddValueFloatOverTimeTaskInstanceData__CopyAssign(::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::AddValueFloatOverTimeTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_ADDVALUEFLOATOVERTIMETASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
