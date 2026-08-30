#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BAF34E22336FA194__CTOR_OFFSET UNITYSDK_OFFSET(0x179C8170)

inline static constexpr unsigned int Class_1_BAF34E22336FA194_TypeDefinitionIndex = 55435;

class Class_1_BAF34E22336FA194 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint BDEMOIAOHJC; // 0x10
	::RPG::GameCore::FeverTimePeriodType JNCLBMMJOFE; // 0x18
	::RPG::GameCore::FixPoint KKCKMCDGCGK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF34E22336FA194__CTOR_OFFSET))(this);
	}
};
