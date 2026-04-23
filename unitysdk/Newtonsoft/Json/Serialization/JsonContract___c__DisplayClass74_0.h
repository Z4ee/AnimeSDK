#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS74_0__CREATESERIALIZATIONERRORCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x17AA7A70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA7930)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContract___c__DisplayClass74_0_TypeDefinitionIndex = 8475;

	class JsonContract___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* callbackMethodInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateSerializationErrorCallback_b__0(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* econtext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS74_0__CREATESERIALIZATIONERRORCALLBACK_B__0_OFFSET))(this, o, context, econtext);
		}
	};
}
