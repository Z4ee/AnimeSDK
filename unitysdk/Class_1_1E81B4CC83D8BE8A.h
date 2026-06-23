#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;

#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x1CF704C0)
#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET UNITYSDK_OFFSET(0x1CF84940)
#define CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF84910)

inline static constexpr unsigned int Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex = 33865;

class Class_1_1E81B4CC83D8BE8A : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_123** StaticGet_Field_1_1()
	{
		return (::Class_0_16E4307DCC419505_123**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x27660);
	}
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x27668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_123* Method_1_E34BFB774E2D1CD4()
	{
		return ((::Class_0_16E4307DCC419505_123*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_123* Method_1_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_123*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET))();
	}
};
