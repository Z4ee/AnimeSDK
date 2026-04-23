#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class KraterWorldShopUpgradeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WORLDSHOP4THMODULE_FIREAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xB4E42F0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETALLUNLOCKOFFERINGREWARDS_OFFSET UNITYSDK_OFFSET(0xB4E3CD0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETDEFAULTOFFERINGTYPEINDEX_OFFSET UNITYSDK_OFFSET(0xB4E4490)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWNNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0xB4E3EC0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0xB4E3E40)
#define RPG_CLIENT_WORLDSHOP4THMODULE_GETSUBMITANIMDELAYTIME_OFFSET UNITYSDK_OFFSET(0xB4E41F0)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xB4E3A10)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORSAVEDVALUE_OFFSET UNITYSDK_OFFSET(0xB4E3B70)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SETSHOWUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0xB4E4050)
#define RPG_CLIENT_WORLDSHOP4THMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xB4E38A0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4E37F0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E4DC0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__FORCEREFRESHOFFERINGREWARDS_OFFSET UNITYSDK_OFFSET(0xB4E4710)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ISALLOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0xB4E4870)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ISOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0xB4E4B80)
#define RPG_CLIENT_WORLDSHOP4THMODULE__ONOFFERINGREWARDSINIT_OFFSET UNITYSDK_OFFSET(0xB4E4640)
#define RPG_CLIENT_WORLDSHOP4THMODULE__REFRESHUNLOCKNEWSTORE_OFFSET UNITYSDK_OFFSET(0xB4E49A0)
#define RPG_CLIENT_WORLDSHOP4THMODULE__SETOFFERINGUNLOCKSHOWN_OFFSET UNITYSDK_OFFSET(0xB4E4CB0)
#define RPG_CLIENT_WORLDSHOP4THMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4E4E70)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldShop4ThModule_TypeDefinitionIndex = 61152;

	class WorldShop4ThModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::RPG::GameCore::KraterWorldShopUpgradeConfig** StaticGet_Config()
		{
			return (::RPG::GameCore::KraterWorldShopUpgradeConfig**)Il2CppClass::FromTypeDefinitionIndex(WorldShop4ThModule_TypeDefinitionIndex)->GetStaticField(0x3CD50);
		}
		// static const ::System::UInt32 _ReactEntityGroupID = 0x18; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>* _OfferingRewards; // 0x10
		::Il2CppArray<::System::UInt32>* _AllOfferingType; // 0x18

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

		::System::Void SetFloorCustomValue(::System::String* key, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORCUSTOMVALUE_OFFSET))(this, key, value);
		}

		::System::Void SetFloorSavedValue(::System::String* key, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETFLOORSAVEDVALUE_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>* GetAllUnlockOfferingRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OfferingRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETALLUNLOCKOFFERINGREWARDS_OFFSET))(this);
		}

		::System::UInt32 GetShowUpgradeLevel(::RPG::Client::OfferingRewardData* offeringData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWUPGRADELEVEL_OFFSET))(this, offeringData);
		}

		::System::UInt32 GetShownNextLevelLimitPastLevel(::RPG::Client::OfferingRewardData* offeringData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSHOWNNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, offeringData);
		}

		::System::Void SetShowUpgradeLevel(::System::UInt32 offeringType, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_SETSHOWUPGRADELEVEL_OFFSET))(this, offeringType, level);
		}

		::System::Single GetSubmitAnimDelayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETSUBMITANIMDELAYTIME_OFFSET))(this);
		}

		::System::Void FireAudioEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_FIREAUDIOEVENT_OFFSET))(this, eventName);
		}

		::System::Int32 GetDefaultOfferingTypeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE_GETDEFAULTOFFERINGTYPEINDEX_OFFSET))(this);
		}

		::System::Void _OnOfferingRewardsInit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ONOFFERINGREWARDSINIT_OFFSET))(this, arg);
		}

		::System::Void _ForceRefreshOfferingRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__FORCEREFRESHOFFERINGREWARDS_OFFSET))(this);
		}

		::System::Void _RefreshUnlockNewStore(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__REFRESHUNLOCKNEWSTORE_OFFSET))(this, arg);
		}

		::System::Boolean _IsAllOfferingUnlockShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ISALLOFFERINGUNLOCKSHOWN_OFFSET))(this);
		}

		::System::Boolean _IsOfferingUnlockShown(::RPG::Client::OfferingRewardData* offeringData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__ISOFFERINGUNLOCKSHOWN_OFFSET))(this, offeringData);
		}

		::System::Void _SetOfferingUnlockShown(::System::UInt32 offeringType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE__SETOFFERINGUNLOCKSHOWN_OFFSET))(this, offeringType);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDSHOP4THMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
