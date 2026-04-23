#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_MAGICUNIT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xB5D29A0)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_MAGICUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D2A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueMagicData_MagicUnit_TypeDefinitionIndex = 51906;

	class BattleRogueMagicData_MagicUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CounterMap; // 0x10
		::System::UInt32 Level; // 0x18
		::System::Boolean Locked; // 0x1C
		::System::UInt32 SlotID; // 0x20
		::System::UInt32 MagicUnitID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_MAGICUNIT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueMagicData_MagicUnit* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData_MagicUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_MAGICUNIT_DEEPCLONE_OFFSET))(this);
		}
	};
}
