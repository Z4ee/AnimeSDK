#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_02EF86795D3EB47B.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Delegate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D1166CDBC8C81352_METHOD_2_FDD23D2499AB1928_OFFSET UNITYSDK_OFFSET(0x190C0B60)

inline static constexpr unsigned int Struct_2_D1166CDBC8C81352_TypeDefinitionIndex = 60901;

struct alignas(8) Struct_2_D1166CDBC8C81352
{
	::Il2CppArray<::Nap::NapECS::QuickList_1<::Struct_2_02EF86795D3EB47B>*>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::Delegate*>* Field_2_2; // 0x20

	static ::Struct_2_D1166CDBC8C81352 Method_2_FDD23D2499AB1928()
	{
		return ((::Struct_2_D1166CDBC8C81352(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D1166CDBC8C81352_METHOD_2_FDD23D2499AB1928_OFFSET))();
	}
};
