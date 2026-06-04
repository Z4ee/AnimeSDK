#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OfferingRewardData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD959D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBD8BF30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBD98BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET UNITYSDK_OFFSET(0xBD98CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBD98910)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET UNITYSDK_OFFSET(0xBD96140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD98E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD95290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0xBD989D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xBD98A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET UNITYSDK_OFFSET(0xBD98830)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfferingService_TypeDefinitionIndex = 73783;

	class LimaoNewsOfferingService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_ShopOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0xCBD0);
		}
		static ::System::UInt32* StaticGet_LevelOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0xCBD4);
		}
		::RPG::Client::OfferingRewardData* PreLevelOfferingRewardData; // 0x10
		::System::UInt32 PreLevelOfferingItemCount; // 0x18
		::System::UInt32 PreOfferingLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnOfferingRewardsInit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET))(this, a1);
		}

		::System::Void _OnOfferingClearShowUpgradeHint(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMaxOfferingShowLevel(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingRewardData* GetLevelOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET))(this);
		}

		::System::UInt32 GetLevelOfferingSubmitItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetShopOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetLevelRewardUnlockText(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET))(this, a1);
		}

		::System::Void SyncPreLevelOfferingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET))(this);
		}
	};
}
