#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::UI3D { class UI3DVirtualCameraBase; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ACTIVATECAMERA_OFFSET UNITYSDK_OFFSET(0x1B124220)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0x1B124050)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_FINDVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1B123E70)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_ACTIVECAMERAINDEX_OFFSET UNITYSDK_OFFSET(0x1B124510)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_ISSWITCHING_OFFSET UNITYSDK_OFFSET(0x1B1244D0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x1B124480)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x1B124430)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1B123CD0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1B1249F0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_80C81E88F07B0F36_OFFSET UNITYSDK_OFFSET(0x1B124AD0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1B123BD0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B1248D0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_RESETINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B1241A0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETBLEND_OFFSET UNITYSDK_OFFSET(0x1B124140)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETMAINLIGHTDIROFFSET_OFFSET UNITYSDK_OFFSET(0x1B1240D0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETUP_OFFSET UNITYSDK_OFFSET(0x1B123AE0)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SET_ACTIVECAMERAINDEX_OFFSET UNITYSDK_OFFSET(0x1B124640)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B124800)
#define RPG_CLIENT_UI3D_UI3DCAMERABRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B124F20)

namespace RPG::Client::UI3D
{
	inline static constexpr unsigned int UI3DCameraBrain_TypeDefinitionIndex = 78517;

	class UI3DCameraBrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI3D::UI3DVirtualCameraBase*>* _VirtualCameras; // 0x18
		::System::Boolean CKDMGJOMONF; // 0x20
		::System::Boolean AKBAIKCDEHP; // 0x21
		::UnityEngine::Camera* JMIHDACOFOD; // 0x28
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x30
		::RPG::GameCore::GameEntity* FKPHGIAHAEB; // 0x38
		::RPG::GameCore::UI3DVirtualCameraComponent* OCOBMKLPDCN; // 0x40
		::System::Action* GHOGOLKHDEN; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETUP_OFFSET))(this, a1);
		}

		::RPG::Client::UI3D::UI3DVirtualCameraBase* FindVirtualCamera(::System::String* a1)
		{
			return ((::RPG::Client::UI3D::UI3DVirtualCameraBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_FINDVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void EnableMainLightChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ENABLEMAINLIGHTCHANGE_OFFSET))(this, a1);
		}

		::System::Void SetMainLightDirOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETMAINLIGHTDIROFFSET_OFFSET))(this, a1);
		}

		::System::Void SetBlend(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SETBLEND_OFFSET))(this, a1);
		}

		::System::Void ResetInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_RESETINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void ActivateCamera(::RPG::Client::UI3D::UI3DVirtualCameraBase* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI3D::UI3DVirtualCameraBase*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ACTIVATECAMERA_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_VirtualCameraCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_VIRTUALCAMERACOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSwitching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_ISSWITCHING_OFFSET))(this);
		}

		::System::Int32 get_ActiveCameraIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_GET_ACTIVECAMERAINDEX_OFFSET))(this);
		}

		::System::Void set_ActiveCameraIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_SET_ACTIVECAMERAINDEX_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_5_659B881A8763C779()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_659B881A8763C779_OFFSET))(this);
		}

		static ::RPG::GameCore::EntityManager* Method_5_80C81E88F07B0F36()
		{
			return ((::RPG::GameCore::EntityManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_80C81E88F07B0F36_OFFSET))();
		}

		::System::Void Method_5_25EC451C0EA68F53()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_25EC451C0EA68F53_OFFSET))(this);
		}

		::System::Void Method_5_256B6E165124982E(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DCAMERABRAIN_METHOD_5_256B6E165124982E_OFFSET))(this, a1);
		}
	};
}
