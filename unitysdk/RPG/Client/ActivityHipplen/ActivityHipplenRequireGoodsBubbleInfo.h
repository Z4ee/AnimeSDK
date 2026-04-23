#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenBubbleInfo.h"

namespace RPG::Client::ActivityHipplen { class HipplenRequireGoodsData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_GET_REQUIREGOODSLIST_OFFSET UNITYSDK_OFFSET(0x9AFBA60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PAUSE_OFFSET UNITYSDK_OFFSET(0x9AFBA00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PLAYFAILFADEOUT_OFFSET UNITYSDK_OFFSET(0x9AFB9A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PLAYSUCCFADEOUT_OFFSET UNITYSDK_OFFSET(0x9AFB940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x9AFB8F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERFADEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AFB850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERPAUSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9AFB8A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AFB800)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_SETREQUIREGOODSLIST_OFFSET UNITYSDK_OFFSET(0x9AFB7B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_SET_REQUIREGOODSLIST_OFFSET UNITYSDK_OFFSET(0x9AFBA70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFB780)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRequireGoodsBubbleInfo_TypeDefinitionIndex = 69525;

	class ActivityHipplenRequireGoodsBubbleInfo : public ::RPG::Client::ActivityHipplen::ActivityHipplenBubbleInfo
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>* _RequireGoodsList_k__BackingField; // 0x50
		::System::Action* _RefreshCallback; // 0x58
		::System::Action_1<::System::Boolean>* _PauseCallback; // 0x60
		::System::Action_1<::System::Boolean>* _FadeOutCallback; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetRequireGoodsList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_SETREQUIREGOODSLIST_OFFSET))(this, list);
		}

		::System::Void RegisterRefreshCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERREFRESHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterFadeOutCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERFADEOUTCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterPauseCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REGISTERPAUSECALLBACK_OFFSET))(this, callback);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_REFRESH_OFFSET))(this);
		}

		::System::Void PlaySuccFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PLAYSUCCFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFailFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PLAYFAILFADEOUT_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_PAUSE_OFFSET))(this, isPause);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>* get_RequireGoodsList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_GET_REQUIREGOODSLIST_OFFSET))(this);
		}

		::System::Void set_RequireGoodsList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenRequireGoodsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENREQUIREGOODSBUBBLEINFO_SET_REQUIREGOODSLIST_OFFSET))(this, value);
		}
	};
}
