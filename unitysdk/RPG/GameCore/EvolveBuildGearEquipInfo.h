#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveGearConfig; }

#define RPG_GAMECORE_EVOLVEBUILDGEAREQUIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCDD5100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearEquipInfo_TypeDefinitionIndex = 52346;

	class EvolveBuildGearEquipInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveGearConfig* GearConfig; // 0x10
		::System::UInt32 MaxLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEAREQUIPINFO__CTOR_OFFSET))(this);
		}
	};
}
