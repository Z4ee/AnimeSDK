#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_1_43BD383C98B4C0C5_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7A7850D3F76D630A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B715890)

inline static constexpr unsigned int Class_3_7A7850D3F76D630A_TypeDefinitionIndex = 88548;

class Class_3_7A7850D3F76D630A : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_6; // 0x10
	::Class_1_43BD383C98B4C0C5_7* Field_3_7; // 0x18
	::System::UInt32 Field_3_0; // 0x20
	::System::UInt32 Field_3_1; // 0x24
	::System::UInt32 Field_3_2; // 0x28
	::System::UInt32 Field_3_5; // 0x2C
	::System::UInt32 Field_3_3; // 0x30
	::System::UInt32 Field_3_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A7850D3F76D630A__CTOR_OFFSET))(this);
	}
};
