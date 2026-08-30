#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54A420)

inline static constexpr unsigned int Class_1_25EF4B52BCDD4CC8_TypeDefinitionIndex = 40507;

class Class_1_25EF4B52BCDD4CC8 : public ::System::Object
{
public:
	::System::UInt32 PHFMCACHFIJ; // 0x10
	::System::UInt32 AAGKEBFHLMC; // 0x14
	::RPG::GameCore::RestaurantFacilityType GMPGDEINODK; // 0x18
	::System::Boolean HFOMODEHDNL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET))(this);
	}
};
