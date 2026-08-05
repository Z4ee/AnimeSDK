#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocationStep.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_TYPEFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F045D20)
#define SIRENIX_SERIALIZATION_TYPEFORMATTERLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F045E10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int TypeFormatterLocator_TypeDefinitionIndex = 7447;

	class TypeFormatterLocator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTERLOCATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetFormatter(::System::Type* type, ::Sirenix::Serialization::FormatterLocationStep step, ::Sirenix::Serialization::ISerializationPolicy* policy, ::Sirenix::Serialization::IFormatter*& formatter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::Sirenix::Serialization::FormatterLocationStep, ::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TYPEFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET))(this, type, step, policy, formatter);
		}
	};
}
