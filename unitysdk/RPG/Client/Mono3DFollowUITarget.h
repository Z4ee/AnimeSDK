#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONO3DFOLLOWUITARGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E283E0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET_GET_CAMERA3D_OFFSET UNITYSDK_OFFSET(0x19E283C0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x19E283A0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E28520)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET_SET_CAMERA3D_OFFSET UNITYSDK_OFFSET(0x19E283D0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x19E283B0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19E28860)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET__INIT_OFFSET UNITYSDK_OFFSET(0x19E28490)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET__REINITWITHCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x19E287B0)
#define RPG_CLIENT_MONO3DFOLLOWUITARGET__TRYUPDATEFOLLOWING_OFFSET UNITYSDK_OFFSET(0x19E28570)

namespace RPG::Client
{
	inline static constexpr unsigned int Mono3DFollowUITarget_TypeDefinitionIndex = 68922;

	class Mono3DFollowUITarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _FollowTarget_k__BackingField; // 0x18
		::UnityEngine::Camera* _Camera3D_k__BackingField; // 0x20
		::UnityEngine::Vector3 _OriginalPosition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_FollowTarget()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_SET_FOLLOWTARGET_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_Camera3D()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_GET_CAMERA3D_OFFSET))(this);
		}

		::System::Void set_Camera3D(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_SET_CAMERA3D_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET__INIT_OFFSET))(this);
		}

		::System::Void _ReinitWithCurrentPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET__REINITWITHCURRENTPOSITION_OFFSET))(this);
		}

		::System::Void _TryUpdateFollowing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO3DFOLLOWUITARGET__TRYUPDATEFOLLOWING_OFFSET))(this);
		}
	};
}
