#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLifeBindingType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_531;

#define CLASS_1_B8CEF7F69BEDEA3B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1850CBF0)
#define CLASS_1_B8CEF7F69BEDEA3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1850CC40)

inline static constexpr unsigned int Class_1_B8CEF7F69BEDEA3B_TypeDefinitionIndex = 54332;

class Class_1_B8CEF7F69BEDEA3B : public ::System::Object
{
public:
	::System::Object* NEEOLLJLEGA; // 0x10
	::Class_0_16E4307DCC419505_531* CHOFPMKEKGG; // 0x18
	::RPG::GameCore::RtLifeBindingType PPPOGKPOPBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEF7F69BEDEA3B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEF7F69BEDEA3B_CLEAR_OFFSET))(this);
	}
};
