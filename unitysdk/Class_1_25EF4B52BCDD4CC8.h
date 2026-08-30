#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C75FCF0)

inline static constexpr unsigned int Class_1_25EF4B52BCDD4CC8_TypeDefinitionIndex = 40507;

class Class_1_25EF4B52BCDD4CC8 : public ::System::Object
{
public:
	::System::Boolean HFOMODEHDNL; // 0x10
	::RPG::GameCore::RestaurantFacilityType GMPGDEINODK; // 0x14
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::System::UInt32 AAGKEBFHLMC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET))(this);
	}
};
