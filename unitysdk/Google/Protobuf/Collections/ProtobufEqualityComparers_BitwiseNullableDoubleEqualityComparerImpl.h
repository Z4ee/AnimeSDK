#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x15ADCD50)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15ADCE90)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCCE0)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_BitwiseNullableDoubleEqualityComparerImpl_TypeDefinitionIndex = 6376;

	class ProtobufEqualityComparers_BitwiseNullableDoubleEqualityComparerImpl : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Nullable_1<::System::Double> x, ::System::Nullable_1<::System::Double> y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Double>, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Nullable_1<::System::Double> obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_BITWISENULLABLEDOUBLEEQUALITYCOMPARERIMPL_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
