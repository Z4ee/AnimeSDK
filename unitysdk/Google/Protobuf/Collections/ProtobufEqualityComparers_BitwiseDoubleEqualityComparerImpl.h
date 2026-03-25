#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x15ADCD20)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15ADCD40)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCCA0)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_BitwiseDoubleEqualityComparerImpl_TypeDefinitionIndex = 6374;

	class ProtobufEqualityComparers_BitwiseDoubleEqualityComparerImpl : public ::System::Collections::Generic::EqualityComparer_1<::System::Double>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Double x, ::System::Double y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Double obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISEDOUBLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
