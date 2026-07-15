#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_290;
class Class_0_16E4307DCC419505_291;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x1D25E2B0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_68A3022B2D66E354_OFFSET UNITYSDK_OFFSET(0x1D25E4F0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_6F8BA94B398D503E_OFFSET UNITYSDK_OFFSET(0x1D25E4A0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET UNITYSDK_OFFSET(0x1D25E3E0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET UNITYSDK_OFFSET(0x1D25E310)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET UNITYSDK_OFFSET(0x1D25E440)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1D25E250)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET UNITYSDK_OFFSET(0x1D25E370)
#define CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25E120)

inline static constexpr unsigned int Class_1_B6AB0C80672082AB_TypeDefinitionIndex = 41239;

class Class_1_B6AB0C80672082AB : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_290** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_290**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6AB0C80672082AB_TypeDefinitionIndex)->GetStaticField(0x1070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_291* Method_1_B6B23C3F89F7E6D9(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_291* Method_1_D604770791021CCD(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_0_16E4307DCC419505_291* Method_1_7D8266A828D178D6(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA846ED21F952AA5(::Class_0_16E4307DCC419505_291* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_291*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_0_16E4307DCC419505_291*>* Method_1_6F8BA94B398D503E()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_291*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_6F8BA94B398D503E_OFFSET))();
	}

	static ::System::Void Method_1_68A3022B2D66E354(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_291*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_291*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_68A3022B2D66E354_OFFSET))(a1);
	}
};
