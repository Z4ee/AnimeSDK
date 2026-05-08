#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEPROPERTYREF_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4E6C60)
#define STATETREECORE_STATETREEPROPERTYREF_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x361400)
#define STATETREECORE_STATETREEPROPERTYREF_CREATE_OFFSET UNITYSDK_OFFSET(0x1C33A690)
#define STATETREECORE_STATETREEPROPERTYREF_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x304470)
#define STATETREECORE_STATETREEPROPERTYREF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define STATETREECORE_STATETREEPROPERTYREF_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9D3180)
#define STATETREECORE_STATETREEPROPERTYREF_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9D31E0)
#define STATETREECORE_STATETREEPROPERTYREF_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x4E6C60)
#define STATETREECORE_STATETREEPROPERTYREF_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x361400)
#define STATETREECORE_STATETREEPROPERTYREF_RESET_OFFSET UNITYSDK_OFFSET(0x4E6C70)
#define STATETREECORE_STATETREEPROPERTYREF_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYREF__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x4E6C60)
#define STATETREECORE_STATETREEPROPERTYREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C33A7C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRef_TypeDefinitionIndex = 28391;

	struct alignas(2) StateTreePropertyRef
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreePropertyRef_TypeDefinitionIndex)->GetStaticField(0x21940);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF52908C; // 0x0
		::System::UInt16 RefAccessIndex; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreePropertyRef Create()
		{
			return ((::StateTreeCore::StateTreePropertyRef(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreePropertyRef DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRef(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyRef CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRef(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreePropertyRef MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreePropertyRef(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreePropertyRef& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRef&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreePropertyRef& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRef&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreePropertyRef__CopyAssign(::StateTreeCore::StateTreePropertyRef& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreePropertyRef&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYREF_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEPROPERTYREF__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
