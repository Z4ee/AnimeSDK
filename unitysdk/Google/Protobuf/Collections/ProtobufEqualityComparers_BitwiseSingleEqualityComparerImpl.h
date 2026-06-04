#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E3BD30)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E3BD50)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3B940)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_BitwiseSingleEqualityComparerImpl_TypeDefinitionIndex = 5587;

	class ProtobufEqualityComparers_BitwiseSingleEqualityComparerImpl : public ::System::Collections::Generic::EqualityComparer_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
