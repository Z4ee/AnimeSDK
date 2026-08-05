#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4544004F26734BD_87.h"
#include "unitysdk/Enum_3_7177740ACDCD76B5.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_300.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_24D50BEA748F8D4C_1_METHOD_2_D573DAE38FF5282B_OFFSET UNITYSDK_OFFSET(0x13BE2000)
#define CLASS_2_24D50BEA748F8D4C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE1E60)

inline static constexpr unsigned int Class_2_24D50BEA748F8D4C_1_TypeDefinitionIndex = 16893;

class Class_2_24D50BEA748F8D4C_1 : public ::Class_1_C4544004F26734BD_87
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_300 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_300, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_24D50BEA748F8D4C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D573DAE38FF5282B(::Enum_3_7177740ACDCD76B5 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_7177740ACDCD76B5))((::PBYTE)hIl2Cpp + CLASS_2_24D50BEA748F8D4C_1_METHOD_2_D573DAE38FF5282B_OFFSET))(this, a1);
	}
};
