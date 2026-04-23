#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732C470)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1732C340)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732C660)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732C330)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DoubleArrayFormatter_TypeDefinitionIndex = 9518;

	class DoubleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DoubleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DoubleArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x41970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::Double>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::Double>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::Double>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
