#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET UNITYSDK_OFFSET(0x1FA4B5A0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 32094;

	class Error : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentNullExceptionCore(::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET))(paramName);
		}
	};
}
