#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

class Class_2_954ED73DC0C031B6;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x156D46E0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x156D4730)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CONTROLROOT_OFFSET UNITYSDK_OFFSET(0x156D4710)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_MODELROOT_OFFSET UNITYSDK_OFFSET(0x156D46F0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x156D4750)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x156D46D0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x156D5510)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITMODELTRANS_OFFSET UNITYSDK_OFFSET(0x156D4C40)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D4ED0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D4F60)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156D4760)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156D4E80)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_SHOWCAMERA_OFFSET UNITYSDK_OFFSET(0x156D5B60)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156D5C60)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156D5BF0)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D5C70)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D5D00)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156D5D10)
#define MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156D5D20)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracle3D3DModelController_TypeDefinitionIndex = 71805;

	class UITriDiceOracle3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_RTWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracle3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12760);
		}
		// static const ::System::Int32 DiceAnimatorIndex = 0xD; // 0x0
		// static const ::System::Int32 CasketAnimatorIndex = 0xE; // 0x0
		// static const ::System::String* casketPath; // 0x0
		// static const ::System::String* dicePath; // 0x0
		::Class_2_954ED73DC0C031B6* _view; // 0x360
		::UnityEngine::NAPRenderPipeline0::RTHandle* _rt; // 0x368
		::UnityEngine::GameObject* ModelGameObject; // 0x370
		::MoleMole::Battle::Entity* ModelEntity; // 0x378
		::UnityEngine::GameObject* DiceGameObject; // 0x380
		::MoleMole::Battle::Entity* DiceEntity; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::CameraRenderType get_CameraRenderType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERARENDERTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ModelRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_MODELROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ControlRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CONTROLROOT_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_CAMERA_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitModelTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITMODELTRANS_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitCamera(::Class_2_CA67A9CEB871FFD3* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_INITCAMERA_OFFSET))(this, target);
		}

		::System::Void ShowCamera(::Class_2_CA67A9CEB871FFD3* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER_SHOWCAMERA_OFFSET))(this, target);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLE3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
