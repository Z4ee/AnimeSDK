#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_61.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_167.h"

class Class_0_16E4307DCC419505_7;
class Class_1_F6EFE58E4BDF83D9;
class Class_2_D43F76BF4351F32C_4;
class Class_3_9487B9476CC667C7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_94EDEFF9AE3C046E_METHOD_2_86953C79667FC2E6_OFFSET UNITYSDK_OFFSET(0x1BF28090)
#define CLASS_2_94EDEFF9AE3C046E_METHOD_2_BF0244E3530041DB_OFFSET UNITYSDK_OFFSET(0x1BF28180)
#define CLASS_2_94EDEFF9AE3C046E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF27D60)

inline static constexpr unsigned int Class_2_94EDEFF9AE3C046E_TypeDefinitionIndex = 87809;

class Class_2_94EDEFF9AE3C046E : public ::Class_1_5DA2E7556103D5A3_61
{
public:
	::System::Collections::Generic::List_1<::Class_1_F6EFE58E4BDF83D9*>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_167 a1, ::Class_2_D43F76BF4351F32C_4* a2, ::Class_0_16E4307DCC419505_7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_167, ::Class_2_D43F76BF4351F32C_4*, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_86953C79667FC2E6(::Class_2_D43F76BF4351F32C_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D43F76BF4351F32C_4*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E_METHOD_2_86953C79667FC2E6_OFFSET))(this, a1);
	}

	::System::Double Method_2_BF0244E3530041DB(::Class_3_9487B9476CC667C7* a1)
	{
		return ((::System::Double(*)(::PVOID, ::Class_3_9487B9476CC667C7*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E_METHOD_2_BF0244E3530041DB_OFFSET))(this, a1);
	}
};
