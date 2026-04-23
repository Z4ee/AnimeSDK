#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_IMMUTABLECOLLECTION_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1733C230)

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 9422;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(type);
		}
	};
}
