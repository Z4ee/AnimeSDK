#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_77C1911C23AA7BB5.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E5FBFFEFA32E4931__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA8EA0)

inline static constexpr unsigned int Class_3_E5FBFFEFA32E4931_TypeDefinitionIndex = 35610;

class Class_3_E5FBFFEFA32E4931 : public ::Class_2_77C1911C23AA7BB5
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5FBFFEFA32E4931__CTOR_OFFSET))(this);
	}
};
