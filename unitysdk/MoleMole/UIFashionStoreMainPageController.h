#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_BD2BE7927F889C7B;
class Class_2_3F6C09E90314E9AB;
class Class_2_EE5C3D8646C28032;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStore3DModelController; }
namespace MoleMole { class UIFashionStoreSellDetailWidgetController; }
namespace MoleMole { class UIFashionStoreSellLineWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CLEARALLPRODUCTNEWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1678B400)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTLISTIDXTOPAIRIDX_OFFSET UNITYSDK_OFFSET(0x1678D090)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTPAIRIDXTOLISTIDX_OFFSET UNITYSDK_OFFSET(0x1678C2B0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTPRODUCTLISTINTOSHIELFLIST_OFFSET UNITYSDK_OFFSET(0x1678B5B0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1678A890)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1678AC40)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCLICKBUYBTN_OFFSET UNITYSDK_OFFSET(0x1678C8C0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCLICKCOSTITEMBTN_OFFSET UNITYSDK_OFFSET(0x1678C6E0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1678A8A0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONFAILBUYINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x1678D050)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSELECTPRODUCT_OFFSET UNITYSDK_OFFSET(0x1678B990)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1678B0C0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSUCCESSBUYINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x1678CE70)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET UNITYSDK_OFFSET(0x1678D120)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1678B390)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1678A930)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1678AB80)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_SHOWFIRSTOPENPERFORM_OFFSET UNITYSDK_OFFSET(0x1678B1C0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_UPDATECOSTMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1678C350)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1678D320)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1678D330)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__SHOWFIRSTOPENPERFORM_B__21_0_OFFSET UNITYSDK_OFFSET(0x1678D520)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1678D850)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1678D8E0)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1678D980)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1678D990)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1678D9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMainPageController_TypeDefinitionIndex = 62342;

	class UIFashionStoreMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_EE5C3D8646C28032* _view; // 0x320
		::MoleMole::UIFashionStoreSellDetailWidgetController* _detailController; // 0x328
		::Class_2_3F6C09E90314E9AB* _model; // 0x330
		::MoleMole::UIFashionStore3DModelController* _3DModelController; // 0x338
		::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* _productList; // 0x340
		::System::Int32 _currSelectIdx; // 0x348
		::System::Boolean _isTimelinePlayed; // 0x34C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreSellLineWidgetController_Context*>* ConvertProductListIntoShielfList(::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* productList)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIFashionStoreSellLineWidgetController_Context*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTPRODUCTLISTINTOSHIELFLIST_OFFSET))(this, productList);
		}

		::System::Void OnSelectProduct(::System::Int32 row, ::System::Int32 col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSELECTPRODUCT_OFFSET))(this, row, col);
		}

		::System::Void UpdateCostMaterialCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_UPDATECOSTMATERIALCOUNT_OFFSET))(this);
		}

		::System::Void OnClickCostItemBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCLICKCOSTITEMBTN_OFFSET))(this);
		}

		::System::Void OnClickBuyBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONCLICKBUYBTN_OFFSET))(this);
		}

		::System::Void OnSuccessBuyingProduct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONSUCCESSBUYINGPRODUCT_OFFSET))(this);
		}

		::System::Void OnFailBuyingProduct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONFAILBUYINGPRODUCT_OFFSET))(this);
		}

		::System::Void ClearAllProductNewNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CLEARALLPRODUCTNEWNOTIFICATION_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> ConvertListIdxToPairIdx(::System::Int32 listIdx)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTLISTIDXTOPAIRIDX_OFFSET))(this, listIdx);
		}

		::System::Int32 ConvertPairIdxToListIdx(::System::Int32 row, ::System::Int32 col)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_CONVERTPAIRIDXTOLISTIDX_OFFSET))(this, row, col);
		}

		::System::Void ShowFirstOpenPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_SHOWFIRSTOPENPERFORM_OFFSET))(this);
		}

		::System::Void OnTimelinePerformStart(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET))(this, trans);
		}

		::System::Void _OnUIInit_b__6_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, args);
		}

		::System::Void _ShowFirstOpenPerform_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER__SHOWFIRSTOPENPERFORM_B__21_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
