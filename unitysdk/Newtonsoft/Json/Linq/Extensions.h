#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { template <typename T> class IJEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1DF6D9B0)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DF6D6F0)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_1_OFFSET UNITYSDK_OFFSET(0x1DF6D9F0)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x1DF6D940)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 7158;

	class Extensions : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>* source)
		{
			return ((::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*(*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_PROPERTIES_OFFSET))(source);
		}

		static ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source, ::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(source, key);
		}

		static ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values_1(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source)
		{
			return ((::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_1_OFFSET))(source);
		}

		static ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AsJEnumerable(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source)
		{
			return ((::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET))(source);
		}
	};
}
