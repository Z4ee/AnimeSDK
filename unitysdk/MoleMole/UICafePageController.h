#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_499EDFA3518A0E64;
class Class_1_5DA2E7556103D5A3_154;
class Class_2_79AE422BA06F6D26_258;
class Class_2_82E692415C3A4E10;
namespace MoleMole { class UICafeCurrentBuffWidgetController; }
namespace MoleMole { class UICoffeeshop3D3DModelController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICAFEPAGECONTROLLER_DOREQDRINKCAFE_OFFSET UNITYSDK_OFFSET(0x172D0A00)
#define MOLEMOLE_UICAFEPAGECONTROLLER_GETRECOVERENERGY_OFFSET UNITYSDK_OFFSET(0x172CFA50)
#define MOLEMOLE_UICAFEPAGECONTROLLER_INITGENERALTOKEN_OFFSET UNITYSDK_OFFSET(0x172CDC80)
#define MOLEMOLE_UICAFEPAGECONTROLLER_INITINFO_OFFSET UNITYSDK_OFFSET(0x172CDDF0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_LOADCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x172D2160)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172CE770)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONDRINKCAFE_OFFSET UNITYSDK_OFFSET(0x172D0B40)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x172D0D70)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x172CEFA0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM1_OFFSET UNITYSDK_OFFSET(0x172CF110)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM2_OFFSET UNITYSDK_OFFSET(0x172CF850)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x172CF970)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOWDRINKCAFEFINISHED_OFFSET UNITYSDK_OFFSET(0x172D24A0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172CDF50)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONSYNCCAFEDATA_OFFSET UNITYSDK_OFFSET(0x172CEC00)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET UNITYSDK_OFFSET(0x172D11D0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172CEB90)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172CD770)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172CEAE0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATECAFEDATA_OFFSET UNITYSDK_OFFSET(0x172D0E40)
#define MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATEREWARDBUFFS_OFFSET UNITYSDK_OFFSET(0x172D28F0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_OPENBUFFDETAIL_OFFSET UNITYSDK_OFFSET(0x172D2950)
#define MOLEMOLE_UICAFEPAGECONTROLLER_OPENCAFE3D_OFFSET UNITYSDK_OFFSET(0x172CDBC0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_PAYCAFE_OFFSET UNITYSDK_OFFSET(0x172CFFA0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHBUFFWIDGET_OFFSET UNITYSDK_OFFSET(0x172CEC60)
#define MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHPAYBTNVIEW_OFFSET UNITYSDK_OFFSET(0x172CFAB0)
#define MOLEMOLE_UICAFEPAGECONTROLLER_SETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x172CF230)
#define MOLEMOLE_UICAFEPAGECONTROLLER_STARTSHOWGETCAFECUTSCENE_OFFSET UNITYSDK_OFFSET(0x172D0F50)
#define MOLEMOLE_UICAFEPAGECONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x172CDFE0)
#define MOLEMOLE_UICAFEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x172D2F80)
#define MOLEMOLE_UICAFEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172D2F70)
#define MOLEMOLE_UICAFEPAGECONTROLLER__INITINFO_G__SHOW_6_1_OFFSET UNITYSDK_OFFSET(0x172D3070)
#define MOLEMOLE_UICAFEPAGECONTROLLER__ONCREATEVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0x172D3060)
#define MOLEMOLE_UICAFEPAGECONTROLLER__ONDRINKCAFE_B__20_0_OFFSET UNITYSDK_OFFSET(0x172D3230)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172D3310)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x172D33A0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172D3430)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172D34D0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172D34E0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172D34F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController_TypeDefinitionIndex = 85841;

	class UICafePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_CoffeeDynamicKey()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICafePageController_TypeDefinitionIndex)->GetStaticField(0x46BA0);
		}
		// static const ::System::String* ExceedMaxCafeTipKey; // 0x0
		// static const ::System::String* ExceedMaxEnergyTipKey; // 0x0
		// static const ::System::String* DrunkOnceCoffeeTipKey; // 0x0
		// static const ::System::String* TodayCafeRenewTipKey; // 0x0
		::Class_2_79AE422BA06F6D26_258* _view; // 0x328
		::System::Boolean _isInCafePerform; // 0x330
		::MoleMole::UICoffeeshop3D3DModelController* _coffeeShop3D; // 0x338
		::Class_2_82E692415C3A4E10* _uiCafeModel; // 0x340
		::Class_1_499EDFA3518A0E64* _currentCafeItem; // 0x348
		::MoleMole::UICafeCurrentBuffWidgetController* _buffWidget; // 0x350
		::System::Boolean _fromPerform; // 0x358
		::System::Boolean _ignoreBuffWidgetUpdate; // 0x359

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_INITINFO_OFFSET))(this);
		}

		::System::Void OnSyncCafeData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSYNCCAFEDATA_OFFSET))(this, args);
		}

		::System::Void OpenCafe3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_OPENCAFE3D_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshBuffWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHBUFFWIDGET_OFFSET))(this);
		}

		::System::Void OnSelectItem1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM1_OFFSET))(this, index);
		}

		::System::Void OnSelectItem2(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM2_OFFSET))(this, index);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::System::Void SetSelectItem(::Class_1_499EDFA3518A0E64* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_SETSELECTITEM_OFFSET))(this, data);
		}

		::System::Void RefreshPayBtnView(::Class_1_499EDFA3518A0E64* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_REFRESHPAYBTNVIEW_OFFSET))(this, data);
		}

		::System::Void InitGeneralToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_INITGENERALTOKEN_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void PayCafe(::Class_1_499EDFA3518A0E64* selectedCafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_PAYCAFE_OFFSET))(this, selectedCafeItem);
		}

		::System::Int32 GetRecoverEnergy(::Class_1_5DA2E7556103D5A3_154* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_154*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_GETRECOVERENERGY_OFFSET))(this, config);
		}

		::System::Void OnDrinkCafe(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONDRINKCAFE_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Void OnUpdateCafeData(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATECAFEDATA_OFFSET))(this, eventArgs);
		}

		::System::Void StartShowGetCafeCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_STARTSHOWGETCAFECUTSCENE_OFFSET))(this);
		}

		::System::Void OnTimelinePerformStart(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONTIMELINEPERFORMSTART_OFFSET))(this, trans);
		}

		::UnityEngine::GameObject* LoadCoffeeCup(::System::String* prefabPath, ::UnityEngine::Transform* parent, ::System::Boolean active)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_LOADCOFFEECUP_OFFSET))(this, prefabPath, parent, active);
		}

		::System::Void OnShowDrinkCafeFinished(::Class_1_499EDFA3518A0E64* cafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONSHOWDRINKCAFEFINISHED_OFFSET))(this, cafeItem);
		}

		::System::Void OnUpdateRewardBuffs(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_ONUPDATEREWARDBUFFS_OFFSET))(this, args);
		}

		::System::Void OpenBuffDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_OPENBUFFDETAIL_OFFSET))(this);
		}

		::System::Void DoReqDrinkCafe(::System::Int32 cafeItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER_DOREQDRINKCAFE_OFFSET))(this, cafeItemID);
		}

		::System::Void _OnCreateView_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__ONCREATEVIEW_B__3_0_OFFSET))(this);
		}

		static ::System::Void _InitInfo_g__Show_6_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__INITINFO_G__SHOW_6_1_OFFSET))();
		}

		::System::Void _OnDrinkCafe_b__20_0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER__ONDRINKCAFE_B__20_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
