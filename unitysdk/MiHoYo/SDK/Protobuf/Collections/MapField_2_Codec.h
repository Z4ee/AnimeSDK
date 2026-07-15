#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_TypeDefinitionIndex = 34424;

	template <typename TKey, typename TValue>
	class MapField_2_Codec : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::FieldCodec_1<TKey>* keyCodec; // 0x0
		::MiHoYo::SDK::Protobuf::FieldCodec_1<TValue>* valueCodec; // 0x0
		::System::UInt32 mapTag; // 0x0
	};
}
