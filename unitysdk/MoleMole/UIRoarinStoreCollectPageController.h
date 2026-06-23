#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectItemData.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectStatus.h"
#include "unitysdk/MoleMole/UIRoarinStoreItemWidgetController_CardData.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_1043;
class Class_2_4A88E57BA317354F;
class Class_3_62205F1BB64E0A18_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ALLOCATECARD_OFFSET UNITYSDK_OFFSET(0x156A4B60)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDCLAIMEDREQUIRECARDS_OFFSET UNITYSDK_OFFSET(0x156A51E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDITEM_OFFSET UNITYSDK_OFFSET(0x156A4010)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDLOCKEDCARDS_OFFSET UNITYSDK_OFFSET(0x156A4A00)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_1_OFFSET UNITYSDK_OFFSET(0x156A4310)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_OFFSET UNITYSDK_OFFSET(0x156A4F80)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDUNCLAIMEDREQUIRECARDS_OFFSET UNITYSDK_OFFSET(0x156A5BA0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_CHECKCARDNUM_OFFSET UNITYSDK_OFFSET(0x156A6580)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x156A36D0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156A36E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156A3800)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONROARINSTOREREFRESH_OFFSET UNITYSDK_OFFSET(0x156A39E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156A38A0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_PREPARECOLLECTLIST_OFFSET UNITYSDK_OFFSET(0x156A3A90)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REFRESHCOLLECTLIST_OFFSET UNITYSDK_OFFSET(0x156A3910)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x156A3750)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTBYSTATE_OFFSET UNITYSDK_OFFSET(0x156A4260)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_SORTLIST_OFFSET UNITYSDK_OFFSET(0x156A3F50)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A66C0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156A6770)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156A6810)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x156A68A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectPageController_TypeDefinitionIndex = 69299;

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

		::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData BuildItem(::Class_2_208CC9941471731A_1043* configTemplate)
		{
			return ((::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData(*)(::PVOID, ::Class_2_208CC9941471731A_1043*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDITEM_OFFSET))(this, configTemplate);
		}

		::System::Void AllocateCard(::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* collectItemData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ALLOCATECARD_OFFSET))(this, collectItemData);
		}

		::System::Void BuildRequireCards(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData& collectData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardNums)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_OFFSET))(this, collectData, cardNums);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* BuildClaimedRequireCards(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData collectData)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDCLAIMEDREQUIRECARDS_OFFSET))(this, collectData);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* BuildUnClaimedRequireCards(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData collectData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardNums)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDUNCLAIMEDREQUIRECARDS_OFFSET))(this, collectData, cardNums);
		}

		::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectStatus CheckCardNum(::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* cardDatas)
		{
			return ((::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectStatus(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_CHECKCARDNUM_OFFSET))(this, cardDatas);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>* BuildRequireCards_1(::Class_3_62205F1BB64E0A18_1* roarinStoreExchangeState)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreItemWidgetController_CardData>*(*)(::PVOID, ::Class_3_62205F1BB64E0A18_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_BUILDREQUIRECARDS_1_OFFSET))(this, roarinStoreExchangeState);
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
