#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1E7F7520)
#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7F7B10)
#define SIRENIX_SERIALIZATION_INTPTRSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F7BF0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int IntPtrSerializer_TypeDefinitionIndex = 7548;

	class IntPtrSerializer : public ::Sirenix::Serialization::Serializer_1<::System::IntPtr>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::IntPtr ReadValue(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER_READVALUE_OFFSET))(this, reader);
		}

		::System::Void WriteValue(::System::String* name, ::System::IntPtr value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IntPtr, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_INTPTRSERIALIZER_WRITEVALUE_OFFSET))(this, name, value, writer);
		}
	};
}
