#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_1.h"

class Class_3_AD0E743365511F3C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7E12C5E93E3A6EF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DB130)

inline static constexpr unsigned int Class_3_7E12C5E93E3A6EF2_TypeDefinitionIndex = 83351;

class Class_3_7E12C5E93E3A6EF2 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_1>* Field_3_1; // 0x10
	::Class_3_AD0E743365511F3C* Field_3_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_1>* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E12C5E93E3A6EF2__CTOR_OFFSET))(this);
	}
};
