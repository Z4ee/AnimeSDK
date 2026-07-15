#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueModule; }

#define CLASS_3_95EDA397421D9517___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADB1C0)
#define CLASS_3_95EDA397421D9517___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x17ADB1D0)

inline static constexpr unsigned int Class_3_95EDA397421D9517___c__DisplayClass1_0_TypeDefinitionIndex = 56168;

class Class_3_95EDA397421D9517___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::Client::RogueModule* rogueModule; // 0x10
	::System::UInt32 nextRogueSiteID; // 0x18
	::System::UInt32 nextRogueRoomID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95EDA397421D9517___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_95EDA397421D9517___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}
};
