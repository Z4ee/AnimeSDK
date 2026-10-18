#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_42FEB2F35536B983;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xE0E1940)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETCURRENTSUBTAB_OFFSET UNITYSDK_OFFSET(0xE0E1CD0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAINTABLIST_OFFSET UNITYSDK_OFFSET(0xE0E1A40)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAPNAMEBYSUBTAB_OFFSET UNITYSDK_OFFSET(0xE0E24B0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETOWNERPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xE0E19E0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETPLAYERBRIEFDISPLAYDATALISTBYMAINTAB_OFFSET UNITYSDK_OFFSET(0xE0E2C10)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E1930)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__RESOLVEMAPINFOBYSUBTAB_OFFSET UNITYSDK_OFFSET(0xE0E32A0)

namespace RPG::Client::SocialPlay
{
	inline static constexpr unsigned int OnlinePlayMapContext_TypeDefinitionIndex = 74497;

	class OnlinePlayMapContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>* _MapInfoList; // 0x10
		::Class_1_42FEB2F35536B983* _Owner; // 0x18
		::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>* _SubTabList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SocialPlay::OnlinePlayMapContext* Create(::Class_1_42FEB2F35536B983* a1, ::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>* a3)
		{
			return ((::RPG::Client::SocialPlay::OnlinePlayMapContext*(*)(::Class_1_42FEB2F35536B983*, ::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::PlayerBriefDisplayData* GetOwnerPlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETOWNERPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::NavMap::IMainTab*>* GetMainTabList()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::NavMap::IMainTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAINTABLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetCurrentSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETCURRENTSUBTAB_OFFSET))(this);
		}

		::System::String* GetMapNameBySubTab(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAPNAMEBYSUBTAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetPlayerBriefDisplayDataListByMainTab(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETPLAYERBRIEFDISPLAYDATALISTBYMAINTAB_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* _ResolveMapInfoBySubTab(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__RESOLVEMAPINFOBYSUBTAB_OFFSET))(this, a1);
		}
	};
}
