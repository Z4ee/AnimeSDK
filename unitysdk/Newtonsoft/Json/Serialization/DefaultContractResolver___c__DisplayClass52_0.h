#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS52_0__CREATEDICTIONARYCONTRACT_B__0_OFFSET UNITYSDK_OFFSET(0x1D9C7770)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C4C80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass52_0_TypeDefinitionIndex = 7104;

	class DefaultContractResolver___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::NamingStrategy* namingStrategy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::String* _CreateDictionaryContract_b__0(::System::String* s)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS52_0__CREATEDICTIONARYCONTRACT_B__0_OFFSET))(this, s);
		}
	};
}
