#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_30235BB967CBDA73_1;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneGroupData_TypeDefinitionIndex = 64786;

	struct alignas(8) SceneGroupData
	{
		::Class_3_30235BB967CBDA73_1* ServerInfo; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
	};
}
