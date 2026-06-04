#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Numerics/Vector2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18149850)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x181497D0)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18149A00)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x181497C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 7451;

	class Vector2Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector2>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Vector2Formatter_TypeDefinitionIndex)->GetStaticField(0x8F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Numerics::Vector2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Numerics::Vector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Vector2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Vector2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
