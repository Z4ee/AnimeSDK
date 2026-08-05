#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/MapHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int HandledMap_1_TypeDefinitionIndex = 65225;

	template <typename T>
	class HandledMap_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::Container::MapHandle, T>* map; // 0x0
		::System::UInt32 lastKey; // 0x0
	};
}
