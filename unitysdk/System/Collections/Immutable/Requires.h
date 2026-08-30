#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F010440)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F010330)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILRANGE_OFFSET UNITYSDK_OFFSET(0x1F0103A0)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_RANGE_OFFSET UNITYSDK_OFFSET(0x1F010380)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int Requires_TypeDefinitionIndex = 6661;

	class Requires : public ::System::Object
	{
	public:
		static ::System::Void FailArgumentNullException(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void Range(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_RANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FailRange(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILRANGE_OFFSET))(a1, a2);
		}

		static ::System::Void Argument(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_ARGUMENT_OFFSET))(a1);
		}
	};
}
