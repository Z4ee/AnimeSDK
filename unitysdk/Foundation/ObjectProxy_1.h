#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IObject; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectProxy_1_TypeDefinitionIndex = 8802;

	template <typename T>
	class ObjectProxy_1 : public ::System::Object
	{
	public:
		T _object; // 0x0
		::Foundation::ObjectHandle _handle; // 0x0
	};
}
