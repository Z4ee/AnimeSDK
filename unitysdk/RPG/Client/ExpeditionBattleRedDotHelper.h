#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_GETNEWUNLOCKMAPS_OFFSET UNITYSDK_OFFSET(0x1B889EB0)
#define RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_ISFINISHALLAVAILABLEMAP_OFFSET UNITYSDK_OFFSET(0x1B889FD0)
#define RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_MARKMAPSEEN_OFFSET UNITYSDK_OFFSET(0x1B894B70)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRedDotHelper_TypeDefinitionIndex = 63923;

	class ExpeditionBattleRedDotHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* GetNewUnlockMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_GETNEWUNLOCKMAPS_OFFSET))();
		}

		static ::System::Void MarkMapSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_MARKMAPSEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsFinishAllAvailableMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_ISFINISHALLAVAILABLEMAP_OFFSET))();
		}
	};
}
