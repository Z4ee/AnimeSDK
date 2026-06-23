#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_112010DA18517DCB;
class Class_1_1685EC66FBD28897;
class Class_1_61933880828D8052;
class Class_2_7B15B3118FE590CD_14;
class Class_3_7A267C1006DF3527_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ShareBtnContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_COMPAREITEM_OFFSET UNITYSDK_OFFSET(0x186934C0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ENSURERESULTITEMINFOROOT_OFFSET UNITYSDK_OFFSET(0x18693DB0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18693B10)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCLICKDESTORYBTN_OFFSET UNITYSDK_OFFSET(0x18696340)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18693B20)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18694BA0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONSHARETAKECAPTUREEND_OFFSET UNITYSDK_OFFSET(0x18696270)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18694A00)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186948F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18694990)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET UNITYSDK_OFFSET(0x186963E0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x18694EE0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18694420)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_SETRESULTSTATE_OFFSET UNITYSDK_OFFSET(0x186968E0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18694B40)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_WILLSHARETAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x186961A0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18696940)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18696930)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__OPENITEMINFOBESIDEICON_B__25_0_OFFSET UNITYSDK_OFFSET(0x186969F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18696A00)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18696A90)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18696B40)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18696B50)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18696B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController_TypeDefinitionIndex = 60474;

	class UIBangkovResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::Enum_3_01618AD0437C8486_1>** StaticGet_BangkovEquipTypeList()
		{
			return (::Il2CppArray<::Enum_3_01618AD0437C8486_1>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3A190);
		}
		// static const ::System::Single ResultItemInfoGap; // 0x0
		::Class_2_7B15B3118FE590CD_14* _view; // 0x318
		::MoleMole::UIShareBtnWidgetController* _share; // 0x320
		::MoleMole::ShareBtnContext* _shareBtnContext; // 0x328
		::Class_1_112010DA18517DCB* _shareHandler; // 0x330
		::System::Boolean _isWin; // 0x338
		::UnityEngine::RectTransform* _resultItemInfoRoot; // 0x340
		::Class_1_61933880828D8052* _itemInfoHelper; // 0x348
		::System::Boolean IsFinish; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 CompareItem(::Class_1_1685EC66FBD28897* a, ::Class_1_1685EC66FBD28897* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_COMPAREITEM_OFFSET))(this, a, b);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void EnsureResultItemInfoRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ENSURERESULTITEMINFOROOT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET))(this);
		}

		::System::Void WillShareTakeCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_WILLSHARETAKECAPTURE_OFFSET))(this);
		}

		::System::Void OnShareTakeCaptureEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONSHARETAKECAPTUREEND_OFFSET))(this);
		}

		::System::Void OnClickDestoryBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCLICKDESTORYBTN_OFFSET))(this);
		}

		::System::Void OpenItemInfoBesideIcon(::MoleMole::UIItemIconBtnWidgetController* iconController, ::Class_3_7A267C1006DF3527_1* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::Class_3_7A267C1006DF3527_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET))(this, iconController, item);
		}

		::System::Void SetResultState(::System::Boolean isWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_SETRESULTSTATE_OFFSET))(this, isWin);
		}

		::UnityEngine::RectTransform* _OpenItemInfoBesideIcon_b__25_0()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__OPENITEMINFOBESIDEICON_B__25_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
