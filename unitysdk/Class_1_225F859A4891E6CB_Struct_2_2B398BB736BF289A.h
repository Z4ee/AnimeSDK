#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_225F859A4891E6CB_Struct_2_5E4EA80940D75DAA.h"
#include "unitysdk/Class_1_225F859A4891E6CB_Struct_2_668FCC16C4E6026D.h"
#include "unitysdk/Class_1_225F859A4891E6CB_Struct_2_E3CB1F13E62545A6.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define CLASS_1_225F859A4891E6CB_STRUCT_2_2B398BB736BF289A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3B197F0)

inline static constexpr unsigned int Class_1_225F859A4891E6CB_Struct_2_2B398BB736BF289A_TypeDefinitionIndex = 47590;

struct alignas(8) Class_1_225F859A4891E6CB_Struct_2_2B398BB736BF289A
{
	::Unity::Collections::NativeArray_1<::Class_1_225F859A4891E6CB_Struct_2_E3CB1F13E62545A6> JOMPKBLKKKH; // 0x10
	::Unity::Collections::NativeArray_1<::Class_1_225F859A4891E6CB_Struct_2_668FCC16C4E6026D> LFJIKJGMAAK; // 0x20
	::Unity::Collections::NativeArray_1<::Class_1_225F859A4891E6CB_Struct_2_5E4EA80940D75DAA> FKAFLBNBCBG; // 0x30

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_225F859A4891E6CB_STRUCT_2_2B398BB736BF289A_EXECUTE_OFFSET))(this, a1);
	}
};
