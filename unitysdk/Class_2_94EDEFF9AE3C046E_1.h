#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_60.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_211.h"

class Class_0_16E4307DCC419505_7;
class Class_1_F6EFE58E4BDF83D9;
class Class_2_D43F76BF4351F32C_19;
class Class_3_9487B9476CC667C7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_94EDEFF9AE3C046E_1_METHOD_2_2C1D82F19AB0F4A4_OFFSET UNITYSDK_OFFSET(0x1CCE2160)
#define CLASS_2_94EDEFF9AE3C046E_1_METHOD_2_BF0244E3530041DB_OFFSET UNITYSDK_OFFSET(0x1CCE20B0)
#define CLASS_2_94EDEFF9AE3C046E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE1D60)

inline static constexpr unsigned int Class_2_94EDEFF9AE3C046E_1_TypeDefinitionIndex = 88408;

class Class_2_94EDEFF9AE3C046E_1 : public ::Class_1_5DA2E7556103D5A3_60
{
public:
	::System::Collections::Generic::List_1<::Class_1_F6EFE58E4BDF83D9*>* Field_2_0; // 0xD8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_211 a1, ::Class_2_D43F76BF4351F32C_19* a2, ::Class_0_16E4307DCC419505_7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_211, ::Class_2_D43F76BF4351F32C_19*, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_2_BF0244E3530041DB(::Class_3_9487B9476CC667C7* a1)
	{
		return ((::System::Double(*)(::PVOID, ::Class_3_9487B9476CC667C7*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E_1_METHOD_2_BF0244E3530041DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2C1D82F19AB0F4A4(::Class_2_D43F76BF4351F32C_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D43F76BF4351F32C_19*))((::PBYTE)hIl2Cpp + CLASS_2_94EDEFF9AE3C046E_1_METHOD_2_2C1D82F19AB0F4A4_OFFSET))(this, a1);
	}
};
