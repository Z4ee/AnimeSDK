#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1736FA80)
#define MESSAGEPACK_STRINGENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x17389020)

namespace MessagePack
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 9297;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StringEncoding_TypeDefinitionIndex)->GetStaticField(0x425E0);
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
