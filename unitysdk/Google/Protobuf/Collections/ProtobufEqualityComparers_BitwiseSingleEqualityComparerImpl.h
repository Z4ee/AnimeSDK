#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x15ADD0B0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15ADD0D0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCCC0)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_BitwiseSingleEqualityComparerImpl_TypeDefinitionIndex = 6375;

	class ProtobufEqualityComparers_BitwiseSingleEqualityComparerImpl : public ::System::Collections::Generic::EqualityComparer_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Single x, ::System::Single y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Single obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
