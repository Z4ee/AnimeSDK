#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSAUTOINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3BF40)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsAutoInstance_TypeDefinitionIndex = 29793;

	class fsAutoInstance : public ::System::Attribute
	{
	public:
		::System::Boolean makeInstance; // 0x10

		::System::Void _ctor(::System::Boolean makeInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSAUTOINSTANCE__CTOR_OFFSET))(this, makeInstance);
		}
	};
}
