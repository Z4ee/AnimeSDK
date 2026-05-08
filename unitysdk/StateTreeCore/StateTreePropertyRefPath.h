#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyPath.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYREFPATH_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9BAB30)
#define STATETREECORE_STATETREEPROPERTYREFPATH_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9BA9B0)
#define STATETREECORE_STATETREEPROPERTYREFPATH_CREATE_OFFSET UNITYSDK_OFFSET(0x1BEF4A80)
#define STATETREECORE_STATETREEPROPERTYREFPATH_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9BA900)
#define STATETREECORE_STATETREEPROPERTYREFPATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C3530)
#define STATETREECORE_STATETREEPROPERTYREFPATH_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9BA8A0)
#define STATETREECORE_STATETREEPROPERTYREFPATH_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9BACB0)
#define STATETREECORE_STATETREEPROPERTYREFPATH_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9BAC10)
#define STATETREECORE_STATETREEPROPERTYREFPATH_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9BAA50)
#define STATETREECORE_STATETREEPROPERTYREFPATH_RESET_OFFSET UNITYSDK_OFFSET(0x9BAC40)
#define STATETREECORE_STATETREEPROPERTYREFPATH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYREFPATH__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9BAB30)
#define STATETREECORE_STATETREEPROPERTYREFPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF4F10)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRefPath_TypeDefinitionIndex = 28363;

	struct alignas(8) StateTreePropertyRefPath
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyRefPath_TypeDefinitionIndex)->GetStaticField(0x219E0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x4D3285CB; // 0x0
		::StateTreeCore::StateTreePropertyPath SourcePropertyPath; // 0x10
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyRefPath Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRefPath(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreePropertyRefPath DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRefPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyRefPath CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRefPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyRefPath MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRefPath(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyRefPath& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRefPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyRefPath& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRefPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyRefPath__CopyAssign(::StateTreeCore::StateTreePropertyRefPath& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRefPath&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREFPATH_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYREFPATH__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
