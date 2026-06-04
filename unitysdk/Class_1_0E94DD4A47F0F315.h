#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0E94DD4A47F0F315__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F6260)

inline static constexpr unsigned int Class_1_0E94DD4A47F0F315_TypeDefinitionIndex = 53723;

class Class_1_0E94DD4A47F0F315 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::RPG::GameCore::TriggerExitReason Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E94DD4A47F0F315__CTOR_OFFSET))(this);
	}
};
