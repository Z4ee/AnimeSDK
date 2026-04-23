#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISEDOUBLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x170D91E0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLEDOUBLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x170D9240)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLESINGLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x170D9270)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISESINGLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x170D9210)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D92A0)

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int ProtobufEqualityComparers_TypeDefinitionIndex = 6383;

	class ProtobufEqualityComparers : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<::System::Double>** StaticGet__BitwiseDoubleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(ProtobufEqualityComparers_TypeDefinitionIndex)->GetStaticField(0x1800);
		}
		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>** StaticGet__BitwiseNullableDoubleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>**)Il2CppClass::FromTypeDefinitionIndex(ProtobufEqualityComparers_TypeDefinitionIndex)->GetStaticField(0x1808);
		}
		static ::System::Collections::Generic::EqualityComparer_1<::System::Single>** StaticGet__BitwiseSingleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProtobufEqualityComparers_TypeDefinitionIndex)->GetStaticField(0x1810);
		}
		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>** StaticGet__BitwiseNullableSingleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(ProtobufEqualityComparers_TypeDefinitionIndex)->GetStaticField(0x1818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Double>* get_BitwiseDoubleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Double>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISEDOUBLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Single>* get_BitwiseSingleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISESINGLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>* get_BitwiseNullableDoubleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLEDOUBLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>* get_BitwiseNullableSingleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLESINGLEEQUALITYCOMPARER_OFFSET))();
		}
	};
}
