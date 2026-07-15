#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B929C20)
#define MESSAGEPACK_STRINGENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B945F70)

namespace MessagePack
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 7206;

	class StringEncoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_UTF8()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(StringEncoding_TypeDefinitionIndex)->GetStaticField(0x9A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING__CCTOR_OFFSET))();
		}

		static ::System::String* GetString(::System::Text::Encoding* a1, ::System::ReadOnlySpan_1<::System::Byte> a2)
		{
			return ((::System::String*(*)(::System::Text::Encoding*, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STRINGENCODING_GETSTRING_OFFSET))(a1, a2);
		}
	};
}
