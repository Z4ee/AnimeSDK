#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x98FF2A0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98FF1A0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET UNITYSDK_OFFSET(0x98FEAE0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWROGUESCOREREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x98FEA00)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x98FED80)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9900100)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0x98FFD10)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0x98FF590)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x98FFC60)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x98FF5E0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x98FFBF0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9900300)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9900280)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9900200)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideFilter_TypeDefinitionIndex = 54386;

	class HandbookGuideFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotWorldIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideMainTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x20
		::System::UInt32 _GrowthGuideTabID; // 0x28
		::System::Boolean _IsRogueTabUnlocked; // 0x2C
		::System::Boolean _IsChallengeTabUnlocked; // 0x2D
		::System::Boolean ShowRogueGuideSubTabNew; // 0x2E
		::System::UInt32 _ChallengeTabTypeID; // 0x30
		::System::UInt32 _RogueTabTypeID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowRogueScoreRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWROGUESCOREREWARDREDDOT_OFFSET))(this);
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

		::System::Void _OnReddotRefreshGuide(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET))(this, arg);
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
