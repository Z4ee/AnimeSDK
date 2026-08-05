#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_175;
class Class_1_112010DA18517DCB;
class Class_1_1685EC66FBD28897;
class Class_1_358E07D5792C2681;
class Class_2_79F6D62CE30E3F8E_77;
class Class_3_0D78EA91F90092C6;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ShareBtnContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_COMPAREITEM_OFFSET UNITYSDK_OFFSET(0x19A81D60)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ENSURERESULTITEMINFOROOT_OFFSET UNITYSDK_OFFSET(0x19A82660)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19A823C0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCLICKDESTORYBTN_OFFSET UNITYSDK_OFFSET(0x19A84B70)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A823D0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19A83460)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONSHARETAKECAPTUREEND_OFFSET UNITYSDK_OFFSET(0x19A84AA0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A832C0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A831B0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A83250)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET UNITYSDK_OFFSET(0x19A84C10)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x19A837A0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A82CD0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_SETRESULTSTATE_OFFSET UNITYSDK_OFFSET(0x19A85090)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19A83400)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_WILLSHARETAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x19A849D0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A850F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A850E0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__OPENITEMINFOBESIDEICON_B__25_0_OFFSET UNITYSDK_OFFSET(0x19A851A0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A851B0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19A85240)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A852F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A85300)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A85310)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController_TypeDefinitionIndex = 48498;

	class UIBangkovResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::Enum_3_01618AD0437C8486>** StaticGet_BangkovEquipTypeList()
		{
			return (::Il2CppArray<::Enum_3_01618AD0437C8486>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3CF10);
		}
		// static const ::System::Single ResultItemInfoGap; // 0x0
		::Class_2_79F6D62CE30E3F8E_77* _view; // 0x318
		::MoleMole::UIShareBtnWidgetController* _share; // 0x320
		::MoleMole::ShareBtnContext* _shareBtnContext; // 0x328
		::Class_1_112010DA18517DCB* _shareHandler; // 0x330
		::System::Boolean _isWin; // 0x338
		::UnityEngine::RectTransform* _resultItemInfoRoot; // 0x340
		::Class_1_358E07D5792C2681* _itemInfoHelper; // 0x348
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

		::System::Void OpenItemInfoBesideIcon(::Class_0_16E4307DCC419505_175* iconController, ::Class_3_0D78EA91F90092C6* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::Class_3_0D78EA91F90092C6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET))(this, iconController, item);
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
