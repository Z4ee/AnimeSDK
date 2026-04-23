#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET UNITYSDK_OFFSET(0xB12EDD0)
#define RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET UNITYSDK_OFFSET(0xB12ED50)
#define RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET UNITYSDK_OFFSET(0xB12E730)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0xB12EFA0)
#define RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xB12F040)
#define RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB12EAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialUtils_TypeDefinitionIndex = 62578;

	class RoleTrialUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSortedAvatarDemoList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETSORTEDAVATARDEMOLIST_OFFSET))();
		}

		static ::System::UInt32 TryGetCollaborationAvatarDemoActivityID(::System::UInt32 gachaID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_TRYGETCOLLABORATIONAVATARDEMOACTIVITYID_OFFSET))(gachaID);
		}

		static ::Il2CppArray<::System::UInt32>* GetActivityAvatarDemoStages(::System::UInt32 activityID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_GETACTIVITYAVATARDEMOSTAGES_OFFSET))(activityID);
		}

		static ::System::Boolean CanStartRoleTrial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_CANSTARTROLETRIAL_OFFSET))();
		}

		static ::System::Boolean IsAvatarDisplayOnly(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARDISPLAYONLY_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarNeedShowEntrance(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS_ISAVATARNEEDSHOWENTRANCE_OFFSET))(avatarID);
		}
	};
}
