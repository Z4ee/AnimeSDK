#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/ParserToken.h"
#include "unitysdk/System/ApplicationException.h"

namespace System { class Exception; }
namespace System { class String; }

#define LITJSON_JSONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0265C0)
#define LITJSON_JSONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F0266C0)
#define LITJSON_JSONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F0267C0)
#define LITJSON_JSONEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F0268C0)
#define LITJSON_JSONEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F0269C0)
#define LITJSON_JSONEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F026A50)
#define LITJSON_JSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F026500)

namespace LitJson
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 8209;

	class JsonException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LitJson::ParserToken token)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::ParserToken))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_1_OFFSET))(this, token);
		}

		::System::Void _ctor_2(::LitJson::ParserToken token, ::System::Exception* inner_exception)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::ParserToken, ::System::Exception*))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_2_OFFSET))(this, token, inner_exception);
		}

		::System::Void _ctor_3(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_3_OFFSET))(this, c);
		}

		::System::Void _ctor_4(::System::Int32 c, ::System::Exception* inner_exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_4_OFFSET))(this, c, inner_exception);
		}

		::System::Void _ctor_5(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_5_OFFSET))(this, message);
		}

		::System::Void _ctor_6(::System::String* message, ::System::Exception* inner_exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + LITJSON_JSONEXCEPTION__CTOR_6_OFFSET))(this, message, inner_exception);
		}
	};
}
