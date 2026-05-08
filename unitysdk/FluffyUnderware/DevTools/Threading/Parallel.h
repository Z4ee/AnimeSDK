#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_DEVTOOLS_THREADING_PARALLEL_FOR_OFFSET UNITYSDK_OFFSET(0x1B2D7B40)

namespace FluffyUnderware::DevTools::Threading
{
	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 25921;

	class Parallel : public ::System::Object
	{
	public:
		static ::System::Void For(::System::Int32 fromInclusive, ::System::Int32 toExclusive, ::System::Action_1<::System::Int32>* body)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADING_PARALLEL_FOR_OFFSET))(fromInclusive, toExclusive, body);
		}
	};
}
