#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_112010DA18517DCB;
class Class_1_1685EC66FBD28897;
class Class_1_61933880828D8052;
class Class_2_7B15B3118FE590CD_7;
class Class_3_7A267C1006DF3527;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ShareBtnContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_COMPAREITEM_OFFSET UNITYSDK_OFFSET(0x16EC9E30)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ENSURERESULTITEMINFOROOT_OFFSET UNITYSDK_OFFSET(0x16ECA700)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16ECA460)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCLICKDESTORYBTN_OFFSET UNITYSDK_OFFSET(0x16ECC8F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECA470)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16ECB4C0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONSHARETAKECAPTUREEND_OFFSET UNITYSDK_OFFSET(0x16ECC820)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECB380)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECB270)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ECB310)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET UNITYSDK_OFFSET(0x16ECC980)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x16ECB800)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16ECAD70)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_SETRESULTSTATE_OFFSET UNITYSDK_OFFSET(0x16ECCE80)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16ECB460)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_WILLSHARETAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x16ECC750)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECCEE0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECCED0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__OPENITEMINFOBESIDEICON_B__24_0_OFFSET UNITYSDK_OFFSET(0x16ECCF90)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECCFA0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16ECD030)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECD0E0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECD0F0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ECD100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController_TypeDefinitionIndex = 40901;

	class UIBangkovResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::Enum_3_01618AD0437C8486>** StaticGet_BangkovEquipTypeList()
		{
			return (::Il2CppArray<::Enum_3_01618AD0437C8486>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x37CA0);
		}
		// static const ::System::Single ResultItemInfoGap; // 0x0
		::Class_2_7B15B3118FE590CD_7* _view; // 0x310
		::MoleMole::UIShareBtnWidgetController* _share; // 0x318
		::MoleMole::ShareBtnContext* _shareBtnContext; // 0x320
		::Class_1_112010DA18517DCB* _shareHandler; // 0x328
		::System::Boolean _isWin; // 0x330
		::UnityEngine::RectTransform* _resultItemInfoRoot; // 0x338
		::Class_1_61933880828D8052* _itemInfoHelper; // 0x340

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

		::System::Void OpenItemInfoBesideIcon(::MoleMole::UIItemIconBtnWidgetController* iconController, ::Class_3_7A267C1006DF3527* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::Class_3_7A267C1006DF3527*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_OPENITEMINFOBESIDEICON_OFFSET))(this, iconController, item);
		}

		::System::Void SetResultState(::System::Boolean isWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER_SETRESULTSTATE_OFFSET))(this, isWin);
		}

		::UnityEngine::RectTransform* _OpenItemInfoBesideIcon_b__24_0()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER__OPENITEMINFOBESIDEICON_B__24_0_OFFSET))(this);
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
