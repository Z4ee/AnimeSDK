#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelAchievementDataGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET UNITYSDK_OFFSET(0x938ECA0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x938EDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelAchievementDataManager_TypeDefinitionIndex = 51363;

	class ChimeraDuelAchievementDataManager : public ::System::Object
	{
	public:
		::System::UInt32 _MaxTabCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>* GetChimeraDuelAchievementDataGroups(::System::Boolean isInBattle, ::System::UInt32 masterID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET))(this, isInBattle, masterID);
		}
	};
}
