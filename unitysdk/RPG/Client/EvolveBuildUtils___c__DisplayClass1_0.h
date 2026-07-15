#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D07C00)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__GETSORTEDGEAREQUIPINFO_B__1_OFFSET UNITYSDK_OFFSET(0x17D0A980)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass1_0_TypeDefinitionIndex = 61025;

	class EvolveBuildUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 resonanceGear; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSortedGearEquipInfo_b__1(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS1_0__GETSORTEDGEAREQUIPINFO_B__1_OFFSET))(this, a1);
		}
	};
}
