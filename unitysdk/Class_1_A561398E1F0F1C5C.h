#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A561398E1F0F1C5C_METHOD_1_6EF40F711F228FEA_OFFSET UNITYSDK_OFFSET(0x10921900)
#define CLASS_1_A561398E1F0F1C5C_METHOD_1_CDA6DB42A64AE3D3_OFFSET UNITYSDK_OFFSET(0x10921510)
#define CLASS_1_A561398E1F0F1C5C_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x10921720)
#define CLASS_1_A561398E1F0F1C5C__CTOR_OFFSET UNITYSDK_OFFSET(0x10921500)

inline static constexpr unsigned int Class_1_A561398E1F0F1C5C_TypeDefinitionIndex = 64041;

class Class_1_A561398E1F0F1C5C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561398E1F0F1C5C__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_CDA6DB42A64AE3D3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A561398E1F0F1C5C_METHOD_1_CDA6DB42A64AE3D3_OFFSET))(a1);
	}

	static ::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A561398E1F0F1C5C_METHOD_1_DDA8A2337932DF10_OFFSET))();
	}

	static ::System::Void Method_1_6EF40F711F228FEA(::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A561398E1F0F1C5C_METHOD_1_6EF40F711F228FEA_OFFSET))(a1, a2, a3);
	}
};
