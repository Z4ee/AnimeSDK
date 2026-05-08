#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_7.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9E38AB9DFDFF84FB__CTOR_OFFSET UNITYSDK_OFFSET(0x13F4B860)

inline static constexpr unsigned int Class_1_9E38AB9DFDFF84FB_TypeDefinitionIndex = 46438;

class Class_1_9E38AB9DFDFF84FB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::Enum_3_DB663931210BBC27_7 Field_1_4; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E38AB9DFDFF84FB__CTOR_OFFSET))(this);
	}
};
