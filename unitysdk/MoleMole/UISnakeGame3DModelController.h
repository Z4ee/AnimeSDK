#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_23D9BB4D5379D91C_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET UNITYSDK_OFFSET(0x18874F30)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18874DC0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18874E50)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18874D30)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18874D70)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0x18874EC0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18874F90)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18875000)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18875090)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188750A0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188750B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeGame3DModelController_TypeDefinitionIndex = 88706;

	class UISnakeGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_23D9BB4D5379D91C_7* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetGameRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_SETGAMERT_OFFSET))(this, rt);
		}

		::UnityEngine::Transform* GetGameCanvas()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
