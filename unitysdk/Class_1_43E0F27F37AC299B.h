#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43E0F27F37AC299B_METHOD_1_150EDEB39C28355E_OFFSET UNITYSDK_OFFSET(0x165C83D0)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_1_OFFSET UNITYSDK_OFFSET(0x165C7DE0)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_OFFSET UNITYSDK_OFFSET(0x165C7D30)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_6062EF00D2D20445_OFFSET UNITYSDK_OFFSET(0x165C8B70)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_AC2D03DF11D7B7DD_OFFSET UNITYSDK_OFFSET(0x165C8AF0)
#define CLASS_1_43E0F27F37AC299B_METHOD_1_F8C5E2FB7505A040_OFFSET UNITYSDK_OFFSET(0x165C7ED0)
#define CLASS_1_43E0F27F37AC299B__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C7C90)

inline static constexpr unsigned int Class_1_43E0F27F37AC299B_TypeDefinitionIndex = 78884;

class Class_1_43E0F27F37AC299B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43E0F27F37AC299B_TypeDefinitionIndex)->GetStaticField(0x48070);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B__CCTOR_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_3054AB73969FAF05(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_3054AB73969FAF05_1(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_3054AB73969FAF05_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C5E2FB7505A040(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_F8C5E2FB7505A040_OFFSET))(a1);
	}

	static ::System::Void Method_1_150EDEB39C28355E(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_150EDEB39C28355E_OFFSET))(a1);
	}

	static ::System::Void Method_1_6062EF00D2D20445(::System::String* a1, ::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_6062EF00D2D20445_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AC2D03DF11D7B7DD(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 a1)
	{
		return ((::System::Void(*)(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14))((::PBYTE)hIl2Cpp + CLASS_1_43E0F27F37AC299B_METHOD_1_AC2D03DF11D7B7DD_OFFSET))(a1);
	}
};
