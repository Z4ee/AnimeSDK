#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BAF34E22336FA194__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FC0C0)

inline static constexpr unsigned int Class_1_BAF34E22336FA194_TypeDefinitionIndex = 50923;

class Class_1_BAF34E22336FA194 : public ::System::Object
{
public:
	::RPG::GameCore::FeverTimePeriodType Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::RPG::GameCore::FixPoint Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF34E22336FA194__CTOR_OFFSET))(this);
	}
};
