#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA6C130)
#define STATETREECORE_STATETREEDATAVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STATETREECORE_STATETREEDATAVIEW_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E5975E0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA6C1C0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA6C1D0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C150)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataView_TypeDefinitionIndex = 31082;

	struct alignas(8) StateTreeDataView
	{
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> _struct; // 0x10
		::System::Void* _memory; // 0x18
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> _object; // 0x20

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> inStruct, ::System::Void* inMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::System::Void*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET))(this, inStruct, inMemory);
		}

		::System::Void _ctor_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> object)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET))(this, object);
		}

		/*
		::System::Void _ctor_2(::UnrealTypes::FStructView& structView)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_2_OFFSET))(this, structView);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> get_Struct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET))(this);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_MEMORY_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> get_Object()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_OBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeDataView op_Implicit(::UnrealTypes::FStructView& structView)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET))(structView);
		}
		*/
	};
}
