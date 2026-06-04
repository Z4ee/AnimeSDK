#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PSOWARMUPDONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB069C00)

inline static constexpr unsigned int PSOWarmupDoneInfo_TypeDefinitionIndex = 44715;

class PSOWarmupDoneInfo : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::WarmupQualitySet>* qualities; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PSOWARMUPDONEINFO__CTOR_OFFSET))(this);
	}
};
