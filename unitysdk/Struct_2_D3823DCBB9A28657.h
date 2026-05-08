#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_26ABFC6022553B8C.h"
#include "unitysdk/Struct_2_5A3A8DC7AD728F46.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8D15428750286203;
class Class_2_208CC9941471731A_1109;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D3823DCBB9A28657__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4CE0)

inline static constexpr unsigned int Struct_2_D3823DCBB9A28657_TypeDefinitionIndex = 84123;

struct alignas(8) Struct_2_D3823DCBB9A28657
{
	::Enum_3_26ABFC6022553B8C Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x18
	::Struct_2_E614D3B245F96744 Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>* Field_2_3; // 0x30
	::Class_2_208CC9941471731A_1109* Field_2_4; // 0x38
	::Struct_2_5A3A8DC7AD728F46 Field_2_5; // 0x40

	::System::Void _ctor(::Enum_3_26ABFC6022553B8C a1, ::System::UInt64 a2, ::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>* a3, ::Class_2_208CC9941471731A_1109* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_26ABFC6022553B8C, ::System::UInt64, ::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>*, ::Class_2_208CC9941471731A_1109*))((::PBYTE)hIl2Cpp + STRUCT_2_D3823DCBB9A28657__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
