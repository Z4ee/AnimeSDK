#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CREATEPARAMETERIZEDCONSTRUCTOR_B__0_OFFSET UNITYSDK_OFFSET(0x17ACC6B0)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CREATEPARAMETERIZEDCONSTRUCTOR_B__1_OFFSET UNITYSDK_OFFSET(0x17ACC720)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACC650)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int LateBoundReflectionDelegateFactory___c__DisplayClass3_0_TypeDefinitionIndex = 8385;

	class LateBoundReflectionDelegateFactory___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* c; // 0x10
		::System::Reflection::MethodBase* method; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Object* _CreateParameterizedConstructor_b__0(::Il2CppArray<::System::Object*>* a)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CREATEPARAMETERIZEDCONSTRUCTOR_B__0_OFFSET))(this, a);
		}

		::System::Object* _CreateParameterizedConstructor_b__1(::Il2CppArray<::System::Object*>* a)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY___C__DISPLAYCLASS3_0__CREATEPARAMETERIZEDCONSTRUCTOR_B__1_OFFSET))(this, a);
		}
	};
}
