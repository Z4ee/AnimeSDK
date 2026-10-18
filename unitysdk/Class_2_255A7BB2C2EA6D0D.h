#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A66EF8194C962E2.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_255A7BB2C2EA6D0D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C870540)
#define CLASS_2_255A7BB2C2EA6D0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C870610)

inline static constexpr unsigned int Class_2_255A7BB2C2EA6D0D_TypeDefinitionIndex = 43313;

class Class_2_255A7BB2C2EA6D0D : public ::Class_1_3A66EF8194C962E2
{
public:
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::TimeScaleReason>* BEJCJLENKBN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_255A7BB2C2EA6D0D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_255A7BB2C2EA6D0D_CLEAR_OFFSET))(this);
	}
};
