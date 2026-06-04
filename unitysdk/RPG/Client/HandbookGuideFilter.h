#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBCED300)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCED240)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET UNITYSDK_OFFSET(0xBCECB90)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xBCECE30)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBCEE430)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0xBCEE080)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0xBCED660)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0xBCEDFA0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xBCED6B0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0xBCEDED0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBCEE610)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEE5A0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBCEE530)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideFilter_TypeDefinitionIndex = 62482;

	class HandbookGuideFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotWorldIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideMainTabIDs; // 0x20
		::System::UInt32 _ChallengeTabTypeID; // 0x28
		::System::Boolean _IsRogueTabUnlocked; // 0x2C
		::System::Boolean _IsChallengeTabUnlocked; // 0x2D
		::System::Boolean ShowRogueGuideSubTabNew; // 0x2E
		::System::UInt32 _GrowthGuideTabID; // 0x30
		::System::UInt32 _RogueTabTypeID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowGrowthTargetNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnReddotRefreshGuide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET))(this, a1);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRogueScoreRewardGuideRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdatePrereleaseAvatarRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET))(this);
		}

		::System::Void _InitUnseen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
