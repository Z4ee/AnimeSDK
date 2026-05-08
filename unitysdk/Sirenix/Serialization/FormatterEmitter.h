#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class String; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_FORMATTEREMITTER_GETEMITTEDFORMATTER_OFFSET UNITYSDK_OFFSET(0x1C143700)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterEmitter_TypeDefinitionIndex = 7327;

	class FormatterEmitter : public ::System::Object
	{
	public:
		// static const ::System::String* PRE_EMITTED_ASSEMBLY_NAME; // 0x0
		// static const ::System::String* RUNTIME_EMITTED_ASSEMBLY_NAME; // 0x0

		static ::Sirenix::Serialization::IFormatter* GetEmittedFormatter(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::Sirenix::Serialization::IFormatter*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTEREMITTER_GETEMITTEDFORMATTER_OFFSET))(type, policy);
		}
	};
}
