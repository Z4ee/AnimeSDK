#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_39F1CEBBBCF30652;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_DESTROYFILLMATERIAL_OFFSET UNITYSDK_OFFSET(0x18147CC0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITFILLMATERIAL_OFFSET UNITYSDK_OFFSET(0x181488E0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18147AB0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18147BA0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18147C30)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18147A40)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18147B30)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x18148420)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM02_OFFSET UNITYSDK_OFFSET(0x18148730)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x18148580)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHPROGRESSTEXT_OFFSET UNITYSDK_OFFSET(0x181480D0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18148200)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18147EB0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18148B20)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18148AC0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM02_B__11_0_OFFSET UNITYSDK_OFFSET(0x18148BD0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER__PLAYFADEOUTANIM_B__10_0_OFFSET UNITYSDK_OFFSET(0x18148B60)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18148C20)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18148CB0)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18148D40)
#define MOLEMOLE_UIINLEVELCHAINMETERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18148DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelChainMeterWidgetController_TypeDefinitionIndex = 41763;

	class UIInLevelChainMeterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_HpPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelChainMeterWidgetController_TypeDefinitionIndex)->GetStaticField(0x11C20);
		}
		::Class_2_39F1CEBBBCF30652* _view; // 0x2C0
		::System::Single _curProgress; // 0x2C8
		::System::Single _targetProgress; // 0x2CC
		::System::Boolean _isShow; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _fadeOutCoroutineHandle; // 0x2D4
		::UnityEngine::Material* _fillMaterial; // 0x2D8
		::System::Boolean _isMax; // 0x2E0
		::System::Boolean _isInitSet; // 0x2E1

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
