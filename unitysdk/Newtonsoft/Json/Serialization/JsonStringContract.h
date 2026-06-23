#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonPrimitiveContract.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSTRINGCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0F30)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonStringContract_TypeDefinitionIndex = 7144;

	class JsonStringContract : public ::Newtonsoft::Json::Serialization::JsonPrimitiveContract
	{
	public:
		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSTRINGCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}
	};
}
