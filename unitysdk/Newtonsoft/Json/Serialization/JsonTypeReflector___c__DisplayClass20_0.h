#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DEBB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS20_0__GETCREATOR_B__0_OFFSET UNITYSDK_OFFSET(0x1D9DEBC0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector___c__DisplayClass20_0_TypeDefinitionIndex = 7146;

	class JsonTypeReflector___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Object*>* defaultConstructor; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetCreator_b__0(::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__DISPLAYCLASS20_0__GETCREATOR_B__0_OFFSET))(this, parameters);
		}
	};
}
