#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E8170)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E8100)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA5E8000)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E8780)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA5E84F0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0xA5E8460)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATELATESTUPDATE_OFFSET UNITYSDK_OFFSET(0xA5E8540)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xA5E80B0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATESUBTAB_OFFSET UNITYSDK_OFFSET(0xA5E8640)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5E88E0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E8860)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5E87E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideChallengeFilter_TypeDefinitionIndex = 61548;

	class HandbookGuideChallengeFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x10
		::System::Boolean ShowLatestUpdateRedDot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRedDotRefreshGuide(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHGUIDE_OFFSET))(this, arg);
		}

		::System::Void _OnRedDotRefreshChallenge(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHCHALLENGE_OFFSET))(this, arg);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateLatestUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATELATESTUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateSubTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATESUBTAB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
