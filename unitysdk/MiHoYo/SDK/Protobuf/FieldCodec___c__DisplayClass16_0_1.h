#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c__DisplayClass16_0_1_TypeDefinitionIndex = 34280;

	template <typename T>
	class FieldCodec___c__DisplayClass16_0_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::MessageParser_1<T>* parser; // 0x0
	};
}
