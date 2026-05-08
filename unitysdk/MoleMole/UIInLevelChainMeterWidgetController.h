#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_39F1CEBBBCF30652;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_DESTROYFILLMATERIAL_OFFSET UNITYSDK_OFFSET(0x14B58D20)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITFILLMATERIAL_OFFSET UNITYSDK_OFFSET(0x14B59940)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14B58B10)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B58C00)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B58C90)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B58AA0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B58B90)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14B59480)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM02_OFFSET UNITYSDK_OFFSET(0x14B59790)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x14B595E0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHPROGRESSTEXT_OFFSET UNITYSDK_OFFSET(0x14B59130)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14B59260)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B58F10)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B59B80)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B59B20)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM02_B__11_0_OFFSET UNITYSDK_OFFSET(0x14B59C30)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM_B__10_0_OFFSET UNITYSDK_OFFSET(0x14B59BC0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B59C80)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B59D10)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B59DA0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B59E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelChainMeterWidgetController_TypeDefinitionIndex = 77319;

	class UIInLevelChainMeterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_HpPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelChainMeterWidgetController_TypeDefinitionIndex)->GetStaticField(0x10610);
		}
		::Class_2_39F1CEBBBCF30652* _view; // 0x2B8
		::System::Single _curProgress; // 0x2C0
		::System::Single _targetProgress; // 0x2C4
		::System::Boolean _isShow; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle _fadeOutCoroutineHandle; // 0x2CC
		::UnityEngine::Material* _fillMaterial; // 0x2D0
		::System::Boolean _isMax; // 0x2D8
		::System::Boolean _isInitSet; // 0x2D9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Single progress, ::System::Boolean isMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, progress, isMax);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim02()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM02_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitFillMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITFILLMATERIAL_OFFSET))(this);
		}

		::System::Void DestroyFillMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_DESTROYFILLMATERIAL_OFFSET))(this);
		}

		::System::Void RefreshProgressText(::System::Single progress, ::System::Boolean isMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHPROGRESSTEXT_OFFSET))(this, progress, isMax);
		}

		::System::Void _PlayFadeOutAnim_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM_B__10_0_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAnim02_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM02_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
