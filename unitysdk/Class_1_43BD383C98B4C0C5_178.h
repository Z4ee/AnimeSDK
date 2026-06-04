#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSchedulerState.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_5B228A4605C15E47;
class Class_1_8A6989C352B0F0F0;

#define CLASS_1_43BD383C98B4C0C5_178__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FCB20)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_178_TypeDefinitionIndex = 69032;

class Class_1_43BD383C98B4C0C5_178 : public ::System::Object
{
public:
	::Class_1_5B228A4605C15E47* Field_1_0; // 0x10
	::Class_1_303D5A33D1401D59* Field_1_1; // 0x18
	::Class_1_8A6989C352B0F0F0* Field_1_2; // 0x20
	::RPG::Client::OpenWorld::FadingConsequenceClass Field_1_3; // 0x28
	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Field_1_4; // 0x2C
	::RPG::Client::OpenWorld::FadingPriority Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_7; // 0x35
	::System::Boolean Field_1_8; // 0x36
	::System::Int32 Field_1_9; // 0x38
	::RPG::Client::OpenWorld::FadingPriority Field_1_10; // 0x3C
	::RPG::Client::OpenWorld::FadingLowRejectedReason Field_1_11; // 0x40
	::System::Boolean Field_1_12; // 0x44
	::System::Boolean Field_1_13; // 0x45
	::System::Boolean Field_1_14; // 0x46
	::System::Boolean Field_1_15; // 0x47
	::RPG::Client::OpenWorld::FadingInvalidReason Field_1_16; // 0x48
	::System::Int32 Field_1_17; // 0x4C
	::System::Int32 Field_1_18; // 0x50
	::RPG::Client::OpenWorld::FadingDistanceTier Field_1_19; // 0x54
	::System::Int32 Field_1_20; // 0x58
	::System::Int32 Field_1_21; // 0x5C
	::RPG::Client::OpenWorld::FadingImmediateFinishReason Field_1_22; // 0x60
	::System::Int32 Field_1_23; // 0x64
	::RPG::Client::OpenWorld::FadingPriority Field_1_24; // 0x68
	::RPG::Client::OpenWorld::FadingSchedulerState Field_1_25; // 0x6C
	::RPG::Client::OpenWorld::FadingPriorityModifierFlags Field_1_26; // 0x70
	::System::Int32 Field_1_27; // 0x74
	::System::Int32 Field_1_28; // 0x78
	::System::Boolean Field_1_29; // 0x7C
	::System::Boolean Field_1_30; // 0x7D
	::System::Boolean Field_1_31; // 0x7E
	::System::Boolean Field_1_32; // 0x7F
	::RPG::Client::OpenWorld::FadingSizeTier Field_1_33; // 0x80
	::System::Int32 Field_1_34; // 0x84
	::System::Boolean Field_1_35; // 0x88
	::System::Boolean Field_1_36; // 0x89
	::System::Int32 Field_1_37; // 0x8C
	::System::Int32 Field_1_38; // 0x90
	::System::Int32 Field_1_39; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_178__CTOR_OFFSET))(this);
	}
};
