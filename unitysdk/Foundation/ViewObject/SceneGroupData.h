#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_E9FF194CA9EF9D04;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneGroupData_TypeDefinitionIndex = 40392;

	struct alignas(8) SceneGroupData
	{
		::Class_3_E9FF194CA9EF9D04* ServerInfo; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
	};
}
