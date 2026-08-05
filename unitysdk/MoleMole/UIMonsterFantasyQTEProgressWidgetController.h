#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_22FEBBA7FA4D4D4A_6;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19877840)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198778D0)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19877650)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x19877A20)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19877C80)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19877C20)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19877CC0)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19877D50)
#define MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19877DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyQTEProgressWidgetController_TypeDefinitionIndex = 83616;

	class UIMonsterFantasyQTEProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_ProgressShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyQTEProgressWidgetController_TypeDefinitionIndex)->GetStaticField(0xDD10);
		}
		::Class_2_22FEBBA7FA4D4D4A_6* _view; // 0x2C0
		::UnityEngine::Material* _progressMaterial; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER_UPDATEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
