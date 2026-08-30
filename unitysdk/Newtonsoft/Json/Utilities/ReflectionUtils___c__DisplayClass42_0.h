#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF05770)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__0_OFFSET UNITYSDK_OFFSET(0x1EF05D80)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__1_OFFSET UNITYSDK_OFFSET(0x1EF05EC0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__2_OFFSET UNITYSDK_OFFSET(0x1EF06120)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionUtils___c__DisplayClass42_0_TypeDefinitionIndex = 9623;

	class ReflectionUtils___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Reflection::PropertyInfo* subTypeProperty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChildPrivateProperties_b__0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetChildPrivateProperties_b__1(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetChildPrivateProperties_b__2(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS42_0__GETCHILDPRIVATEPROPERTIES_B__2_OFFSET))(this, a1);
		}
	};
}
