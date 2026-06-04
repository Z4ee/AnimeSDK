#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813AEF0)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1813AEE0)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813AF90)
#define MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1813AED0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DoubleFormatter_TypeDefinitionIndex = 7419;

	class DoubleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DoubleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(DoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x8820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Double a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Double, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Double Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Double(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
