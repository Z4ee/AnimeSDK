#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E7C90)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS43_0__ISMETHODOVERRIDDEN_B__0_OFFSET UNITYSDK_OFFSET(0x1F6E7CA0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionUtils___c__DisplayClass43_0_TypeDefinitionIndex = 7086;

	class ReflectionUtils___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::String* method; // 0x10
		::System::Type* methodDeclaringType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsMethodOverridden_b__0(::System::Reflection::MethodInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONUTILS___C__DISPLAYCLASS43_0__ISMETHODOVERRIDDEN_B__0_OFFSET))(this, info);
		}
	};
}
