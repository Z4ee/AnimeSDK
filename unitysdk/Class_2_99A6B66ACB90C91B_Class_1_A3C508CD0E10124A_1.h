#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_084B51D193715E30.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/Object.h"

class Class_1_25D6C7D8669CEB87;
class Class_3_3B7CFC169AD8410C;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_99A6B66ACB90C91B_CLASS_1_A3C508CD0E10124A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C71990)

inline static constexpr unsigned int Class_2_99A6B66ACB90C91B_Class_1_A3C508CD0E10124A_1_TypeDefinitionIndex = 44480;

class Class_2_99A6B66ACB90C91B_Class_1_A3C508CD0E10124A_1 : public ::System::Object
{
public:
	::System::Func_3<::Struct_2_29439DBE2B63DCF3, ::Struct_2_084B51D193715E30, ::System::Boolean>* Field_1_2; // 0x10
	::Class_3_3B7CFC169AD8410C* Field_1_0; // 0x18
	::Class_1_25D6C7D8669CEB87* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A6B66ACB90C91B_CLASS_1_A3C508CD0E10124A_1__CTOR_OFFSET))(this);
	}
};
