#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E871360)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8713A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__GETCREATOR_B__20_1_OFFSET UNITYSDK_OFFSET(0x1E8713B0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector___c_TypeDefinitionIndex = 7147;

	class JsonTypeReflector___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Type*>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector___c_TypeDefinitionIndex)->GetStaticField(0x60A0);
		}
		static ::Newtonsoft::Json::Serialization::JsonTypeReflector___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Serialization::JsonTypeReflector___c**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector___c_TypeDefinitionIndex)->GetStaticField(0x60A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Type* _GetCreator_b__20_1(::System::Object* param)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__GETCREATOR_B__20_1_OFFSET))(this, param);
		}
	};
}
