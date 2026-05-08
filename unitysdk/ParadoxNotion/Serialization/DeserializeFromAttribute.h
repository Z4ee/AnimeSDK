#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_SERIALIZATION_DESERIALIZEFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85F330)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int DeserializeFromAttribute_TypeDefinitionIndex = 27973;

	class DeserializeFromAttribute : public ::System::Attribute
	{
	public:
		::System::String* previousTypeFullName; // 0x10

		::System::Void _ctor(::System::String* previousTypeFullName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_DESERIALIZEFROMATTRIBUTE__CTOR_OFFSET))(this, previousTypeFullName);
		}
	};
}
