#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueSizeCalculatorFunc; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueWriterAction; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValuesMerger; }
namespace Google::Protobuf { template <typename T> class FieldCodec___c__18_1; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c__18_1_TypeDefinitionIndex = 5385;

	template <typename T>
	class FieldCodec___c__18_1 : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec___c__18_1<T>** StaticGet___9()
		{
			return (::Google::Protobuf::FieldCodec___c__18_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<T>** StaticGet___9__18_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValuesMerger<T>** StaticGet___9__18_3()
		{
			return (::Google::Protobuf::FieldCodec_1_ValuesMerger<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueSizeCalculatorFunc<T>** StaticGet___9__18_4()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueSizeCalculatorFunc<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
