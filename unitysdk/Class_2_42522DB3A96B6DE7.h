#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9F0098D327651E7.h"
#include "unitysdk/Enum_3_96F6662CA3713095_1.h"

class Class_3_126510A8BEABCBD0_22;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_42522DB3A96B6DE7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0B41F0)
#define CLASS_2_42522DB3A96B6DE7__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D0B4260)
#define CLASS_2_42522DB3A96B6DE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B4070)

inline static constexpr unsigned int Class_2_42522DB3A96B6DE7_TypeDefinitionIndex = 91984;

class Class_2_42522DB3A96B6DE7 : public ::Class_1_D9F0098D327651E7
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x68
	::Enum_3_96F6662CA3713095_1 Field_2_0; // 0x70
	::System::Int32 Field_2_7; // 0x74
	::System::UInt64 Field_2_6; // 0x78

	::System::Void _ctor(::Class_3_126510A8BEABCBD0_22* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_126510A8BEABCBD0_22*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_42522DB3A96B6DE7__CTOR_OFFSET))(this, a1, a2);
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
