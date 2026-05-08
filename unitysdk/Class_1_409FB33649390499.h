#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_733608EBFF422EB8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_409FB33649390499_METHOD_1_571A2AC31F86C30A_OFFSET UNITYSDK_OFFSET(0x1280AC50)
#define CLASS_1_409FB33649390499_METHOD_1_CA3471C3127DF8C9_OFFSET UNITYSDK_OFFSET(0x1280AA70)
#define CLASS_1_409FB33649390499_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x1280B750)
#define CLASS_1_409FB33649390499__CCTOR_OFFSET UNITYSDK_OFFSET(0x1280A9D0)

inline static constexpr unsigned int Class_1_409FB33649390499_TypeDefinitionIndex = 51970;

class Class_1_409FB33649390499 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_733608EBFF422EB8*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_733608EBFF422EB8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_409FB33649390499_TypeDefinitionIndex)->GetStaticField(0x39970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_409FB33649390499__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CA3471C3127DF8C9(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_409FB33649390499_METHOD_1_CA3471C3127DF8C9_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_733608EBFF422EB8* Method_1_571A2AC31F86C30A(::System::Int32 a1)
	{
		return ((::Class_1_733608EBFF422EB8*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_409FB33649390499_METHOD_1_571A2AC31F86C30A_OFFSET))(a1);
	}

	static ::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_409FB33649390499_METHOD_1_DC715239B8B98D9C_OFFSET))();
	}
};
