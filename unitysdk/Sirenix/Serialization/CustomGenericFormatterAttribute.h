#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/CustomFormatterAttribute.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_CUSTOMGENERICFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F916480)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CustomGenericFormatterAttribute_TypeDefinitionIndex = 7501;

	class CustomGenericFormatterAttribute : public ::Sirenix::Serialization::CustomFormatterAttribute
	{
	public:
		::System::Type* SerializedGenericTypeDefinition; // 0x18

		::System::Void _ctor(::System::Type* serializedGenericTypeDefinition, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMGENERICFORMATTERATTRIBUTE__CTOR_OFFSET))(this, serializedGenericTypeDefinition, priority);
		}
	};
}
