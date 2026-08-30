#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS73_0__CREATESERIALIZATIONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BED6610)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED65F0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContract___c__DisplayClass73_0_TypeDefinitionIndex = 9668;

	class JsonContract___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* callbackMethodInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateSerializationCallback_b__0(::System::Object* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT___C__DISPLAYCLASS73_0__CREATESERIALIZATIONCALLBACK_B__0_OFFSET))(this, a1, a2);
		}
	};
}
