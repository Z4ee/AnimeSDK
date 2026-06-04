#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1815B2E0)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x18156CC0)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET UNITYSDK_OFFSET(0x1816A490)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x18155AC0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 7252;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsAnonymous(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET))(a1);
		}

		static ::System::Boolean IsIndexer(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET))(a1);
		}

		static ::System::Boolean IsConstructedGenericType(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET))(a1);
		}
	};
}
