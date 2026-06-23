#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/Struct_2_BBD1842F08605895.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CA13CD3B8CC65E04__CTOR_OFFSET UNITYSDK_OFFSET(0x82FCF0)

inline static constexpr unsigned int Struct_2_CA13CD3B8CC65E04_TypeDefinitionIndex = 51156;

struct alignas(8) Struct_2_CA13CD3B8CC65E04
{
	::System::String* Field_2_7; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* Field_2_8; // 0x18
	::Struct_2_BBD1842F08605895 Field_2_6; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::Boolean Field_2_10; // 0x2C
	::System::Boolean Field_2_0; // 0x2D
	::System::Boolean Field_2_1; // 0x2E
	::System::Boolean Field_2_9; // 0x2F
	::System::Single Field_2_12; // 0x30
	::System::Int32 Field_2_11; // 0x34
	::System::Int32 Field_2_3; // 0x38
	::System::Int32 Field_2_2; // 0x3C
	::System::UInt32 Field_2_5; // 0x40

	::System::Void _ctor(::Struct_2_BBD1842F08605895 a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::UInt32 a7, ::System::Boolean a8, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BBD1842F08605895, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CA13CD3B8CC65E04__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}
};
