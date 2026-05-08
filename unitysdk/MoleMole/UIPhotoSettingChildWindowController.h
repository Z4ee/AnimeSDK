#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_67693CAD6D4923AA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_139;
class Class_1_016CB5CE722D8D8A;
class Class_1_03687BAE461D2A08;
class Class_1_0534849F53467236;
class Class_1_730A101C592B37EC;
class Class_2_5A5C316BDA7D0E0C;
class Class_2_79AE422BA06F6D26_6;
class MonoUITableScrollV2;
namespace MoleMole { class PhotoSettingContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPhotoStickerRowWidgetController_Data; }
namespace MoleMole { class UIStickerShowWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
template <typename T> class Class_1_3DF236F531F5694C;
template <typename T> class Class_1_A77F502E8C0ED2E2;

#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x13FE9650)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_COMPARISONFRAME_OFFSET UNITYSDK_OFFSET(0x13FE8B20)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_COMPARISON_OFFSET UNITYSDK_OFFSET(0x13FEB700)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x13FE95E0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_FINDTABINDEX_OFFSET UNITYSDK_OFFSET(0x13FEC9E0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETCUSTOMBINDER_OFFSET UNITYSDK_OFFSET(0x13FE8E20)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETFRAMEFROMID_OFFSET UNITYSDK_OFFSET(0x13FE8A60)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETSELFIEMOTIONFROMID_OFFSET UNITYSDK_OFFSET(0x13FE8110)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETVOLUMEFROMID_OFFSET UNITYSDK_OFFSET(0x13FED3E0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GET_ISSHOWFRONTANIMATION_OFFSET UNITYSDK_OFFSET(0x13FE73E0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13FED520)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITANIMATION_OFFSET UNITYSDK_OFFSET(0x13FE75A0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITFRAME_OFFSET UNITYSDK_OFFSET(0x13FE8250)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITSTICKER_OFFSET UNITYSDK_OFFSET(0x13FE8EC0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x13FEBAB0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITVOLUME_OFFSET UNITYSDK_OFFSET(0x13FECF80)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x13FEA580)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_MASKPOINTUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x13FE9DE0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x13FE9D90)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONCLICKSTICKER_OFFSET UNITYSDK_OFFSET(0x13FEA680)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FED730)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONFRAMECLICKED_OFFSET UNITYSDK_OFFSET(0x13FE83C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONFRAMESELECTED_OFFSET UNITYSDK_OFFSET(0x13FE8490)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13FED970)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13FEB9C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSELFIEMOTIONCLICKED_OFFSET UNITYSDK_OFFSET(0x13FE7710)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSELFIEMOTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x13FE77E0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13FED830)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSTARTDRAGOUTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x13FEAD10)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0x13FEBD20)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0x13FEBDF0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FED7C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FED530)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13FED6C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONVOLUMECLICKED_OFFSET UNITYSDK_OFFSET(0x13FED0F0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONVOLUMESELECTED_OFFSET UNITYSDK_OFFSET(0x13FED1C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHFRAMEDATA_OFFSET UNITYSDK_OFFSET(0x13FE8690)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHFRAMESELECTED_OFFSET UNITYSDK_OFFSET(0x13FE8DA0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSELFIEMOTIONDATA_OFFSET UNITYSDK_OFFSET(0x13FE7AE0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSELFIEMOTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x13FE81D0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSTICKERDATA_OFFSET UNITYSDK_OFFSET(0x13FEA940)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHTABDATA_OFFSET UNITYSDK_OFFSET(0x13FEC3C0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x13FECAA0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHVOLUMESELECTED_OFFSET UNITYSDK_OFFSET(0x13FED4A0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWFILTER_OFFSET UNITYSDK_OFFSET(0x13FED240)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWFRAME_OFFSET UNITYSDK_OFFSET(0x13FE84F0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWMOTION_OFFSET UNITYSDK_OFFSET(0x13FE7940)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWTABUI_OFFSET UNITYSDK_OFFSET(0x13FED920)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x13FEBE50)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWUNLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x13FE7860)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FEDCC0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FED9D0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__INITSTICKER_B__30_0_OFFSET UNITYSDK_OFFSET(0x13FEDD40)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_GETCUSTOMBINDER_OFFSET UNITYSDK_OFFSET(0x13FEDD50)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x13FEDDF0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FEDE80)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13FEDF10)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x13FEDFA0)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13FEE050)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FEE060)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FEE070)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13FEE080)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoSettingChildWindowController_TypeDefinitionIndex = 38276;

	class UIPhotoSettingChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_PhotoSettingTabIcon_Volume()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoSettingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x42110);
		}
		static ::System::String** StaticGet_PhotoSettingTabIcon_Sticker()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoSettingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x42118);
		}
		static ::System::String** StaticGet_PhotoSettingTabIcon_Animation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoSettingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x42120);
		}
		static ::System::String** StaticGet_PhotoSettingTabIcon_Frame()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoSettingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x42128);
		}
		static ::System::String** StaticGet_PhotoSettingTabIcon_Setting()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoSettingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x42130);
		}
		::Class_1_A77F502E8C0ED2E2<::Class_1_730A101C592B37EC*>* _selfieMotionContainer; // 0x310
		::MonoUITableScrollV2* _selfieMotionScrollView; // 0x318
		::System::Collections::Generic::List_1<::Class_1_730A101C592B37EC*>* selfieMotionDatas; // 0x320
		::Class_1_A77F502E8C0ED2E2<::Class_1_0534849F53467236*>* _frameContainer; // 0x328
		::MonoUITableScrollV2* _frameScrollView; // 0x330
		::System::Collections::Generic::List_1<::Class_1_0534849F53467236*>* _frameDatas; // 0x338
		::Class_2_5A5C316BDA7D0E0C* _binder; // 0x340
		::Class_1_3DF236F531F5694C<::MoleMole::UIPhotoStickerRowWidgetController_Data*>* _stickerList; // 0x348
		::System::Func_1<::System::Collections::Generic::IList_1<::MoleMole::UIStickerShowWidgetController*>*>* _getActiveStickerWidgetCtrlList; // 0x350
		::System::Func_2<::MoleMole::InputActionEvent, ::System::Boolean>* _onInputActiveHandle; // 0x358
		::System::Func_1<::UnityEngine::RectTransform*>* _getStickerRoot; // 0x360
		::System::Boolean _isDraging; // 0x368
		::Class_1_A77F502E8C0ED2E2<::Class_1_016CB5CE722D8D8A*>* _tabContainer; // 0x370
		::MonoUITableScrollV2* _tab_ScrollView; // 0x378
		::System::Collections::Generic::List_1<::Class_1_016CB5CE722D8D8A*>* _tabDatas; // 0x380
		::Class_1_016CB5CE722D8D8A* _oldTabData; // 0x388
		::Class_1_016CB5CE722D8D8A* VolumeTabData; // 0x390
		::Class_1_016CB5CE722D8D8A* AnimationTabData; // 0x398
		::Class_1_016CB5CE722D8D8A* FrameTabData; // 0x3A0
		::Class_1_016CB5CE722D8D8A* StickerTabData; // 0x3A8
		::Class_1_A77F502E8C0ED2E2<::Class_1_03687BAE461D2A08*>* _volumeContainer; // 0x3B0
		::MonoUITableScrollV2* _volume_ScrollView; // 0x3B8
		::System::Int32 _curVolumeIndex; // 0x3C0
		::System::Int32 _curSelectVolumeIndex; // 0x3C4
		::System::Collections::Generic::List_1<::Class_1_03687BAE461D2A08*>* _volumeDatas; // 0x3C8
		::Class_2_79AE422BA06F6D26_6* _view; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsShowFrontAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GET_ISSHOWFRONTANIMATION_OFFSET))(this);
		}

		::System::Void InitAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITANIMATION_OFFSET))(this);
		}

		::System::Void OnSelfieMotionClicked(::System::Int32 index, ::Class_1_730A101C592B37EC* motion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_730A101C592B37EC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSELFIEMOTIONCLICKED_OFFSET))(this, index, motion);
		}

		::System::Void OnSelfieMotionSelected(::System::Int32 index, ::Class_1_730A101C592B37EC* motion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_730A101C592B37EC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSELFIEMOTIONSELECTED_OFFSET))(this, index, motion);
		}

		::System::Void RefreshSelfieMotionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSELFIEMOTIONDATA_OFFSET))(this);
		}

		::System::Void ShowMotion(::Class_1_730A101C592B37EC* motion)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_730A101C592B37EC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWMOTION_OFFSET))(this, motion);
		}

		::System::Void RefreshSelfieMotionSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSELFIEMOTIONSELECTED_OFFSET))(this);
		}

		::Class_1_730A101C592B37EC* GetSelfieMotionFromID(::System::Int32 ID)
		{
			return ((::Class_1_730A101C592B37EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETSELFIEMOTIONFROMID_OFFSET))(this, ID);
		}

		::System::Void InitFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITFRAME_OFFSET))(this);
		}

		::System::Void OnFrameClicked(::System::Int32 index, ::Class_1_0534849F53467236* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_0534849F53467236*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONFRAMECLICKED_OFFSET))(this, index, filter);
		}

		::System::Void OnFrameSelected(::System::Int32 index, ::Class_1_0534849F53467236* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_0534849F53467236*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONFRAMESELECTED_OFFSET))(this, index, filter);
		}

		::System::Void RefreshFrameData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHFRAMEDATA_OFFSET))(this);
		}

		::System::Int32 ComparisonFrame(::Class_1_0534849F53467236* x, ::Class_1_0534849F53467236* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0534849F53467236*, ::Class_1_0534849F53467236*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_COMPARISONFRAME_OFFSET))(this, x, y);
		}

		::System::Void ShowFrame(::Class_1_0534849F53467236* frame)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0534849F53467236*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWFRAME_OFFSET))(this, frame);
		}

		::System::Void RefreshFrameSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHFRAMESELECTED_OFFSET))(this);
		}

		::Class_1_0534849F53467236* GetFrameFromID(::System::Int32 ID)
		{
			return ((::Class_1_0534849F53467236*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETFRAMEFROMID_OFFSET))(this, ID);
		}

		::Class_0_16E4307DCC419505_139* GetCustomBinder()
		{
			return ((::Class_0_16E4307DCC419505_139*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETCUSTOMBINDER_OFFSET))(this);
		}

		::System::Void InitSticker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITSTICKER_OFFSET))(this);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventData, wordlPoint);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventData, worldPoint);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void MaskPointUpCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_MASKPOINTUPCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void OnClickSticker(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONCLICKSTICKER_OFFSET))(this, index);
		}

		::System::Void RefreshStickerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHSTICKERDATA_OFFSET))(this);
		}

		::System::Void OnStartDragOutScrollView(::System::Int32 index, ::UnityEngine::Vector3 screenPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSTARTDRAGOUTSCROLLVIEW_OFFSET))(this, index, screenPoint);
		}

		::System::Int32 Comparison(::MoleMole::UIPhotoStickerRowWidgetController_Data* x, ::MoleMole::UIPhotoStickerRowWidgetController_Data* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIPhotoStickerRowWidgetController_Data*, ::MoleMole::UIPhotoStickerRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_COMPARISON_OFFSET))(this, x, y);
		}

		::System::Boolean OnPreInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONPREINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Void OnTabClicked(::System::Int32 index, ::Class_1_016CB5CE722D8D8A* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_016CB5CE722D8D8A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONTABCLICKED_OFFSET))(this, index, data);
		}

		::System::Void OnTabSelected(::System::Int32 index, ::Class_1_016CB5CE722D8D8A* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_016CB5CE722D8D8A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONTABSELECTED_OFFSET))(this, index, data);
		}

		::System::Void RefreshTabData(::MoleMole::PhotoSettingContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::PhotoSettingContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHTABDATA_OFFSET))(this, context);
		}

		::System::Int32 FindTabIndex(::Enum_3_67693CAD6D4923AA tabType)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_67693CAD6D4923AA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_FINDTABINDEX_OFFSET))(this, tabType);
		}

		::System::Void ShowTab(::Class_1_016CB5CE722D8D8A* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_016CB5CE722D8D8A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWTAB_OFFSET))(this, tabData);
		}

		::System::Void InitVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_INITVOLUME_OFFSET))(this);
		}

		::System::Void OnVolumeClicked(::System::Int32 index, ::Class_1_03687BAE461D2A08* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_03687BAE461D2A08*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONVOLUMECLICKED_OFFSET))(this, index, filter);
		}

		::System::Void OnVolumeSelected(::System::Int32 index, ::Class_1_03687BAE461D2A08* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_03687BAE461D2A08*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONVOLUMESELECTED_OFFSET))(this, index, filter);
		}

		::System::Void RefreshVolumeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHVOLUMEDATA_OFFSET))(this);
		}

		::Class_1_03687BAE461D2A08* GetVolumeFromID(::System::Int32 volumeProfileID)
		{
			return ((::Class_1_03687BAE461D2A08*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GETVOLUMEFROMID_OFFSET))(this, volumeProfileID);
		}

		::System::Void ShowFilter(::Class_1_03687BAE461D2A08* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03687BAE461D2A08*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWFILTER_OFFSET))(this, filter);
		}

		::System::Void RefreshVolumeSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_REFRESHVOLUMESELECTED_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void ShowTabUI(::MoleMole::PhotoSettingContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::PhotoSettingContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWTABUI_OFFSET))(this, context);
		}

		::System::Void ShowUnlockTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER_SHOWUNLOCKTIPS_OFFSET))(this);
		}

		::System::Collections::IEnumerable* _InitSticker_b__30_0()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER__INITSTICKER_B__30_0_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_139* __base_GetCustomBinder()
		{
			return ((::Class_0_16E4307DCC419505_139*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_GETCUSTOMBINDER_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnPreInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONPREINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
