#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_736;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DC65669A05C00A3_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x10518040)
#define CLASS_1_0DC65669A05C00A3_METHOD_1_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x10517F00)
#define CLASS_1_0DC65669A05C00A3__CCTOR_OFFSET UNITYSDK_OFFSET(0x10518310)

inline static constexpr unsigned int Class_1_0DC65669A05C00A3_TypeDefinitionIndex = 54892;

class Class_1_0DC65669A05C00A3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_736*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_736*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC65669A05C00A3_TypeDefinitionIndex)->GetStaticField(0x17A00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E52C357E96F7A058(::Class_0_16E4307DCC419505_736* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_736*))((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3_METHOD_1_E52C357E96F7A058_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC65669A05C00A3_METHOD_1_DD784213055292FB_OFFSET))();
	}
};
