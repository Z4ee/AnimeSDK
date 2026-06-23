#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA7CD20)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x45F3B0)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E80A8D0)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA7CCB0)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3D6980)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA7CC50)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA7CDA0)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA7CD20)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x45F3B0)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0xA7CD30)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXTERNALDATAHANDLE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA7CD20)
#define STATETREECORE_STATETREEEXTERNALDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80AAE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataHandle_TypeDefinitionIndex = 30937;

	struct alignas(2) StateTreeExternalDataHandle
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExternalDataHandle_TypeDefinitionIndex)->GetStaticField(0x257D0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x44A284B3; // 0x0
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeExternalDataHandle Create()
		{
			return ((::StateTreeCore::StateTreeExternalDataHandle(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeExternalDataHandle DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExternalDataHandle CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExternalDataHandle MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeExternalDataHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeExternalDataHandle& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeExternalDataHandle__CopyAssign(::StateTreeCore::StateTreeExternalDataHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXTERNALDATAHANDLE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
