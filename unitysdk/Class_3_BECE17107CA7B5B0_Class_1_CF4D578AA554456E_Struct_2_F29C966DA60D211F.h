#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define CLASS_3_BECE17107CA7B5B0_CLASS_1_CF4D578AA554456E_STRUCT_2_F29C966DA60D211F_COMPARE_OFFSET UNITYSDK_OFFSET(0x79E700)
#define CLASS_3_BECE17107CA7B5B0_CLASS_1_CF4D578AA554456E_STRUCT_2_F29C966DA60D211F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E286D0)

inline static constexpr unsigned int Class_3_BECE17107CA7B5B0_Class_1_CF4D578AA554456E_Struct_2_F29C966DA60D211F_TypeDefinitionIndex = 68709;

struct alignas(1) Class_3_BECE17107CA7B5B0_Class_1_CF4D578AA554456E_Struct_2_F29C966DA60D211F
{
	static ::System::Collections::Generic::IComparer_1<::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::IComparer_1<::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BECE17107CA7B5B0_Class_1_CF4D578AA554456E_Struct_2_F29C966DA60D211F_TypeDefinitionIndex)->GetStaticField(0x421B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_CLASS_1_CF4D578AA554456E_STRUCT_2_F29C966DA60D211F__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512 a1, ::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512, ::Class_3_BECE17107CA7B5B0_Struct_2_F7E0AF1AB7021512))((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_CLASS_1_CF4D578AA554456E_STRUCT_2_F29C966DA60D211F_COMPARE_OFFSET))(this, a1, a2);
	}
};
