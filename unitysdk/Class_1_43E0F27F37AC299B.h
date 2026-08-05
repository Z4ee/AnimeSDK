#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_1_OFFSET UNITYSDK_OFFSET(0x10A08D70)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_OFFSET UNITYSDK_OFFSET(0x10A08E90)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_4BEFBBCBE4D0C052_OFFSET UNITYSDK_OFFSET(0x10A08690)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_6062EF00D2D20445_OFFSET UNITYSDK_OFFSET(0x10A08E20)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_9F40526C29D472FE_OFFSET UNITYSDK_OFFSET(0x10A08610)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_F8C5E2FB7505A040_OFFSET UNITYSDK_OFFSET(0x10A08F80)
#define CLASS_1_43E0F27F37AC299B__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A08570)

inline static constexpr unsigned int Class_1_43E0F27F37AC299B_TypeDefinitionIndex = 77761;

class Class_1_43E0F27F37AC299B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43E0F27F37AC299B_TypeDefinitionIndex)->GetStaticField(0x466A0);
	}
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9F40526C29D472FE(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_9F40526C29D472FE_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BEFBBCBE4D0C052(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_4BEFBBCBE4D0C052_OFFSET))(a1);
	}

	static ::System::Void Method_1_6062EF00D2D20445(::System::String* a1, ::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_6062EF00D2D20445_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_3054AB73969FAF05(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_3054AB73969FAF05_1(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C5E2FB7505A040(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_10))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_F8C5E2FB7505A040_OFFSET))(a1);
	}
};
