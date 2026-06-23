#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocationStep.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_SELFFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1DC1A560)
#define SIRENIX_SERIALIZATION_SELFFORMATTERLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1A7E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SelfFormatterLocator_TypeDefinitionIndex = 7442;

	class SelfFormatterLocator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SELFFORMATTERLOCATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetFormatter(::System::Type* type, ::Sirenix::Serialization::FormatterLocationStep step, ::Sirenix::Serialization::ISerializationPolicy* policy, ::Sirenix::Serialization::IFormatter*& formatter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::Sirenix::Serialization::FormatterLocationStep, ::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SELFFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET))(this, type, step, policy, formatter);
		}
	};
}
