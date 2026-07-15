#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec___c__16_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c__16_1_TypeDefinitionIndex = 34281;

	template <typename T>
	class FieldCodec___c__16_1 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec___c__16_1<T>** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec___c__16_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__16_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::MiHoYo::SDK::Protobuf::CodedOutputStream*, T>** StaticGet___9__16_1()
		{
			return (::System::Action_2<::MiHoYo::SDK::Protobuf::CodedOutputStream*, T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__16_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::Int32>** StaticGet___9__16_2()
		{
			return (::System::Func_2<T, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c__16_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
