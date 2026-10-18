#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GyroManager; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_CAMERAGYROFOLLOWER_GET_FOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0xC937910)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_GET_FOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0xC937930)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETLIMITMAX_OFFSET UNITYSDK_OFFSET(0xC9379A0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETLIMITMIN_OFFSET UNITYSDK_OFFSET(0xC937980)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0xC937960)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC9373B0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC937110)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_SET_FOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0xC937920)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_SET_FOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0xC937950)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETLIMITMAX_OFFSET UNITYSDK_OFFSET(0xC9379B0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETLIMITMIN_OFFSET UNITYSDK_OFFSET(0xC937990)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0xC937970)
#define RPG_CLIENT_CAMERAGYROFOLLOWER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC9374A0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC937A30)
#define RPG_CLIENT_CAMERAGYROFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9379C0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER__GETGYROOFFSET_OFFSET UNITYSDK_OFFSET(0xC9374F0)
#define RPG_CLIENT_CAMERAGYROFOLLOWER__UPDATEFOLLOWING_OFFSET UNITYSDK_OFFSET(0xC937210)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraGyroFollower_TypeDefinitionIndex = 68917;

	class CameraGyroFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet__DefaultGyroOffsetRange()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(CameraGyroFollower_TypeDefinitionIndex)->GetStaticField(0x14EF0);
		}
		static ::UnityEngine::Vector2* StaticGet__DefaultGyroOffsetLimitMax()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(CameraGyroFollower_TypeDefinitionIndex)->GetStaticField(0x14EF8);
		}
		static ::UnityEngine::Vector2* StaticGet__DefaultGyroOffsetLimitMin()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(CameraGyroFollower_TypeDefinitionIndex)->GetStaticField(0x14F00);
		}
		::UnityEngine::Camera* _FollowCamera_k__BackingField; // 0x18
		::UnityEngine::Vector3 _FollowOffset_k__BackingField; // 0x20
		::UnityEngine::Vector2 _GyroOffsetRange_k__BackingField; // 0x2C
		::UnityEngine::Vector2 _GyroOffsetLimitMin_k__BackingField; // 0x34
		::UnityEngine::Vector2 _GyroOffsetLimitMax_k__BackingField; // 0x3C
		::RPG::Client::GyroManager* _AcquiredGyro; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateFollowing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER__UPDATEFOLLOWING_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetGyroOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER__GETGYROOFFSET_OFFSET))(this);
		}

		::UnityEngine::Camera* get_FollowCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_GET_FOLLOWCAMERA_OFFSET))(this);
		}

		::System::Void set_FollowCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_SET_FOLLOWCAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_FollowOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_GET_FOLLOWOFFSET_OFFSET))(this);
		}

		::System::Void set_FollowOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_SET_FOLLOWOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_GyroOffsetRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETRANGE_OFFSET))(this);
		}

		::System::Void set_GyroOffsetRange(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETRANGE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_GyroOffsetLimitMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETLIMITMIN_OFFSET))(this);
		}

		::System::Void set_GyroOffsetLimitMin(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETLIMITMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_GyroOffsetLimitMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_GET_GYROOFFSETLIMITMAX_OFFSET))(this);
		}

		::System::Void set_GyroOffsetLimitMax(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAGYROFOLLOWER_SET_GYROOFFSETLIMITMAX_OFFSET))(this, a1);
		}
	};
}
