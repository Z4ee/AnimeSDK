#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_99;
class Class_1_F4303EC47502E9A2;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_3ED9DB6B892E4BCC_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x1A61DDF0)
#define CLASS_1_3ED9DB6B892E4BCC_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x1A61DA00)
#define CLASS_1_3ED9DB6B892E4BCC_METHOD_1_970F83AA36AAD910_OFFSET UNITYSDK_OFFSET(0x1A61DBE0)
#define CLASS_1_3ED9DB6B892E4BCC_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x1A61E310)
#define CLASS_1_3ED9DB6B892E4BCC_METHOD_1_EA563BA8426704FA_OFFSET UNITYSDK_OFFSET(0x1A61DFD0)
#define CLASS_1_3ED9DB6B892E4BCC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A61D970)

inline static constexpr unsigned int Class_1_3ED9DB6B892E4BCC_TypeDefinitionIndex = 33035;

class Class_1_3ED9DB6B892E4BCC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_F4303EC47502E9A2*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_F4303EC47502E9A2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED9DB6B892E4BCC_TypeDefinitionIndex)->GetStaticField(0x26010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_970F83AA36AAD910(::Class_1_F4303EC47502E9A2*& a1)
	{
		return ((::System::Void(*)(::Class_1_F4303EC47502E9A2*&))((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC_METHOD_1_970F83AA36AAD910_OFFSET))(a1);
	}

	static ::System::Void Method_1_2F7E7A0CBFFDFF0D(::Class_1_F4303EC47502E9A2*& a1)
	{
		return ((::System::Void(*)(::Class_1_F4303EC47502E9A2*&))((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EA563BA8426704FA(::Class_0_16E4307DCC419505_99* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_99*))((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC_METHOD_1_EA563BA8426704FA_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C66B07446448FC6(::Class_1_F4303EC47502E9A2*& a1)
	{
		return ((::System::Void(*)(::Class_1_F4303EC47502E9A2*&))((::PBYTE)hIl2Cpp + CLASS_1_3ED9DB6B892E4BCC_METHOD_1_9C66B07446448FC6_OFFSET))(a1);
	}
};
