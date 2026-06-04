#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E3BBF0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E3BCA0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3B980)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_BitwiseNullableSingleEqualityComparerImpl_TypeDefinitionIndex = 5589;

	class ProtobufEqualityComparers_BitwiseNullableSingleEqualityComparerImpl : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLESINGLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
