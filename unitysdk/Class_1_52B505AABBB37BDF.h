#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5;
namespace System { class String; }

#define CLASS_1_52B505AABBB37BDF_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xAA7DB40)
#define CLASS_1_52B505AABBB37BDF_METHOD_1_63C2871D909E020D_OFFSET UNITYSDK_OFFSET(0xAA7D8D0)
#define CLASS_1_52B505AABBB37BDF_METHOD_1_6FB01BCB339696D0_OFFSET UNITYSDK_OFFSET(0xAA7D3C0)
#define CLASS_1_52B505AABBB37BDF_METHOD_1_EAEF08FF44966C77_OFFSET UNITYSDK_OFFSET(0xAA7D280)
#define CLASS_1_52B505AABBB37BDF__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA7DB80)

inline static constexpr unsigned int Class_1_52B505AABBB37BDF_TypeDefinitionIndex = 63972;

class Class_1_52B505AABBB37BDF : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_Field_1_0()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52B505AABBB37BDF_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EAEF08FF44966C77(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5* a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*, ::System::String*, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_METHOD_1_EAEF08FF44966C77_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_6FB01BCB339696D0(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5* a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*, ::System::String*, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_METHOD_1_6FB01BCB339696D0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_63C2871D909E020D(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5* a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_METHOD_1_63C2871D909E020D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
