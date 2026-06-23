#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED7240)
#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED7280)
#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__PROPERTYVALUES_B__22_0_OFFSET UNITYSDK_OFFSET(0x1DED7290)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject___c_TypeDefinitionIndex = 7174;

	class JObject___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>**)Il2CppClass::FromTypeDefinitionIndex(JObject___c_TypeDefinitionIndex)->GetStaticField(0x5E10);
		}
		static ::Newtonsoft::Json::Linq::JObject___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JObject___c**)Il2CppClass::FromTypeDefinitionIndex(JObject___c_TypeDefinitionIndex)->GetStaticField(0x5E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* _PropertyValues_b__22_0(::Newtonsoft::Json::Linq::JProperty* p)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::Linq::JProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__PROPERTYVALUES_B__22_0_OFFSET))(this, p);
		}
	};
}
