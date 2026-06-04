#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188389B0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188389F0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject___c_TypeDefinitionIndex = 9426;

	class JObject___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::JObject___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JObject___c**)Il2CppClass::FromTypeDefinitionIndex(JObject___c_TypeDefinitionIndex)->GetStaticField(0x2E890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET))(this);
		}
	};
}
