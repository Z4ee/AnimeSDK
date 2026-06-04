#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7F4A0)

inline static constexpr unsigned int Class_1_25EF4B52BCDD4CC8_TypeDefinitionIndex = 38825;

class Class_1_25EF4B52BCDD4CC8 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::RestaurantFacilityType Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25EF4B52BCDD4CC8__CTOR_OFFSET))(this);
	}
};
