#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9F0098D327651E7.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"

class Class_3_DE5C2CE2978AA8BF_9;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_42522DB3A96B6DE7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF146B0)
#define CLASS_2_42522DB3A96B6DE7__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CF14720)
#define CLASS_2_42522DB3A96B6DE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF14530)

inline static constexpr unsigned int Class_2_42522DB3A96B6DE7_TypeDefinitionIndex = 88365;

class Class_2_42522DB3A96B6DE7 : public ::Class_1_D9F0098D327651E7
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_3; // 0x68
	::System::UInt64 Field_2_2; // 0x70
	::System::Int32 Field_2_1; // 0x78
	::Enum_3_96F6662CA3713095 Field_2_0; // 0x7C

	::System::Void _ctor(::Class_3_DE5C2CE2978AA8BF_9* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DE5C2CE2978AA8BF_9*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_42522DB3A96B6DE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_42522DB3A96B6DE7__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42522DB3A96B6DE7__CTOR_2_OFFSET))(this);
	}
};
