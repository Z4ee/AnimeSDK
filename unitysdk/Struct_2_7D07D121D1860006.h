#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_7D07D121D1860006_METHOD_2_10C207AE0B24C5CE_OFFSET UNITYSDK_OFFSET(0x7FD630)
#define STRUCT_2_7D07D121D1860006_METHOD_2_A8363DA3C54C1FC7_OFFSET UNITYSDK_OFFSET(0x7FD4D0)
#define STRUCT_2_7D07D121D1860006_METHOD_2_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x7FD5C0)
#define STRUCT_2_7D07D121D1860006__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD460)

inline static constexpr unsigned int Struct_2_7D07D121D1860006_TypeDefinitionIndex = 62493;

struct alignas(8) Struct_2_7D07D121D1860006
{
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x1C
	::Struct_2_97F90E6FB4F6D559 Field_2_5; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_7D07D121D1860006__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A8363DA3C54C1FC7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7D07D121D1860006_METHOD_2_A8363DA3C54C1FC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7D07D121D1860006_METHOD_2_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_10C207AE0B24C5CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7D07D121D1860006_METHOD_2_10C207AE0B24C5CE_OFFSET))(this, a1);
	}
};
