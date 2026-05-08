#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4678A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B467890)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializeAsAttribute_TypeDefinitionIndex = 27331;

	class fsSerializeAsAttribute : public ::System::Attribute
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}
	};
}
