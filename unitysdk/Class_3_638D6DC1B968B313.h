#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_638D6DC1B968B313__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD21940)

inline static constexpr unsigned int Class_3_638D6DC1B968B313_TypeDefinitionIndex = 87990;

class Class_3_638D6DC1B968B313 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_4; // 0x10
	::System::UInt32 Field_3_1; // 0x18
	::System::UInt32 Field_3_0; // 0x1C
	::System::UInt32 Field_3_2; // 0x20
	::Struct_2_E614D3B245F96744_1 Field_3_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_638D6DC1B968B313__CTOR_OFFSET))(this);
	}
};
