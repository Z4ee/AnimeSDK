#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_1__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x1E2FA8D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FA8C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionObject___c__DisplayClass13_1_TypeDefinitionIndex = 7077;

	class ReflectionObject___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Object* _Create_b__1(::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_1__CREATE_B__1_OFFSET))(this, target);
		}
	};
}
