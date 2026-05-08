#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF24030)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF23FA0)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF24080)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23F90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableDoubleFormatter_TypeDefinitionIndex = 27398;

	class NullableDoubleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableDoubleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableDoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableDoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x20830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Nullable_1<::System::Double> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Double>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Nullable_1<::System::Double> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
