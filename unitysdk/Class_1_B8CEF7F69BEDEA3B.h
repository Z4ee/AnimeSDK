#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLifeBindingType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_496;

#define CLASS_1_B8CEF7F69BEDEA3B_CLEAR_OFFSET UNITYSDK_OFFSET(0x14283F70)
#define CLASS_1_B8CEF7F69BEDEA3B__CTOR_OFFSET UNITYSDK_OFFSET(0x14283FC0)

inline static constexpr unsigned int Class_1_B8CEF7F69BEDEA3B_TypeDefinitionIndex = 51648;

class Class_1_B8CEF7F69BEDEA3B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_496* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18
	::RPG::GameCore::RtLifeBindingType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEF7F69BEDEA3B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEF7F69BEDEA3B_CLEAR_OFFSET))(this);
	}
};
