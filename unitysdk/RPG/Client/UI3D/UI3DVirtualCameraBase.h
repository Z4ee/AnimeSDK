#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class UI3DCameraStateBase; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ADDTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xE312730)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ADD_ACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xE312370)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_BINDCAMERASTATE_OFFSET UNITYSDK_OFFSET(0xE312000)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_CAMERASTATE_OFFSET UNITYSDK_OFFSET(0xE3116C0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE3118D0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE3112D0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_METHOD_5_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE312A30)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE312910)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_REMOVE_ACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xE3123D0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETAUTOFITSCREENENABLED_OFFSET UNITYSDK_OFFSET(0xE3128B0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xE312500)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETFOV_OFFSET UNITYSDK_OFFSET(0xE3125D0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xE312430)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0xE312830)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETSCREENXY_OFFSET UNITYSDK_OFFSET(0xE3127B0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETTRACKEDOFFSET_OFFSET UNITYSDK_OFFSET(0xE3126B0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xE312360)

namespace RPG::Client::UI3D
{
	inline static constexpr unsigned int UI3DVirtualCameraBase_TypeDefinitionIndex = 78520;

	class UI3DVirtualCameraBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Boolean>* ActiveChanged; // 0x18
		::System::String* _Key; // 0x20
		::RPG::GameCore::UI3DCameraStateBase* IECNGOFLCFM; // 0x28
		::System::Boolean FMNEEONAMNO; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_KEY_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraStateBase* get_CameraState()
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_CAMERASTATE_OFFSET))(this);
		}

		::System::Void BindCameraState(::RPG::GameCore::UI3DCameraStateBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraStateBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_BINDCAMERASTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void add_ActiveChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ADD_ACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ActiveChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_REMOVE_ACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETFOV_OFFSET))(this, a1);
		}

		::System::Void SetTrackedOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETTRACKEDOFFSET_OFFSET))(this, a1);
		}

		::System::Void AddTrackedOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ADDTRACKEDOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetScreenXY(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETSCREENXY_OFFSET))(this, a1);
		}

		::System::Void SetOrbitalTransposerFollowOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETORBITALTRANSPOSERFOLLOWOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetAutoFitScreenEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_SETAUTOFITSCREENENABLED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_1B9CC121BDC8766D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERABASE_METHOD_5_1B9CC121BDC8766D_OFFSET))(this, a1);
		}
	};
}
