#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA26E09C45C7F5B6;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }

#define CLASS_1_369F14583649E5FC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB4A240)
#define CLASS_1_369F14583649E5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4A2C0)

inline static constexpr unsigned int Class_1_369F14583649E5FC_TypeDefinitionIndex = 43311;

class Class_1_369F14583649E5FC : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* EABKOHGCHFP; // 0x10
	::Class_1_EA26E09C45C7F5B6* CNLHCKELLBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_369F14583649E5FC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_369F14583649E5FC_CLEAR_OFFSET))(this);
	}
};
