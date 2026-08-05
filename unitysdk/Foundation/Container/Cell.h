#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_CELL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xABDF90)
#define FOUNDATION_CONTAINER_CELL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xABDF70)
#define FOUNDATION_CONTAINER_CELL__CTOR_OFFSET UNITYSDK_OFFSET(0xABDFB0)

namespace Foundation::Container
{
	inline static constexpr unsigned int Cell_TypeDefinitionIndex = 8571;

	struct alignas(8) Cell
	{
		::System::Int32 X; // 0x10
		::System::Int32 Z; // 0x14
		::System::Int32 Level; // 0x18
		::System::Int64 FirstIndex; // 0x20
		::System::Int64 ChildCount; // 0x28

		::System::Void _ctor(::System::Int32 x, ::System::Int32 z, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELL__CTOR_OFFSET))(this, x, z, level);
		}

		/*
		::Foundation::Container::CellLocation get_Location()
		{
			return ((::Foundation::Container::CellLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELL_GET_LOCATION_OFFSET))(this);
		}
		*/

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELL_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
