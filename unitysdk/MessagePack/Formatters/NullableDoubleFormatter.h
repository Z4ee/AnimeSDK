#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67CD50)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B67CCC0)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B67CE90)
#define MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67CCB0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableDoubleFormatter_TypeDefinitionIndex = 7412;

	class NullableDoubleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableDoubleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableDoubleFormatter**)Il2CppClass::FromTypeDefinitionIndex(NullableDoubleFormatter_TypeDefinitionIndex)->GetStaticField(0x2A630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::System::Nullable_1<::System::Double> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Nullable_1<::System::Double>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Double> Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDOUBLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
