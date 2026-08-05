#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_8DBA912CD2CB0BD5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x19AA31C0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_LOADCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x19AA2500)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19AA2C40)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19AA3150)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19AA2270)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19AA2BF0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCAMERA_OFFSET UNITYSDK_OFFSET(0x19AA2CD0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x19AA32D0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_UNLOADCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x19AA33C0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AA35E0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA3570)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x19AA36A0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19AA36E0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19AA3770)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19AA3780)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19AA3790)

namespace MoleMole
{
	inline static constexpr unsigned int UICoffeeshop3D3DModelController_TypeDefinitionIndex = 49854;

	class UICoffeeshop3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_CoffeeDynamicHideKey()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoffeeshop3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x3CF50);
		}
		::Class_2_8DBA912CD2CB0BD5* _view; // 0x360
		::System::String* _cutSceneCoffeeCupPrefabPath; // 0x368
		::UnityEngine::GameObject* _cutSceneCoffeeCup; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* SetCoffeeCup(::System::String* prefabPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCOFFEECUP_OFFSET))(this, prefabPath);
		}

		::System::Void UnloadCoffeeCup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_UNLOADCOFFEECUP_OFFSET))(this);
		}

		::System::Void SetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadCoffeeCup(::System::String* prefabPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_LOADCOFFEECUP_OFFSET))(this, prefabPath);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
