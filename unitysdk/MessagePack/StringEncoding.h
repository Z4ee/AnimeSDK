#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1BCC7F30)
#define MESSAGEPACK_STRINGENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCC7F80)

namespace MessagePack
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 30110;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StringEncoding_TypeDefinitionIndex)->GetStaticField(0x23840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING__CCTOR_OFFSET))();
		}

		static ::System::String* GetString(::System::Text::Encoding* encoding, ::System::ReadOnlySpan_1<::System::Byte> bytes)
		{
			return ((::System::String*(*)(::System::Text::Encoding*, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET))(encoding, bytes);
		}
	};
}
