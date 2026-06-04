#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_30B223380C9818C3___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA46F540)
#define CLASS_1_30B223380C9818C3___C__DISPLAYCLASS0_0__TRYTRACKINGNEXTMISSION_B__1_OFFSET UNITYSDK_OFFSET(0xA46F840)

inline static constexpr unsigned int Class_1_30B223380C9818C3___c__DisplayClass0_0_TypeDefinitionIndex = 61869;

class Class_1_30B223380C9818C3___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::UInt32 maxWeight; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryTrackingNextMission_b__1(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__DISPLAYCLASS0_0__TRYTRACKINGNEXTMISSION_B__1_OFFSET))(this, a1);
	}
};
