#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_15A1BC508850D2EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1492A0)

inline static constexpr unsigned int Class_1_15A1BC508850D2EC_TypeDefinitionIndex = 35767;

class Class_1_15A1BC508850D2EC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PCIFMEDMLEF; // 0x10
	::System::UInt32 LLHMOFGFFNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1BC508850D2EC__CTOR_OFFSET))(this);
	}
};
