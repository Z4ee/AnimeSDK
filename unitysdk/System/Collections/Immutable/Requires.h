#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x19EB5810)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19EB5700)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILRANGE_OFFSET UNITYSDK_OFFSET(0x19EB5770)
#define SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_RANGE_OFFSET UNITYSDK_OFFSET(0x19EB5750)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int Requires_TypeDefinitionIndex = 9179;

	class Requires : public ::System::Object
	{
	public:
		static ::System::Void FailArgumentNullException(::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILARGUMENTNULLEXCEPTION_OFFSET))(parameterName);
		}

		static ::System::Void Range(::System::Boolean condition, ::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_RANGE_OFFSET))(condition, parameterName, message);
		}

		static ::System::Void FailRange(::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_FAILRANGE_OFFSET))(parameterName, message);
		}

		static ::System::Void Argument(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_REQUIRES_ARGUMENT_OFFSET))(condition);
		}
	};
}
