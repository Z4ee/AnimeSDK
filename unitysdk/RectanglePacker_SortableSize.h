#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RECTANGLEPACKER_SORTABLESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x4E6C30)

inline static constexpr unsigned int RectanglePacker_SortableSize_TypeDefinitionIndex = 26331;

struct alignas(4) RectanglePacker_SortableSize
{
	::System::Int32 width; // 0x10
	::System::Int32 height; // 0x14
	::System::Int32 id; // 0x18

	::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::System::Int32 id)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_SORTABLESIZE__CTOR_OFFSET))(this, width, height, id);
	}
};
