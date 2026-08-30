#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_GETNEWPVESTAGEIDSNOTSEEN_OFFSET UNITYSDK_OFFSET(0xCD5BDC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASANYNEWPVESTAGENOTSEEN_OFFSET UNITYSDK_OFFSET(0xCD5B790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASANYSCOREREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCD5B2F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASPVPSTAGENEWNOTSEEN_OFFSET UNITYSDK_OFFSET(0xCD5C770)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETPVPSTAGEPAGESEEN_OFFSET UNITYSDK_OFFSET(0xCD5C880)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENALLUNLOCKEDPVESTAGES_OFFSET UNITYSDK_OFFSET(0xCD5C480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENPVESTAGES_OFFSET UNITYSDK_OFFSET(0xCD5C270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENPVESTAGE_OFFSET UNITYSDK_OFFSET(0xCD5C120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD5C910)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2RedDot_TypeDefinitionIndex = 75694;

	class DiceCombatV2RedDot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CachedNewPVEStageIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAnyScoreRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASANYSCOREREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasAnyNewPVEStageNotSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASANYNEWPVESTAGENOTSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewPVEStageIDsNotSeen()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_GETNEWPVESTAGEIDSNOTSEEN_OFFSET))(this);
		}

		::System::Void SetSeenPVEStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENPVESTAGE_OFFSET))(this, a1);
		}

		::System::Void SetSeenPVEStages(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENPVESTAGES_OFFSET))(this, a1);
		}

		::System::Void SetSeenAllUnlockedPVEStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETSEENALLUNLOCKEDPVESTAGES_OFFSET))(this);
		}

		::System::Boolean HasPVPStageNewNotSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_HASPVPSTAGENEWNOTSEEN_OFFSET))(this);
		}

		::System::Void SetPVPStagePageSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2REDDOT_SETPVPSTAGEPAGESEEN_OFFSET))(this);
		}
	};
}
