#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/ParserToken.h"
#include "unitysdk/System/ApplicationException.h"

namespace System { class Exception; }
namespace System { class String; }

#define LITJSON_JSONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE3CE60)
#define LITJSON_JSONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DE3CF60)
#define LITJSON_JSONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DE3D060)
#define LITJSON_JSONEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DE3D160)
#define LITJSON_JSONEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DE3D260)
#define LITJSON_JSONEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1DE3D2F0)
#define LITJSON_JSONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3CDA0)

namespace LitJson
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 8103;

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
