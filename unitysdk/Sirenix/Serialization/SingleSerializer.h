#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_SINGLESERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1FA7EB80)
#define SIRENIX_SERIALIZATION_SINGLESERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1FA7F210)
#define SIRENIX_SERIALIZATION_SINGLESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7F300)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SingleSerializer_TypeDefinitionIndex = 7556;

	class SingleSerializer : public ::Sirenix::Serialization::Serializer_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SINGLESERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Single ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Single(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SINGLESERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Single value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SINGLESERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
