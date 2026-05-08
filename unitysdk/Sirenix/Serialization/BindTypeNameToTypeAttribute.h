#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_BINDTYPENAMETOTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87CDD0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BindTypeNameToTypeAttribute_TypeDefinitionIndex = 7367;

	class BindTypeNameToTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* OldTypeName; // 0x10
		::System::Type* NewType; // 0x18

		::System::Void _ctor(::System::String* oldFullTypeName, ::System::Type* newType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINDTYPENAMETOTYPEATTRIBUTE__CTOR_OFFSET))(this, oldFullTypeName, newType);
		}
	};
}
