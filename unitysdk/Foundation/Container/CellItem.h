#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/Pointer.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_CELLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xABE500)

namespace Foundation::Container
{
	inline static constexpr unsigned int CellItem_TypeDefinitionIndex = 8785;

	struct alignas(8) CellItem
	{
		::Foundation::Container::Pointer Storage; // 0x10
		::System::Double Key; // 0x20

		::System::Void _ctor(::Foundation::Container::Pointer storage, ::System::Double key)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::Pointer, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLITEM__CTOR_OFFSET))(this, storage, key);
		}
	};
}
