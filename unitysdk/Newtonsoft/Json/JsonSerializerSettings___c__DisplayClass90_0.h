#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }

#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E469260)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS___C__DISPLAYCLASS90_0__SET_REFERENCERESOLVER_B__0_OFFSET UNITYSDK_OFFSET(0x1E469270)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializerSettings___c__DisplayClass90_0_TypeDefinitionIndex = 7010;

	class JsonSerializerSettings___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::IReferenceResolver* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* _set_ReferenceResolver_b__0()
		{
			return ((::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS___C__DISPLAYCLASS90_0__SET_REFERENCERESOLVER_B__0_OFFSET))(this);
		}
	};
}
