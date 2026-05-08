#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_294.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_283.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_208CC9941471731A_989_METHOD_2_F1E90700AD6C8212_OFFSET UNITYSDK_OFFSET(0x15FDE4D0)
#define CLASS_2_208CC9941471731A_989__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDE4C0)

inline static constexpr unsigned int Class_2_208CC9941471731A_989_TypeDefinitionIndex = 16785;

class Class_2_208CC9941471731A_989 : public ::Class_1_5DA2E7556103D5A3_294
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_283 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_283, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_989__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_F1E90700AD6C8212()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_989_METHOD_2_F1E90700AD6C8212_OFFSET))(this);
	}
};
