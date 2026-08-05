#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace StateTreeCore { class VirtualProxy_StateTreeNodeBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREENODEBASE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1F980300)
#define STATETREECORE_STATETREENODEBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xABD0A0)
#define STATETREECORE_STATETREENODEBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xABD070)
#define STATETREECORE_STATETREENODEBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F980550)
#define STATETREECORE_STATETREENODEBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xABD050)
#define STATETREECORE_STATETREENODEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1F980320)
#define STATETREECORE_STATETREENODEBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xABCFF0)
#define STATETREECORE_STATETREENODEBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xABD140)
#define STATETREECORE_STATETREENODEBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x325570)
#define STATETREECORE_STATETREENODEBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0xABCEA0)
#define STATETREECORE_STATETREENODEBASE_LINK_OFFSET UNITYSDK_OFFSET(0x1F980310)
#define STATETREECORE_STATETREENODEBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xABD0A0)
#define STATETREECORE_STATETREENODEBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xABD070)
#define STATETREECORE_STATETREENODEBASE_RESET_OFFSET UNITYSDK_OFFSET(0xABD0D0)
#define STATETREECORE_STATETREENODEBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STATETREECORE_STATETREENODEBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREENODEBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xABD0A0)
#define STATETREECORE_STATETREENODEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9808E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeNodeBase_TypeDefinitionIndex = 31590;

	struct alignas(4) StateTreeNodeBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x266A0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x3CB09E2F; // 0x0
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> TypeHandle; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::System::UInt16 BindingsBatch; // 0x1C
		::System::UInt16 InstanceTemplateIndex; // 0x1E
		::StateTreeCore::StateTreeDataHandle InstanceDataHandle; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeCore::StateTreeNodeBase& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeCore::StateTreeNodeBase&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		static ::System::Boolean Link(::StateTreeCore::StateTreeNodeBase& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeNodeBase&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeCore::StateTreeNodeBase& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeCore::StateTreeNodeBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::StateTreeCore::VirtualProxy_StateTreeNodeBase* get_VirtualProxy()
		{
			return ((::StateTreeCore::VirtualProxy_StateTreeNodeBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeNodeBase Create()
		{
			return ((::StateTreeCore::StateTreeNodeBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeNodeBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeNodeBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeNodeBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeNodeBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeNodeBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeNodeBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeNodeBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeNodeBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeNodeBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeNodeBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeNodeBase__CopyAssign(::StateTreeCore::StateTreeNodeBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeNodeBase&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREENODEBASE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
