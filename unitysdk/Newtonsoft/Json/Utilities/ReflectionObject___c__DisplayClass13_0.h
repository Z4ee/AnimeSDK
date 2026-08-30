#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1EEFE9D0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFDD30)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionObject___c__DisplayClass13_0_TypeDefinitionIndex = 9589;

	class ReflectionObject___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Object*>* ctor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Object* _Create_b__0(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT___C__DISPLAYCLASS13_0__CREATE_B__0_OFFSET))(this, a1);
		}
	};
}
