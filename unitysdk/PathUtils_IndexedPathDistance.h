#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PATHUTILS_INDEXEDPATHDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x44EB50)

inline static constexpr unsigned int PathUtils_IndexedPathDistance_TypeDefinitionIndex = 83940;

struct alignas(4) PathUtils_IndexedPathDistance
{
	::System::Int32 index; // 0x10
	::System::Single pathLength; // 0x14

	::System::Void _ctor(::System::Int32 index, ::System::Single pathLength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PATHUTILS_INDEXEDPATHDISTANCE__CTOR_OFFSET))(this, index, pathLength);
	}
};
