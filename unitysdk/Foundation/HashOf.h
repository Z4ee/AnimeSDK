#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define FOUNDATION_HASHOF_GET_OFFSET UNITYSDK_OFFSET(0x1CFFE000)

namespace Foundation
{
	inline static constexpr unsigned int HashOf_TypeDefinitionIndex = 8451;

	class HashOf : public ::System::Object
	{
	public:
		static ::System::Int64 Get(::System::Type* type)
		{
			return ((::System::Int64(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_HASHOF_GET_OFFSET))(type);
		}
	};
}
