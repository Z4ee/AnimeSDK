#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMIGRATETOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8CCD0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMigrateToAttribute_TypeDefinitionIndex = 31135;

	class fsMigrateToAttribute : public ::System::Attribute
	{
	public:
		::System::Type* targetType; // 0x10

		::System::Void _ctor(::System::Type* targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMIGRATETOATTRIBUTE__CTOR_OFFSET))(this, targetType);
		}
	};
}
