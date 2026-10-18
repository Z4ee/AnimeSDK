#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_GETNEWUNLOCKMAPS_OFFSET UNITYSDK_OFFSET(0xCE44E50)
#define RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_ISFINISHALLAVAILABLEMAP_OFFSET UNITYSDK_OFFSET(0xCE44F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRedDotHelper_TypeDefinitionIndex = 63861;

	class ExpeditionBattleRedDotHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* GetNewUnlockMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_GETNEWUNLOCKMAPS_OFFSET))();
		}

		static ::System::Boolean IsFinishAllAvailableMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEREDDOTHELPER_ISFINISHALLAVAILABLEMAP_OFFSET))();
		}
	};
}
