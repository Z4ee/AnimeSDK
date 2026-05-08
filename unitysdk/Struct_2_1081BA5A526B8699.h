#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/Struct_2_BBD1842F08605895.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_1081BA5A526B8699__CTOR_OFFSET UNITYSDK_OFFSET(0x7E32F0)

inline static constexpr unsigned int Struct_2_1081BA5A526B8699_TypeDefinitionIndex = 75986;

struct alignas(8) Struct_2_1081BA5A526B8699
{
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_8; // 0x10
	::System::String* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_13; // 0x20
	::Struct_2_BBD1842F08605895 Field_2_6; // 0x28
	::System::Single Field_2_12; // 0x30
	::System::Int32 Field_2_2; // 0x34
	::System::UInt32 Field_2_5; // 0x38
	::System::Int32 Field_2_3; // 0x3C
	::System::Int32 Field_2_4; // 0x40
	::System::Boolean Field_2_0; // 0x44
	::System::Boolean Field_2_9; // 0x45
	::System::Boolean Field_2_10; // 0x46
	::System::Boolean Field_2_1; // 0x47
	::System::Int32 Field_2_11; // 0x48

	::System::Void _ctor(::Struct_2_BBD1842F08605895 a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::UInt32 a7, ::System::Boolean a8, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a14)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BBD1842F08605895, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*))((::PBYTE)hIl2Cpp + STRUCT_2_1081BA5A526B8699__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}
};
