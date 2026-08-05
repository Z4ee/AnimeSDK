#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_489F32D82235B6BA_2;
class Class_3_A8A051C530035301;
namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeam3DModelController_AvartarSkinData; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_APPLYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x19378650)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193785C0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19377F70)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19379220)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19377C20)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19377EC0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_1_OFFSET UNITYSDK_OFFSET(0x19378700)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_OFFSET UNITYSDK_OFFSET(0x193783F0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19379290)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19379530)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x193795C0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193795D0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193795E0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193795F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeam3DModelController_TypeDefinitionIndex = 90464;

	class UICoopTeam3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Il2CppArray<::MoleMole::UICoopTeam3DModelController_AvartarSkinData*>* debugRoleList; // 0x360
		::Class_2_489F32D82235B6BA_2* _view; // 0x368
		::Il2CppArray<::UnityEngine::Transform*>* _buddyObjs; // 0x370
		::Il2CppArray<::UnityEngine::GameObject*>* _avatarEntities; // 0x378
		::Il2CppArray<::MoleMole::Battle::Entity*>* _avatarEntitiesNew; // 0x380
		::Il2CppArray<::Foundation::AssetPath>* _cachePaths; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void ApplyCameraConfig(::MoleMole::ConfigUICoopTeam3D_CameraConfig* cameraConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_APPLYCAMERACONFIG_OFFSET))(this, cameraConfig);
		}

		::System::Void ShowAvatarInIndex(::System::Int32 slotIndex, ::Class_3_A8A051C530035301* battleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_A8A051C530035301*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_OFFSET))(this, slotIndex, battleInfo);
		}

		::System::Void ShowAvatarInIndex_1(::System::Int32 slotIndex, ::System::Int32 avatarId, ::System::Int32 skinId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_1_OFFSET))(this, slotIndex, avatarId, skinId);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
