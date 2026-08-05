#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_699787DEDB234668;
class Class_3_65DBB37805FEA8D9;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_4052BC8832628EE9_OFFSET UNITYSDK_OFFSET(0x12A0EA10)
#define CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_937F8473216A3162_1_OFFSET UNITYSDK_OFFSET(0x12A0EAE0)
#define CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x12A0EAB0)
#define CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0EA00)

inline static constexpr unsigned int Class_3_65DBB37805FEA8D9_Class_1_829A116068F6E5E5_TypeDefinitionIndex = 83191;

class Class_3_65DBB37805FEA8D9_Class_1_829A116068F6E5E5 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::Class_1_699787DEDB234668* Field_1_1; // 0x20
	::Class_3_65DBB37805FEA8D9* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4052BC8832628EE9(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_4052BC8832628EE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65DBB37805FEA8D9_CLASS_1_829A116068F6E5E5_METHOD_1_937F8473216A3162_1_OFFSET))(this);
	}
};
