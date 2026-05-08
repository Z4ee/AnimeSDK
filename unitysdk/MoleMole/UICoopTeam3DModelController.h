#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_489F32D82235B6BA_1;
class Class_3_A8A051C530035301;
namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeam3DModelController_AvartarSkinData; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_APPLYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x14ECC6D0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14ECC640)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14ECBFF0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14ECD2A0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14ECBCA0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14ECBF40)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_1_OFFSET UNITYSDK_OFFSET(0x14ECC780)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_SHOWAVATARININDEX_OFFSET UNITYSDK_OFFSET(0x14ECC470)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECD310)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14ECD5B0)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14ECD640)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14ECD650)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14ECD660)
#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14ECD670)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeam3DModelController_TypeDefinitionIndex = 51816;

	class UICoopTeam3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Il2CppArray<::MoleMole::UICoopTeam3DModelController_AvartarSkinData*>* debugRoleList; // 0x358
		::Class_2_489F32D82235B6BA_1* _view; // 0x360
		::Il2CppArray<::UnityEngine::Transform*>* _buddyObjs; // 0x368
		::Il2CppArray<::UnityEngine::GameObject*>* _avatarEntities; // 0x370
		::Il2CppArray<::MoleMole::Battle::Entity*>* _avatarEntitiesNew; // 0x378
		::Il2CppArray<::Foundation::AssetPath>* _cachePaths; // 0x380

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
