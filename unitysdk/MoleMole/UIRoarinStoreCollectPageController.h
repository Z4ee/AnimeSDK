#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectItemData.h"
#include "unitysdk/MoleMole/UIRoarinStoreItemWidgetController_CardData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_278;
class Class_2_4A88E57BA317354F;
class Class_3_1F60EA4E6E9D8147;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDITEM_OFFSET UNITYSDK_OFFSET(0x17D42EB0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDLOCKEDCARDS_OFFSET UNITYSDK_OFFSET(0x17D43810)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_OFFSET UNITYSDK_OFFSET(0x17D431B0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D42560)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D42570)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D42690)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONROARINSTOREREFRESH_OFFSET UNITYSDK_OFFSET(0x17D42870)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D42730)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_PREPARECOLLECTLIST_OFFSET UNITYSDK_OFFSET(0x17D42920)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REFRESHCOLLECTLIST_OFFSET UNITYSDK_OFFSET(0x17D427A0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D425E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTBYSTATE_OFFSET UNITYSDK_OFFSET(0x17D43100)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTLIST_OFFSET UNITYSDK_OFFSET(0x17D42DF0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D43950)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D43960)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D43A00)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D43A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectPageController_TypeDefinitionIndex = 66481;

	class UIRoarinStoreCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* _collectItemDatas; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_4A88E57BA317354F* get__viewModel()
		{
			return ((::Class_2_4A88E57BA317354F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void RegisterEventWhenUIOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REGISTEREVENTWHENUIOPEN_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnRoarinStoreRefresh(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONROARINSTOREREFRESH_OFFSET))(this, args);
		}

		::System::Void RefreshCollectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REFRESHCOLLECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* PrepareCollectList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_PREPARECOLLECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* SortList(::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* itemDatas)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTLIST_OFFSET))(this, itemDatas);
		}

		::System::Int32 SortByState(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData lhs, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTBYSTATE_OFFSET))(this, lhs, rhs);
		}

		::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData BuildItem(::Class_2_208CC9941471731A_278* configTemplate)
		{
			return ((::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData(*)(::PVOID, ::Class_2_208CC9941471731A_278*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDITEM_OFFSET))(this, configTemplate);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* BuildRequireCards(::Class_3_1F60EA4E6E9D8147* roarinStoreExchangeState)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*(*)(::PVOID, ::Class_3_1F60EA4E6E9D8147*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_OFFSET))(this, roarinStoreExchangeState);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* BuildLockedCards(::System::Int32 roarinStoreExchangeId)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDLOCKEDCARDS_OFFSET))(this, roarinStoreExchangeId);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventWhenUIOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_REGISTEREVENTWHENUIOPEN_OFFSET))(this);
		}
	};
}
