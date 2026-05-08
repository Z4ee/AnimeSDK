#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_RESOURCELOADERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31F160)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int ResourceLoaderAttribute_TypeDefinitionIndex = 37372;

	class ResourceLoaderAttribute : public ::System::Attribute
	{
	public:
		::System::String* ResourceName; // 0x10

		::System::Void _ctor(::System::String* resName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_RESOURCELOADERATTRIBUTE__CTOR_OFFSET))(this, resName);
		}
	};
}
