#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_23D9BB4D5379D91C_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET UNITYSDK_OFFSET(0x178FA2E0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178FA170)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178FA200)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178FA0E0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178FA120)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0x178FA270)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178FA340)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178FA3B0)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178FA440)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178FA450)
#define MOLEMOLE_UISNAKEGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178FA460)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeGame3DModelController_TypeDefinitionIndex = 65281;

	class UISnakeGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_23D9BB4D5379D91C_6* _view; // 0x360

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
