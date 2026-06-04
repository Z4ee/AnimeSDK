#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_387;
class Class_0_16E4307DCC419505_394;
class Class_0_16E4307DCC419505_395;
class Class_0_16E4307DCC419505_396;
class Class_1_3E26D5D72F19C4DB_2;
class Class_1_DBE82A6B0A6E1344;

#define CLASS_1_DD256562AA66A298_METHOD_1_D061F1A840A4F759_OFFSET UNITYSDK_OFFSET(0xA883AF0)
#define CLASS_1_DD256562AA66A298__CTOR_OFFSET UNITYSDK_OFFSET(0xA883A30)

inline static constexpr unsigned int Class_1_DD256562AA66A298_TypeDefinitionIndex = 58587;

class Class_1_DD256562AA66A298 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_394* Field_1_0; // 0x10
	::Class_1_3E26D5D72F19C4DB_2* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_396* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_3E26D5D72F19C4DB_2* a1, ::Class_0_16E4307DCC419505_396* a2, ::Class_0_16E4307DCC419505_394* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E26D5D72F19C4DB_2*, ::Class_0_16E4307DCC419505_396*, ::Class_0_16E4307DCC419505_394*))((::PBYTE)hIl2Cpp + CLASS_1_DD256562AA66A298__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DBE82A6B0A6E1344* Method_1_D061F1A840A4F759(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_395* a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::Class_0_16E4307DCC419505_387*>* a4)
	{
		return ((::Class_1_DBE82A6B0A6E1344*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_395*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::Class_0_16E4307DCC419505_387*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD256562AA66A298_METHOD_1_D061F1A840A4F759_OFFSET))(this, a1, a2, a3, a4);
	}
};
