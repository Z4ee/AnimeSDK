#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1F980160)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xABCDE0)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xABCE40)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x463A20)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEMPTYINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEMPTYINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F980290)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEmptyInstanceData_TypeDefinitionIndex = 31592;

	struct alignas(1) StateTreeEmptyInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeEmptyInstanceData_TypeDefinitionIndex)->GetStaticField(0x26640);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE93282A0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeEmptyInstanceData Create()
		{
			return ((::StateTreeCore::StateTreeEmptyInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeEmptyInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEmptyInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEmptyInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEmptyInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeEmptyInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeEmptyInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeEmptyInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEmptyInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeEmptyInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEmptyInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeEmptyInstanceData__CopyAssign(::StateTreeCore::StateTreeEmptyInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeEmptyInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEMPTYINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEMPTYINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
