#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CA1385D7954B986E__CTOR_OFFSET UNITYSDK_OFFSET(0x680BB0)

inline static constexpr unsigned int Struct_2_CA1385D7954B986E_TypeDefinitionIndex = 59656;

struct alignas(8) Struct_2_CA1385D7954B986E
{
	::System::String* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_CA1385D7954B986E__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
