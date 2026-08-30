#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class KraterWorldShopUpgradeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WORLDSHOP4THMODULE_FIREAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x1681E5C0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETALLUNLOCKOFFERINGREWARDS_OFFSET UNITYSDK_OFFSET(0x1681DF50)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETDEFAULTOFFERINGTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1681E760)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWNNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0x1681E1A0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1681E120)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSUBMITANIMDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1681E4C0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x1681DD90)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORSAVEDVALUE_OFFSET UNITYSDK_OFFSET(0x1681DE80)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETSHOWUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0x1681E320)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0x1681DC10)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1681DB40)
#define RPG_CLIENT_WORLDSHOP4THMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1681F100)
#define RPG_CLIENT_WORLDSHOP4THMODULE__FORCEREFRESHOFFERINGREWARDS_OFFSET UNITYSDK_OFFSET(0x1681EA00)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ISALLOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0x1681EBC0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ISOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0x1681EEC0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ONOFFERINGREWARDSINIT_OFFSET UNITYSDK_OFFSET(0x1681E900)
#define RPG_CLIENT_WORLDSHOP4THMODULE__REFRESHUNLOCKNEWSTORE_OFFSET UNITYSDK_OFFSET(0x1681ECE0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__SETOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0x1681EFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldShop4ThModule_TypeDefinitionIndex = 66426;

	class WorldShop4ThModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::RPG::GameCore::KraterWorldShopUpgradeConfig** StaticGet_Config()
		{
			return (::RPG::GameCore::KraterWorldShopUpgradeConfig**)Il2CppClass::FromTypeDefinitionIndex(WorldShop4ThModule_TypeDefinitionIndex)->GetStaticField(0x6CF0);
		}
		// static const ::System::UInt32 _ReactEntityGroupID = 0x18; // 0x0
		::Il2CppArray<::System::UInt32>* _AllOfferingType; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>* _OfferingRewards; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean ShouldShowMapShortCutHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this);
		}

		::System::Void SetFloorCustomValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORCUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloorSavedValue(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORSAVEDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>* GetAllUnlockOfferingRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETALLUNLOCKOFFERINGREWARDS_OFFSET))(this);
		}

		::System::UInt32 GetShowUpgradeLevel(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWUPGRADELEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetShownNextLevelLimitPastLevel(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWNNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetShowUpgradeLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETSHOWUPGRADELEVEL_OFFSET))(this, a1, a2);
		}

		::System::Single GetSubmitAnimDelayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSUBMITANIMDELAYTIME_OFFSET))(this);
		}

		::System::Void FireAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_FIREAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Int32 GetDefaultOfferingTypeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETDEFAULTOFFERINGTYPEINDEX_OFFSET))(this);
		}

		::System::Void _OnOfferingRewardsInit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ONOFFERINGREWARDSINIT_OFFSET))(this, a1);
		}

		::System::Void _ForceRefreshOfferingRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__FORCEREFRESHOFFERINGREWARDS_OFFSET))(this);
		}

		::System::Void _RefreshUnlockNewStore(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__REFRESHUNLOCKNEWSTORE_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllOfferingUnlockShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ISALLOFFERINGUNLOCKSHOWN_OFFSET))(this);
		}

		::System::Boolean _IsOfferingUnlockShown(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ISOFFERINGUNLOCKSHOWN_OFFSET))(this, a1);
		}

		::System::Void _SetOfferingUnlockShown(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__SETOFFERINGUNLOCKSHOWN_OFFSET))(this, a1);
		}
	};
}
