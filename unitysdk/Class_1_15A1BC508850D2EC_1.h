#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_15A1BC508850D2EC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15533DC0)

inline static constexpr unsigned int Class_1_15A1BC508850D2EC_1_TypeDefinitionIndex = 80740;

class Class_1_15A1BC508850D2EC_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EKGMCMHHNMD; // 0x10
	::System::Int32 KPAHFGEFKEB; // 0x18
	::System::UInt32 PBNOGPCPFJM; // 0x1C
	::System::UInt32 DLOOMDHHNGC; // 0x20
	::System::UInt32 ACCJKGEKHKP; // 0x24
	::System::UInt32 GBJLLAJJEOL; // 0x28
	::System::UInt32 AAGKEBFHLMC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A1BC508850D2EC_1__CTOR_OFFSET))(this);
	}
};
