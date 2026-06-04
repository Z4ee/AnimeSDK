#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ENHANCEDAVATARHELPER_CHECKSHOWENHANCEDCHANGESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xB90AFB0)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_CLEARENHANCEDREDDOT_OFFSET UNITYSDK_OFFSET(0xB90AD00)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_GETENHANCEDREDDOTAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB90AAC0)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_GETENHANCEDREDDOTTRIALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB90AE30)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_GETLASTSEENENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0xB90A880)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_GETMAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0xB90AA00)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_REFRESHENHANCEDREDDOT_OFFSET UNITYSDK_OFFSET(0xB90AB80)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_REFRESHENHANCEDTRIALSTAGEREDDOT_OFFSET UNITYSDK_OFFSET(0xB90AEF0)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_REMOVEENHANCEDREDDOT_OFFSET UNITYSDK_OFFSET(0xB90AC40)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_SETLASTSEENENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0xB90A940)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_SETSHOWENHANCEDCHANGESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xB90B0C0)
#define RPG_CLIENT_ENHANCEDAVATARHELPER_SWITCHENHANCED_OFFSET UNITYSDK_OFFSET(0xB90A750)

namespace RPG::Client
{
	inline static constexpr unsigned int EnhancedAvatarHelper_TypeDefinitionIndex = 58612;

	class EnhancedAvatarHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise* SwitchEnhanced(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_SWITCHENHANCED_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetLastSeenEnhancedSeason()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_GETLASTSEENENHANCEDSEASON_OFFSET))();
		}

		static ::System::Void SetLastSeenEnhancedSeason(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_SETLASTSEENENHANCEDSEASON_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxEnhancedSeason()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_GETMAXENHANCEDSEASON_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetEnhancedRedDotAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_GETENHANCEDREDDOTAVATARIDS_OFFSET))();
		}

		static ::System::Void RefreshEnhancedRedDot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_REFRESHENHANCEDREDDOT_OFFSET))();
		}

		static ::System::Boolean RemoveEnhancedRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_REMOVEENHANCEDREDDOT_OFFSET))(a1);
		}

		static ::System::Void ClearEnhancedRedDot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_CLEARENHANCEDREDDOT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetEnhancedRedDotTrialStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_GETENHANCEDREDDOTTRIALSTAGEIDS_OFFSET))();
		}

		static ::System::Void RefreshEnhancedTrialStageRedDot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_REFRESHENHANCEDTRIALSTAGEREDDOT_OFFSET))();
		}

		static ::System::Boolean CheckShowEnhancedChangeSimpleDesc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_CHECKSHOWENHANCEDCHANGESIMPLEDESC_OFFSET))();
		}

		static ::System::Void SetShowEnhancedChangeSimpleDesc(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCEDAVATARHELPER_SETSHOWENHANCEDCHANGESIMPLEDESC_OFFSET))(a1);
		}
	};
}
