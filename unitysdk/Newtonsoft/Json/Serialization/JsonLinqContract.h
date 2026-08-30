#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONLINQCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x172DECD0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonLinqContract_TypeDefinitionIndex = 9640;

	class JsonLinqContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONLINQCONTRACT__CTOR_OFFSET))(this, a1);
		}
	};
}
