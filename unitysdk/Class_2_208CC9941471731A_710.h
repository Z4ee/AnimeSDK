#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_173.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_599.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_208CC9941471731A_710_METHOD_2_F1E90700AD6C8212_OFFSET UNITYSDK_OFFSET(0x14F728A0)
#define CLASS_2_208CC9941471731A_710__CTOR_OFFSET UNITYSDK_OFFSET(0x14F72890)

inline static constexpr unsigned int Class_2_208CC9941471731A_710_TypeDefinitionIndex = 16426;

class Class_2_208CC9941471731A_710 : public ::Class_1_5DA2E7556103D5A3_173
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_599 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_599, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_710__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_F1E90700AD6C8212()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_710_METHOD_2_F1E90700AD6C8212_OFFSET))(this);
	}
};
