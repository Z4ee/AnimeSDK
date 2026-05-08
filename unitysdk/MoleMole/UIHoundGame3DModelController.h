#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_23D9BB4D5379D91C_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETENTITYGAME_OFFSET UNITYSDK_OFFSET(0x16078F90)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECAMERA_OFFSET UNITYSDK_OFFSET(0x16079050)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET UNITYSDK_OFFSET(0x16078F30)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16078E30)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16078EC0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16078D20)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0x16078FE0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160790B0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16079120)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160791B0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160791C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGame3DModelController_TypeDefinitionIndex = 79639;

	class UIHoundGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_23D9BB4D5379D91C_6* _view; // 0x358
		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* _viewEntityGame; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetGameCanvas()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET))(this);
		}

		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* GetEntityGame()
		{
			return ((::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETENTITYGAME_OFFSET))(this);
		}

		::System::Void SetGameRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_SETGAMERT_OFFSET))(this, rt);
		}

		::UnityEngine::Camera* GetGameCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
