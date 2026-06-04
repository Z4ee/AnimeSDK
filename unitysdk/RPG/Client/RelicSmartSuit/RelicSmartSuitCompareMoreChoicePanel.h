#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1096;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0xC6F9040)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CONFIRM_OFFSET UNITYSDK_OFFSET(0xC6F93C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC6F8DB0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GETCURPAGERELICINFOS_OFFSET UNITYSDK_OFFSET(0xC6F92B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC6F8D90)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET UNITYSDK_OFFSET(0xC6F9190)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC6F8DA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SHOW_OFFSET UNITYSDK_OFFSET(0xC6F9150)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F8EE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INITSTRATEGY_OFFSET UNITYSDK_OFFSET(0xC6F8FF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INIT_OFFSET UNITYSDK_OFFSET(0xC6F8F80)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareMoreChoicePanel_TypeDefinitionIndex = 69477;

	class RelicSmartSuitCompareMoreChoicePanel : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* _ViewModel; // 0x10
		::Class_0_16E4307DCC419505_1096* _Strategy; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* _CachedRelicInfos; // 0x20
		::System::Boolean _IsShow_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* Create(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INIT_OFFSET))(this);
		}

		::System::Void _InitStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INITSTRATEGY_OFFSET))(this);
		}

		::System::Void ClearCachedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CLEARCACHEDDATA_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SHOW_OFFSET))(this);
		}

		::System::Void Hide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GetCurPageRelicInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GETCURPAGERELICINFOS_OFFSET))(this);
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CONFIRM_OFFSET))(this);
		}
	};
}
