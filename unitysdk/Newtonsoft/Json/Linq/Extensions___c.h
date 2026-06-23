#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E870B10)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E870B50)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__PROPERTIES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E870B60)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions___c_TypeDefinitionIndex = 7163;

	class Extensions___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::Extensions___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c_TypeDefinitionIndex)->GetStaticField(0x60B0);
		}
		static ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c_TypeDefinitionIndex)->GetStaticField(0x60B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* _Properties_b__4_0(::Newtonsoft::Json::Linq::JObject* d)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*(*)(::PVOID, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__PROPERTIES_B__4_0_OFFSET))(this, d);
		}
	};
}
