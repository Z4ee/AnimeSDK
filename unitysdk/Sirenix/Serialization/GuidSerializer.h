#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"
#include "unitysdk/System/Guid.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_GUIDSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1E5121F0)
#define SIRENIX_SERIALIZATION_GUIDSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E5127E0)
#define SIRENIX_SERIALIZATION_GUIDSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5128D0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GuidSerializer_TypeDefinitionIndex = 7544;

	class GuidSerializer : public ::Sirenix::Serialization::Serializer_1<::System::Guid>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GUIDSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Guid ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Guid(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GUIDSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::Guid value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GUIDSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
