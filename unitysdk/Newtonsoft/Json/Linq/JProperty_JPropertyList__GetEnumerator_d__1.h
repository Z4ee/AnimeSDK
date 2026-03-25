#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JProperty_JPropertyList; }
namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1645F0E0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1645F140)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1645F1A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1645F150)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1645F0D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1645EF30)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_JPropertyList__GetEnumerator_d__1_TypeDefinitionIndex = 8391;

	class JProperty_JPropertyList__GetEnumerator_d__1 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x10
		::Newtonsoft::Json::Linq::JProperty_JPropertyList* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_MOVENEXT_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_JPROPERTYLIST__GETENUMERATOR_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
