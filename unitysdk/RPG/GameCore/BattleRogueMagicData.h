#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleRogueMagicData_RoundCount; }
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x12172C70)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12172F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueMagicData_TypeDefinitionIndex = 53781;

	class BattleRogueMagicData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleRogueMagicData_RoundCount* RoundCnt; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleRogueMagicData_Scepter*>* ScepterList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueMagicData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
