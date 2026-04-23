#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE9FECC5B78033A2;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }

#define CLASS_1_CFEEE53503BCE29E_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E9DF90)
#define CLASS_1_CFEEE53503BCE29E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9DFF0)

inline static constexpr unsigned int Class_1_CFEEE53503BCE29E_TypeDefinitionIndex = 39136;

class Class_1_CFEEE53503BCE29E : public ::System::Object
{
public:
	::Class_1_DE9FECC5B78033A2* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFEEE53503BCE29E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFEEE53503BCE29E_CLEAR_OFFSET))(this);
	}
};
