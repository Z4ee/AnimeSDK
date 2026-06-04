#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886D400)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D440)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__GETJSONCONVERTERCREATOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x1886D450)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector___c_TypeDefinitionIndex = 9396;

	class JsonTypeReflector___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Type*>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector___c_TypeDefinitionIndex)->GetStaticField(0x30260);
		}
		static ::Newtonsoft::Json::Serialization::JsonTypeReflector___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Serialization::JsonTypeReflector___c**)Il2CppClass::FromTypeDefinitionIndex(JsonTypeReflector___c_TypeDefinitionIndex)->GetStaticField(0x30268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Type* _GetJsonConverterCreator_b__18_1(::System::Object* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR___C__GETJSONCONVERTERCREATOR_B__18_1_OFFSET))(this, a1);
		}
	};
}
