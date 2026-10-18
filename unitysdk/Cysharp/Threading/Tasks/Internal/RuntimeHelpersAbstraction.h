#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_WELLKNOWNNOREFERENCECONTAINSTYPEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F0F0D80)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int RuntimeHelpersAbstraction_TypeDefinitionIndex = 38665;

	class RuntimeHelpersAbstraction : public ::System::Object
	{
	public:
		static ::System::Boolean WellKnownNoReferenceContainsTypeInitialize(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_WELLKNOWNNOREFERENCECONTAINSTYPEINITIALIZE_OFFSET))(a1);
		}
	};
}
