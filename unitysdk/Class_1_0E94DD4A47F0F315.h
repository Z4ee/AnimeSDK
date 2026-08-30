#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0E94DD4A47F0F315__CTOR_OFFSET UNITYSDK_OFFSET(0xF40F660)

inline static constexpr unsigned int Class_1_0E94DD4A47F0F315_TypeDefinitionIndex = 57666;

class Class_1_0E94DD4A47F0F315 : public ::System::Object
{
public:
	::RPG::GameCore::TriggerExitReason JJAHMMJGFEB; // 0x10
	::System::Boolean ONGEKMBGEED; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E94DD4A47F0F315__CTOR_OFFSET))(this);
	}
};
