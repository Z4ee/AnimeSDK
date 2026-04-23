#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA308300)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__GETSORTEDGEAREQUIPINFO_B__1_OFFSET UNITYSDK_OFFSET(0xA30B650)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass1_0_TypeDefinitionIndex = 58810;

	class EvolveBuildUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 resonanceGear; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSortedGearEquipInfo_b__1(::RPG::GameCore::EvolveBuildGearEquipInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__GETSORTEDGEAREQUIPINFO_B__1_OFFSET))(this, x);
		}
	};
}
