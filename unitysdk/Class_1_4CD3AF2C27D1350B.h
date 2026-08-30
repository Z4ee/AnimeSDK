#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4CD3AF2C27D1350B_METHOD_1_F83BC88A90602454_OFFSET UNITYSDK_OFFSET(0x18E33CF0)

inline static constexpr unsigned int Class_1_4CD3AF2C27D1350B_TypeDefinitionIndex = 79739;

class Class_1_4CD3AF2C27D1350B : public ::System::Object
{
public:
	static ::RPG::GameCore::FateRinHouguOwnerType Method_1_F83BC88A90602454(::RPG::GameCore::FateRinSwitchDayTalker a1)
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::RPG::GameCore::FateRinSwitchDayTalker))((::PBYTE)hIl2Cpp + CLASS_1_4CD3AF2C27D1350B_METHOD_1_F83BC88A90602454_OFFSET))(a1);
	}
};
