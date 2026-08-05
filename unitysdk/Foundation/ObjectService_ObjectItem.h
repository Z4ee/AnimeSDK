#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_OBJECTSERVICE_OBJECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7700)

namespace Foundation
{
	inline static constexpr unsigned int ObjectService_ObjectItem_TypeDefinitionIndex = 8527;

	struct alignas(4) ObjectService_ObjectItem
	{
		::System::Int32 Id; // 0x10
		::System::Int32 Parent; // 0x14
		::System::Int32 PreviousSibling; // 0x18
		::System::Int32 NextSibling; // 0x1C
		::System::Int32 FirstChild; // 0x20

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_OBJECTITEM__CTOR_OFFSET))(this, id);
		}
	};
}
