#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/Struct_2_217EE568A28FAED7.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_4C157A846226DD88_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F5DE0)
#define STRUCT_2_4C157A846226DD88_METHOD_2_BEFB37D82D828074_OFFSET UNITYSDK_OFFSET(0x143040C0)

inline static constexpr unsigned int Struct_2_4C157A846226DD88_TypeDefinitionIndex = 44609;

struct alignas(8) Struct_2_4C157A846226DD88
{
	::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>* Field_2_3; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x18
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>*> Field_2_1; // 0x20
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::System::Int32>*> Field_2_0; // 0x30

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4C157A846226DD88_DISPOSE_OFFSET))(this);
	}

	static ::Struct_2_4C157A846226DD88 Method_2_BEFB37D82D828074()
	{
		return ((::Struct_2_4C157A846226DD88(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4C157A846226DD88_METHOD_2_BEFB37D82D828074_OFFSET))();
	}
};
