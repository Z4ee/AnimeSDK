#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_8DF49B21C847EEAB_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9F71D0)
#define CLASS_1_8DF49B21C847EEAB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F7230)

inline static constexpr unsigned int Class_1_8DF49B21C847EEAB_1_TypeDefinitionIndex = 41004;

class Class_1_8DF49B21C847EEAB_1 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* LIALLJHDJHM; // 0x10
	::System::UInt32 GACEMBBAGMP; // 0x18
	::System::UInt32 AOCLHNKNJHM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF49B21C847EEAB_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF49B21C847EEAB_1_CLEAR_OFFSET))(this);
	}
};
