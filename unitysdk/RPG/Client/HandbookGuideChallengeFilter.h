#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x98FD0D0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98FD060)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x98FCF60)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x98FD6E0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHCHALLENGE_OFFSET UNITYSDK_OFFSET(0x98FD450)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0x98FD3C0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATELATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x98FD4A0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x98FD010)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATESUBTAB_OFFSET UNITYSDK_OFFSET(0x98FD5A0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x98FD840)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98FD7C0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x98FD740)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideChallengeFilter_TypeDefinitionIndex = 54385;

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
