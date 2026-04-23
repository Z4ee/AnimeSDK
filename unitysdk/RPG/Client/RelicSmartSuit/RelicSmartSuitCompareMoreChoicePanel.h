#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1046;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0xAFB1220)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CONFIRM_OFFSET UNITYSDK_OFFSET(0xAFB1580)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET UNITYSDK_OFFSET(0xAFB0F90)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GETCURPAGERELICINFOS_OFFSET UNITYSDK_OFFSET(0xAFB1480)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xAFB0F70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET UNITYSDK_OFFSET(0xAFB1360)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xAFB0F80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SHOW_OFFSET UNITYSDK_OFFSET(0xAFB1320)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB10C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INITSTRATEGY_OFFSET UNITYSDK_OFFSET(0xAFB11D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INIT_OFFSET UNITYSDK_OFFSET(0xAFB1160)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareMoreChoicePanel_TypeDefinitionIndex = 68665;

	class RelicSmartSuitCompareMoreChoicePanel : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1046* _Strategy; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* _CachedRelicInfos; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* _ViewModel; // 0x20
		::System::Boolean _IsShow_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET))(this, viewModel);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* Create(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* viewModel)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET))(viewModel);
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

		::System::Void Hide(::System::Boolean isResetSelectedRelicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET))(this, isResetSelectedRelicInfo);
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
