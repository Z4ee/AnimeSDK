#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class DeserializeFunc; }

#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167D3D40)
#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167D3D80)
#define MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__TST_B__6_0_OFFSET UNITYSDK_OFFSET(0x167D3D90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int AutoGen_Formatter_Register___c_TypeDefinitionIndex = 50343;

	class AutoGen_Formatter_Register___c : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::AutoGen_Formatter_Register___c** StaticGet___9()
		{
			return (::MessagePack::Formatters::AutoGen_Formatter_Register___c**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register___c_TypeDefinitionIndex)->GetStaticField(0x3C6C0);
		}
		static ::MessagePack::Formatters::DeserializeFunc** StaticGet___9__6_0()
		{
			return (::MessagePack::Formatters::DeserializeFunc**)Il2CppClass::FromTypeDefinitionIndex(AutoGen_Formatter_Register___c_TypeDefinitionIndex)->GetStaticField(0x3C6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__CTOR_OFFSET))(this);
		}

		::System::Object* _Tst_b__6_0(::System::Object* formatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_AUTOGEN_FORMATTER_REGISTER___C__TST_B__6_0_OFFSET))(this, formatter, reader, options);
		}
	};
}
