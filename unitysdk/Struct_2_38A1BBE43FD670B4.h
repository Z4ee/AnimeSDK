#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5CFCC37B3A5F59B3.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_38A1BBE43FD670B4__CTOR_OFFSET UNITYSDK_OFFSET(0x793840)

inline static constexpr unsigned int Struct_2_38A1BBE43FD670B4_TypeDefinitionIndex = 52130;

struct alignas(8) Struct_2_38A1BBE43FD670B4
{
	::System::String* Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>* Field_2_5; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a3, ::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Collections::Generic::List_1<::Struct_2_5CFCC37B3A5F59B3>*))((::PBYTE)hIl2Cpp + STRUCT_2_38A1BBE43FD670B4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
