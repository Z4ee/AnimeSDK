#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488_Enum_3_D20432C21784E499.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_ED10DD1112564A47_METHOD_1_89729C8B94F4F585_OFFSET UNITYSDK_OFFSET(0x1F62B370)
#define CLASS_1_ED10DD1112564A47_METHOD_1_D13F36EFC545E6F8_OFFSET UNITYSDK_OFFSET(0x1F62B460)
#define CLASS_1_ED10DD1112564A47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F62B2E0)

inline static constexpr unsigned int Class_1_ED10DD1112564A47_TypeDefinitionIndex = 8143;

class Class_1_ED10DD1112564A47 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED10DD1112564A47_TypeDefinitionIndex)->GetStaticField(0x6E60);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED10DD1112564A47_TypeDefinitionIndex)->GetStaticField(0x37A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED10DD1112564A47__CCTOR_OFFSET))();
	}

	static ::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488* Method_1_89729C8B94F4F585()
	{
		return ((::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED10DD1112564A47_METHOD_1_89729C8B94F4F585_OFFSET))();
	}

	static ::System::Void Method_1_D13F36EFC545E6F8(::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488_Enum_3_D20432C21784E499 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_1_ED10DD1112564A47_Class_1_87B52C01B64BD488_Enum_3_D20432C21784E499, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED10DD1112564A47_METHOD_1_D13F36EFC545E6F8_OFFSET))(a1, a2);
	}
};
