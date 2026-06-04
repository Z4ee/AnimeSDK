#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D040)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS18_0__GETJSONCONVERTERCREATOR_B__0_OFFSET UNITYSDK_OFFSET(0x1886D470)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector___c__DisplayClass18_0_TypeDefinitionIndex = 9395;

	class JsonTypeReflector___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Type* converterType; // 0x10
		::System::Func_1<::System::Object*>* defaultConstructor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* _GetJsonConverterCreator_b__0(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS18_0__GETJSONCONVERTERCREATOR_B__0_OFFSET))(this, a1);
		}
	};
}
