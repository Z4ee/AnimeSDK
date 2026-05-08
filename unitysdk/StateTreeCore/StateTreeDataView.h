#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREEDATAVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9CD980)
#define STATETREECORE_STATETREEDATAVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STATETREECORE_STATETREEDATAVIEW_GET_STRUCT_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define STATETREECORE_STATETREEDATAVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C2A7AB0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9CD9A0)
#define STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataView_TypeDefinitionIndex = 28427;

	struct alignas(8) StateTreeDataView
	{
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> _struct; // 0x10
		::System::Void* _memory; // 0x18

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> inStruct, ::System::Void* inMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>, ::System::Void*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_OFFSET))(this, inStruct, inMemory);
		}

		/*
		::System::Void _ctor_1(::UnrealTypes::FStructView& structView)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEDATAVIEW__CTOR_1_OFFSET))(this, structView);
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
