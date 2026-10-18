#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1190;
class Class_1_18DABED9DF7B86AC;
class Class_1_85DD45D6257EAB84;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_ADDITEM_OFFSET UNITYSDK_OFFSET(0xC85A290)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CREATE_OFFSET UNITYSDK_OFFSET(0xC85A170)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC85A380)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC85A240)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__HIDEREDUNDANTITEMPRESENTERS_OFFSET UNITYSDK_OFFSET(0xC85AA40)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHDESC_OFFSET UNITYSDK_OFFSET(0xC85A3E0)
#define RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0xC85A570)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTeamBlockDetailPresenter_TypeDefinitionIndex = 71180;

	class BattleTeamBlockDetailPresenter : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1190* _Data; // 0x10
		::System::Collections::Generic::List_1<::Class_1_18DABED9DF7B86AC*>* _ItemPresenters; // 0x18
		::Class_1_85DD45D6257EAB84* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleTeamBlockDetailPresenter* Create(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::BattleTeamBlockDetailPresenter*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_CREATE_OFFSET))(a1);
		}

		::System::Void AddItem(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_ADDITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_1190* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1190*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER_REFRESHVIEW_OFFSET))(this, a1);
		}

		::System::Void _RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHDESC_OFFSET))(this);
		}

		::System::Void _RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void _HideRedundantItemPresenters(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETEAMBLOCKDETAILPRESENTER__HIDEREDUNDANTITEMPRESENTERS_OFFSET))(this, a1);
		}
	};
}
