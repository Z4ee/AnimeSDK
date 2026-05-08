#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x3A4E50)
#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x81E2E0)
#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_ROW_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_START_OFFSET UNITYSDK_OFFSET(0x18FA5270)
#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x81E2B0)
#define SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int CopyPosition_TypeDefinitionIndex = 3945;

	struct alignas(4) CopyPosition
	{
		::System::Int32 _Row_k__BackingField; // 0x10
		::System::Int32 _Column_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION__CTOR_OFFSET))(this, row, column);
		}

		static ::System::Collections::Generic::CopyPosition get_Start()
		{
			return ((::System::Collections::Generic::CopyPosition(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_START_OFFSET))();
		}

		::System::Int32 get_Row()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_ROW_OFFSET))(this);
		}

		::System::Int32 get_Column()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_COLUMN_OFFSET))(this);
		}

		::System::Collections::Generic::CopyPosition Normalize(::System::Int32 endColumn)
		{
			return ((::System::Collections::Generic::CopyPosition(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_NORMALIZE_OFFSET))(this, endColumn);
		}

		::System::String* get_DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COPYPOSITION_GET_DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
