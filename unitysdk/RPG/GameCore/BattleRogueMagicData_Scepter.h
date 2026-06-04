#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_SCEPTER_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xCD38120)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_SCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD38560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueMagicData_Scepter_TypeDefinitionIndex = 52579;

	class BattleRogueMagicData_Scepter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleRogueMagicData_MagicUnit*>* MagicUnitList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* SlotCountMap; // 0x18
		::System::UInt32 Level; // 0x20
		::System::UInt32 ScepterID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_SCEPTER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueMagicData_Scepter* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData_Scepter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_SCEPTER_DEEPCLONE_OFFSET))(this);
		}
	};
}
