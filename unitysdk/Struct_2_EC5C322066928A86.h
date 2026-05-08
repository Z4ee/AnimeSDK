#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_EC5C322066928A86_METHOD_2_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0x753C00)
#define STRUCT_2_EC5C322066928A86_METHOD_2_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x753D10)
#define STRUCT_2_EC5C322066928A86_METHOD_2_E3224D4A48D53F34_OFFSET UNITYSDK_OFFSET(0x753C10)
#define STRUCT_2_EC5C322066928A86__CTOR_OFFSET UNITYSDK_OFFSET(0x753BC0)

inline static constexpr unsigned int Struct_2_EC5C322066928A86_TypeDefinitionIndex = 50125;

struct alignas(8) Struct_2_EC5C322066928A86
{
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::Struct_2_97F90E6FB4F6D559 Field_2_3; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_EC5C322066928A86__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EC5C322066928A86_METHOD_2_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3224D4A48D53F34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EC5C322066928A86_METHOD_2_E3224D4A48D53F34_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EC5C322066928A86_METHOD_2_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}
};
