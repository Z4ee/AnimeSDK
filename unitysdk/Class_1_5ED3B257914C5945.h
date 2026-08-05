#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F43ACD08F0FC8E8_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5ED3B257914C5945_Class_1_BE6152DD412CF87F;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5ED3B257914C5945_METHOD_1_4BD4946264C7D098_OFFSET UNITYSDK_OFFSET(0x166D4710)
#define CLASS_1_5ED3B257914C5945_METHOD_1_95C9909A8CD42633_OFFSET UNITYSDK_OFFSET(0x166D44C0)
#define CLASS_1_5ED3B257914C5945__CCTOR_OFFSET UNITYSDK_OFFSET(0x166D4430)

inline static constexpr unsigned int Class_1_5ED3B257914C5945_TypeDefinitionIndex = 58657;

class Class_1_5ED3B257914C5945 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_5ED3B257914C5945_Class_1_BE6152DD412CF87F*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_5ED3B257914C5945_Class_1_BE6152DD412CF87F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5ED3B257914C5945_TypeDefinitionIndex)->GetStaticField(0x4A170);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5ED3B257914C5945_TypeDefinitionIndex)->GetStaticField(0x11020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5ED3B257914C5945__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_95C9909A8CD42633(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Enum_3_9F43ACD08F0FC8E8_1 a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_9F43ACD08F0FC8E8_1))((::PBYTE)hIl2Cpp + CLASS_1_5ED3B257914C5945_METHOD_1_95C9909A8CD42633_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4BD4946264C7D098(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_5ED3B257914C5945_METHOD_1_4BD4946264C7D098_OFFSET))(a1);
	}
};
