#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_16.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_6.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_58E84453153F69B7_CLASS_1_D4AB49713D0049BE__CTOR_OFFSET UNITYSDK_OFFSET(0x155B6070)

inline static constexpr unsigned int Class_2_58E84453153F69B7_Class_1_D4AB49713D0049BE_TypeDefinitionIndex = 51190;

class Class_2_58E84453153F69B7_Class_1_D4AB49713D0049BE : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_4C8453486C91E3A1_6>* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::Enum_3_DB663931210BBC27_16 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E84453153F69B7_CLASS_1_D4AB49713D0049BE__CTOR_OFFSET))(this);
	}
};
