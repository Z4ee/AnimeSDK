#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_585;
class Class_2_1824EF69C8E376A3;
class Class_2_3EE9E219E96FD648;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATEITEMROW_1_OFFSET UNITYSDK_OFFSET(0x190D5BB0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET UNITYSDK_OFFSET(0x190D52E0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET UNITYSDK_OFFSET(0x190D54F0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET UNITYSDK_OFFSET(0x190D5B00)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x190D39E0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x190D39D0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D5C60)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x190D5820)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x190D5710)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONTOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0x190D4AB0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D5CF0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D39F0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190D3EF0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x190D4690)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190D4D40)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x190D4380)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D5D60)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D5E40)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x190D5ED0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D5F80)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D5F90)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190D5FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLineupPopWindowController_TypeDefinitionIndex = 85755;

	class UIAbyssLineupPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* PotentialBtnKey; // 0x0
		// static const ::System::String* UpgradeBtnKey; // 0x0
		// static const ::System::String* PotentialBtnIconPath; // 0x0
		// static const ::System::String* UpgradeBtnIconPath; // 0x0
		::Class_2_3EE9E219E96FD648* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*>* _backData; // 0x320
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_585*>* _itemCtrl; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _avatarList; // 0x330
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _avatarItemList; // 0x338
		::System::Collections::Generic::List_1<::Enum_3_80565EDC4420BFE0>* _buildTypeList; // 0x340
		::System::Int32 _currSelectIndex; // 0x348
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* _toggle; // 0x350
		::Class_2_1824EF69C8E376A3* CurDisPlayAvatarItem; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnToggleValue(::System::Boolean arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONTOGGLEVALUE_OFFSET))(this, arg1);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CreateItemRow(::System::Collections::Generic::List_1<::System::Int32>* relicList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATEITEMROW_OFFSET))(this, relicList);
		}

		::System::Void CreateRelicRow(::System::Collections::Generic::List_1<::System::Int32>* relicList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATERELICROW_OFFSET))(this, relicList);
		}

		::System::Void OnLevelClickHandle(::MoleMole::ScrollViewItemWidgetController* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTitleRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATETITLEROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemRow_1(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_CREATEITEMROW_1_OFFSET))(this, arg);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
