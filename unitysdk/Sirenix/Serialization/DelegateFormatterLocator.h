#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocationStep.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_DELEGATEFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1FBD3E30)
#define SIRENIX_SERIALIZATION_DELEGATEFORMATTERLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD4000)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DelegateFormatterLocator_TypeDefinitionIndex = 7437;

	class DelegateFormatterLocator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DELEGATEFORMATTERLOCATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetFormatter(::System::Type* type, ::Sirenix::Serialization::FormatterLocationStep step, ::Sirenix::Serialization::ISerializationPolicy* policy, ::Sirenix::Serialization::IFormatter*& formatter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::Sirenix::Serialization::FormatterLocationStep, ::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DELEGATEFORMATTERLOCATOR_TRYGETFORMATTER_OFFSET))(this, type, step, policy, formatter);
		}
	};
}
