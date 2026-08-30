#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelAchievementDataGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET UNITYSDK_OFFSET(0x1C1BC310)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC480)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelAchievementDataManager_TypeDefinitionIndex = 63355;

	class ChimeraDuelAchievementDataManager : public ::System::Object
	{
	public:
		::System::UInt32 _MaxTabCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>* GetChimeraDuelAchievementDataGroups(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET))(this, a1, a2);
		}
	};
}
