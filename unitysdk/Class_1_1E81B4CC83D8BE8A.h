#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_129;

#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x1E39A3C0)
#define CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET UNITYSDK_OFFSET(0x1E39A160)
#define CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39A130)

inline static constexpr unsigned int Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex = 34541;

class Class_1_1E81B4CC83D8BE8A : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_1()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x28E40);
	}
	static ::Class_0_16E4307DCC419505_129** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_129**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E81B4CC83D8BE8A_TypeDefinitionIndex)->GetStaticField(0x28E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_129* Method_1_E34BFB774E2D1CD4()
	{
		return ((::Class_0_16E4307DCC419505_129*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_E34BFB774E2D1CD4_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_129* Method_1_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_129*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E81B4CC83D8BE8A_METHOD_1_0DCA45EDA639F38E_OFFSET))();
	}
};
