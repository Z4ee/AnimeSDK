#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_FromInt32Func_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_ToInt32Func_1; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c__DisplayClass17_0_1_TypeDefinitionIndex = 5386;

	template <typename T>
	class FieldCodec___c__DisplayClass17_0_1 : public ::System::Object
	{
	public:
		::Google::Protobuf::FieldCodec_FromInt32Func_1<T>* fromInt32; // 0x0
		::Google::Protobuf::FieldCodec_ToInt32Func_1<T>* toInt32; // 0x0
	};
}
