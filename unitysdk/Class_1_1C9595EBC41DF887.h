#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1C9595EBC41DF887_Struct_2_88AA0FD3774559B2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1C9595EBC41DF887_METHOD_1_083FBD0B9A8FC42C_OFFSET UNITYSDK_OFFSET(0xCF8E0E0)
#define CLASS_1_1C9595EBC41DF887_METHOD_1_084F46A2F5C54C00_OFFSET UNITYSDK_OFFSET(0xCF8E740)
#define CLASS_1_1C9595EBC41DF887_METHOD_1_7626A278984F5E39_OFFSET UNITYSDK_OFFSET(0xCF8DD70)
#define CLASS_1_1C9595EBC41DF887_METHOD_1_C22763F517A5F59E_OFFSET UNITYSDK_OFFSET(0xCF8E2D0)
#define CLASS_1_1C9595EBC41DF887_METHOD_1_C47FE8990A1CD51C_OFFSET UNITYSDK_OFFSET(0xCF8E870)
#define CLASS_1_1C9595EBC41DF887__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF8E9A0)
#define CLASS_1_1C9595EBC41DF887__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8E990)

inline static constexpr unsigned int Class_1_1C9595EBC41DF887_TypeDefinitionIndex = 49097;

class Class_1_1C9595EBC41DF887 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C9595EBC41DF887_Struct_2_88AA0FD3774559B2>** StaticGet_DEIAMJBMIJC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C9595EBC41DF887_Struct_2_88AA0FD3774559B2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C9595EBC41DF887_TypeDefinitionIndex)->GetStaticField(0x60060);
	}
	static ::System::Int32* StaticGet_BJFDNCIIEJH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C9595EBC41DF887_TypeDefinitionIndex)->GetStaticField(0x13A20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7626A278984F5E39(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887_METHOD_1_7626A278984F5E39_OFFSET))(a1);
	}

	static ::EnviromentSystem::EnviromentProfile* Method_1_084F46A2F5C54C00(::System::String* a1)
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887_METHOD_1_084F46A2F5C54C00_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_357* Method_1_C47FE8990A1CD51C(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887_METHOD_1_C47FE8990A1CD51C_OFFSET))(a1);
	}

	static ::System::Void Method_1_C22763F517A5F59E(::System::String* a1, ::EnviromentSystem::EnviromentProfile* a2)
	{
		return ((::System::Void(*)(::System::String*, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887_METHOD_1_C22763F517A5F59E_OFFSET))(a1, a2);
	}

	static ::EnviromentSystem::EnviromentProfile* Method_1_083FBD0B9A8FC42C(::System::String* a1)
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C9595EBC41DF887_METHOD_1_083FBD0B9A8FC42C_OFFSET))(a1);
	}
};
