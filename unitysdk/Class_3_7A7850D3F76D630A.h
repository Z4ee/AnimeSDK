#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_1_43BD383C98B4C0C5_10;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7A7850D3F76D630A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B17F0)

inline static constexpr unsigned int Class_3_7A7850D3F76D630A_TypeDefinitionIndex = 91854;

class Class_3_7A7850D3F76D630A : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_10; // 0x10
	::Class_1_43BD383C98B4C0C5_10* Field_3_9; // 0x18
	::System::UInt32 Field_3_7; // 0x20
	::System::UInt32 Field_3_11; // 0x24
	::System::UInt32 Field_3_6; // 0x28
	::System::UInt32 Field_3_4; // 0x2C
	::System::UInt32 Field_3_0; // 0x30
	::System::UInt32 Field_3_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A7850D3F76D630A__CTOR_OFFSET))(this);
	}
};
