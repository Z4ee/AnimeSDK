#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5EA2A0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5EA1A0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET UNITYSDK_OFFSET(0xA5E9AF0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA5E9D90)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EB110)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0xA5EAD10)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0xA5EA590)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0xA5EAC60)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xA5EA5E0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0xA5EABF0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5EB310)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5EB290)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5EB210)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideFilter_TypeDefinitionIndex = 61549;

	class HandbookGuideFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideMainTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotWorldIDs; // 0x20
		::System::Boolean _IsRogueTabUnlocked; // 0x28
		::System::Boolean _IsChallengeTabUnlocked; // 0x29
		::System::Boolean ShowRogueGuideSubTabNew; // 0x2A
		::System::UInt32 _RogueTabTypeID; // 0x2C
		::System::UInt32 _GrowthGuideTabID; // 0x30
		::System::UInt32 _ChallengeTabTypeID; // 0x34

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
