#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_638D6DC1B968B313__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF0D0)

inline static constexpr unsigned int Class_3_638D6DC1B968B313_TypeDefinitionIndex = 92202;

class Class_3_638D6DC1B968B313 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_6; // 0x10
	::System::UInt32 Field_3_2; // 0x18
	::System::UInt32 Field_3_1; // 0x1C
	::Struct_2_E614D3B245F96744 Field_3_7; // 0x20
	::System::UInt32 Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_638D6DC1B968B313__CTOR_OFFSET))(this);
	}
};
