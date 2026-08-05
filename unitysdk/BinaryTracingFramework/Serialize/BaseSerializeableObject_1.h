#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int BaseSerializeableObject_1_TypeDefinitionIndex = 34611;

	template <typename T>
	class BaseSerializeableObject_1 : public ::System::Object
	{
	public:
	};
}
