#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DC65669A05C00A3_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xBAAE8F0)
#define CLASS_1_0DC65669A05C00A3_METHOD_1_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0xBAAE7B0)
#define CLASS_1_0DC65669A05C00A3__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAAEBC0)

inline static constexpr unsigned int Class_1_0DC65669A05C00A3_TypeDefinitionIndex = 62080;

class Class_1_0DC65669A05C00A3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC65669A05C00A3_TypeDefinitionIndex)->GetStaticField(0x6A580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E52C357E96F7A058(::Class_0_16E4307DCC419505_836* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_836*))((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3_METHOD_1_E52C357E96F7A058_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3_METHOD_1_DD784213055292FB_OFFSET))();
	}
};
