#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UIAbyssS2InlevelMapAreaWidgetController_RefreshMapAnimType.h"
#include "unitysdk/MoleMole/UIAbyssS2InlevelMapAreaWidgetController___c__DisplayClass14_0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A7242B703AFC523C;
class Class_1_B2B5D28F2FE8EF9A;
class Class_1_B4AE378CE6101FF8;
class Class_1_C2F125D07BC8601B;
class Class_1_DB93642952C1FDC1;
class Class_1_E49938F4BFE74407;
class Class_1_F7BBD9FC6755D5A6;
class Class_2_208CC9941471731A_1014;
class Class_2_208CC9941471731A_19;
class Class_2_8469E7523673A92C_12;
class Class_2_E621E51D351EB960_1;
namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_BUILDMAPLAYER_OFFSET UNITYSDK_OFFSET(0x1A1CEDC0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEALLAREAINFO_OFFSET UNITYSDK_OFFSET(0x1A1CE3C0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEDRAWER_OFFSET UNITYSDK_OFFSET(0x1A1CF470)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEEXISTAREAINFO_OFFSET UNITYSDK_OFFSET(0x1A1CD940)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEGRAPHDRAWER_OFFSET UNITYSDK_OFFSET(0x1A1CF3C0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEICONTIPINFOS_OFFSET UNITYSDK_OFFSET(0x1A1CD170)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEICONTIPINFO_OFFSET UNITYSDK_OFFSET(0x1A1CE2E0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_FILTERANDSORTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1A1CCC60)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GETABYSSS2MODEL_OFFSET UNITYSDK_OFFSET(0x1A1CF520)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GETLAYERNODES_OFFSET UNITYSDK_OFFSET(0x1A1CEF40)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GET_CACHEDETAILTIPS_OFFSET UNITYSDK_OFFSET(0x1A1CF620)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITICONTIPS_OFFSET UNITYSDK_OFFSET(0x1A1CC940)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAPDETAILTIPS_OFFSET UNITYSDK_OFFSET(0x1A1CEB30)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAPICONTIPS_OFFSET UNITYSDK_OFFSET(0x1A1CE8A0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAP_OFFSET UNITYSDK_OFFSET(0x1A1CBF50)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITUIWITHICONTIPS_OFFSET UNITYSDK_OFFSET(0x1A1CD670)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A1CCB50)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONDETAILBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1A1CEC50)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A1CBFB0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1CCBE0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A1CBE20)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A1CBE80)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PLAYREFRESHMAPANIM_OFFSET UNITYSDK_OFFSET(0x1A1CCAA0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PRINTLINE_OFFSET UNITYSDK_OFFSET(0x1A1CC510)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PRINTNODE_OFFSET UNITYSDK_OFFSET(0x1A1CC3E0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PROCESSSPECIALLAYER_OFFSET UNITYSDK_OFFSET(0x1A1CF0E0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x1A1CC080)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_SETMAPSCROLLPOS_OFFSET UNITYSDK_OFFSET(0x1A1CC5D0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CREATEDRAWER_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A1CF7B0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CREATEEXISTAREAINFO_G__PROCESSNODE_14_0_OFFSET UNITYSDK_OFFSET(0x1A1CE210)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CF630)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A1CFA10)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A1CFAA0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1CFB40)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A1CFBD0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A1CFC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapAreaWidgetController_TypeDefinitionIndex = 60807;

	class UIAbyssS2InlevelMapAreaWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8469E7523673A92C_12* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* _iconTips; // 0x2C8
		::Class_1_C2F125D07BC8601B* _mapDrawInfo; // 0x2D0
		::System::Boolean _hasInitMap; // 0x2D8
		::Class_1_B4AE378CE6101FF8* _mapLineGenerator; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* _cacheDetailTips; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _cacheMapInfoRowWidget; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAP_OFFSET))(this);
		}

		::System::Void RefreshMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_REFRESHMAP_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayRefreshMapAnim(::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_RefreshMapAnimType refreshMapAnimType, ::System::Threading::CancellationToken ct)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_RefreshMapAnimType, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PLAYREFRESHMAPANIM_OFFSET))(this, refreshMapAnimType, ct);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetMapScrollPos(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_SETMAPSCROLLPOS_OFFSET))(this, abyssMapInfo);
		}

		::System::Void InitIconTips(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITICONTIPS_OFFSET))(this, abyssMapInfo);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* CreateExistAreaInfo(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEEXISTAREAINFO_OFFSET))(this, abyssMapInfo);
		}

		::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo* CreateIconTipInfo(::Class_2_208CC9941471731A_1014* buff)
		{
			return ((::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*(*)(::PVOID, ::Class_2_208CC9941471731A_1014*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEICONTIPINFO_OFFSET))(this, buff);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* CreateAllAreaInfo()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEALLAREAINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_19*>* FilterAndSortConfigs(::System::Collections::Generic::IEnumerable_1<::Class_2_208CC9941471731A_19*>* configs)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_19*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_2_208CC9941471731A_19*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_FILTERANDSORTCONFIGS_OFFSET))(this, configs);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* CreateIconTipInfos(::System::Collections::Generic::IEnumerable_1<::Class_2_208CC9941471731A_19*>* configs)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_2_208CC9941471731A_19*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEICONTIPINFOS_OFFSET))(this, configs);
		}

		::System::Void InitUIWithIconTips(::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* iconTips, ::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITUIWITHICONTIPS_OFFSET))(this, iconTips, abyssMapInfo);
		}

		::System::Void InitMapDetailTips(::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* iconTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAPDETAILTIPS_OFFSET))(this, iconTips);
		}

		::System::Void OnDetailBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ONDETAILBTNCLICKED_OFFSET))(this);
		}

		::System::Void InitMapIconTips(::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* iconTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_INITMAPICONTIPS_OFFSET))(this, iconTips);
		}

		::System::Void PrintNode(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PRINTNODE_OFFSET))(this, abyssMapInfo);
		}

		::Class_1_A7242B703AFC523C* BuildMapLayer(::System::Int32 x, ::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::Class_1_A7242B703AFC523C*(*)(::PVOID, ::System::Int32, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_BUILDMAPLAYER_OFFSET))(this, x, abyssMapInfo);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>* GetLayerNodes(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo, ::System::Int32 x)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>*(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GETLAYERNODES_OFFSET))(this, abyssMapInfo, x);
		}

		::System::Void ProcessSpecialLayer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>* tempNodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PROCESSSPECIALLAYER_OFFSET))(this, tempNodes);
		}

		::System::Void PrintLine(::Class_1_B2B5D28F2FE8EF9A* abyssMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_PRINTLINE_OFFSET))(this, abyssMapInfo);
		}

		::Class_1_F7BBD9FC6755D5A6* CreateDrawer()
		{
			return ((::Class_1_F7BBD9FC6755D5A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEDRAWER_OFFSET))(this);
		}

		::Class_1_DB93642952C1FDC1* CreateGraphDrawer()
		{
			return ((::Class_1_DB93642952C1FDC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_CREATEGRAPHDRAWER_OFFSET))(this);
		}

		::Class_2_E621E51D351EB960_1* GetAbyssS2Model()
		{
			return ((::Class_2_E621E51D351EB960_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GETABYSSS2MODEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>* get_CacheDetailTips()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_GET_CACHEDETAILTIPS_OFFSET))(this);
		}

		::System::Void _CreateExistAreaInfo_g__ProcessNode_14_0(::System::Int32 indexId, ::MoleMole::UIAbyssS2InlevelMapAreaWidgetController___c__DisplayClass14_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIAbyssS2InlevelMapAreaWidgetController___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CREATEEXISTAREAINFO_G__PROCESSNODE_14_0_OFFSET))(this, indexId, a2);
		}

		::UnityEngine::GameObject* _CreateDrawer_b__28_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__CREATEDRAWER_B__28_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
