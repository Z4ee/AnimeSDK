#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_2.h"
#include "unitysdk/System/Object.h"

class Class_1_A3A2B28DB41BA84A;
class Class_1_FCDE6902B216D9E2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_3_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0xB849CA0)
#define CLASS_1_3E26D5D72F19C4DB_3_METHOD_1_DDD01EA0C1E2DD26_OFFSET UNITYSDK_OFFSET(0xB849DC0)
#define CLASS_1_3E26D5D72F19C4DB_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB849BE0)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_3_TypeDefinitionIndex = 62813;

class Class_1_3E26D5D72F19C4DB_3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_276321B6B122C69C_2, ::Class_1_A3A2B28DB41BA84A*>* HOIIJPHKMNK; // 0x10
	::Class_1_FCDE6902B216D9E2* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_FCDE6902B216D9E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCDE6902B216D9E2*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_3__CTOR_OFFSET))(this, a1);
	}

	::Class_1_A3A2B28DB41BA84A* Method_1_4D5BEDC75B4151A4(::Struct_2_276321B6B122C69C_2& a1)
	{
		return ((::Class_1_A3A2B28DB41BA84A*(*)(::PVOID, ::Struct_2_276321B6B122C69C_2&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_3_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}

	::Class_1_A3A2B28DB41BA84A* Method_1_DDD01EA0C1E2DD26(::Struct_2_276321B6B122C69C_2& a1)
	{
		return ((::Class_1_A3A2B28DB41BA84A*(*)(::PVOID, ::Struct_2_276321B6B122C69C_2&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_3_METHOD_1_DDD01EA0C1E2DD26_OFFSET))(this, a1);
	}
};
