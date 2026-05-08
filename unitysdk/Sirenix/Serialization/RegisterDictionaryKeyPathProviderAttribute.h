#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_REGISTERDICTIONARYKEYPATHPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C501F50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int RegisterDictionaryKeyPathProviderAttribute_TypeDefinitionIndex = 7436;

	class RegisterDictionaryKeyPathProviderAttribute : public ::System::Attribute
	{
	public:
		::System::Type* ProviderType; // 0x10

		::System::Void _ctor(::System::Type* providerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REGISTERDICTIONARYKEYPATHPROVIDERATTRIBUTE__CTOR_OFFSET))(this, providerType);
		}
	};
}
