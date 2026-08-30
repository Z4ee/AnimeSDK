#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_8DF49B21C847EEAB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AA11B40)
#define CLASS_1_8DF49B21C847EEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA11BA0)

inline static constexpr unsigned int Class_1_8DF49B21C847EEAB_TypeDefinitionIndex = 40994;

class Class_1_8DF49B21C847EEAB : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* NJJHNLLAMCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF49B21C847EEAB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF49B21C847EEAB_CLEAR_OFFSET))(this);
	}
};
