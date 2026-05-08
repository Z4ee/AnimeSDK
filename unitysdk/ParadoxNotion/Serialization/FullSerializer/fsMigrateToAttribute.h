#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMIGRATETOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AA090)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMigrateToAttribute_TypeDefinitionIndex = 27451;

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
