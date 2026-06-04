#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_916;

#define RPG_CLIENT_GYROMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCDD690)
#define RPG_CLIENT_GYROMANAGER_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0xBCDDD70)
#define RPG_CLIENT_GYROMANAGER_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xBCDDBD0)
#define RPG_CLIENT_GYROMANAGER_GET_GYROENABLED_OFFSET UNITYSDK_OFFSET(0xBCDD950)
#define RPG_CLIENT_GYROMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBCDDE30)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0xBCDDB00)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0xBCDDA30)
#define RPG_CLIENT_GYROMANAGER_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0xBCDDCA0)
#define RPG_CLIENT_GYROMANAGER_GET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xBCDDE60)
#define RPG_CLIENT_GYROMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBCDD5A0)
#define RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET UNITYSDK_OFFSET(0xBCDD6E0)
#define RPG_CLIENT_GYROMANAGER_RELEASEGYRO_OFFSET UNITYSDK_OFFSET(0xBCDD8E0)
#define RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xBCDDE70)
#define RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET UNITYSDK_OFFSET(0xBCDD870)
#define RPG_CLIENT_GYROMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBCDDEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GyroManager_TypeDefinitionIndex = 63884;

	class GyroManager : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_916* _GyroProvider; // 0x10
		::System::Boolean _WithPermission; // 0x18
		::System::Int32 _RefCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void UseGyro(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET))(this, a1);
		}

		::System::Void ReleaseGyro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_RELEASEGYRO_OFFSET))(this);
		}

		::System::Boolean get_GyroEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_GYROENABLED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_GRAVITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UserAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_USERACCELERATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ATTITUDE_OFFSET))(this);
		}

		static ::RPG::Client::GyroManager* get_Instance()
		{
			return ((::RPG::Client::GyroManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_WithPermission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_WITHPERMISSION_OFFSET))(this);
		}

		::System::Void set_WithPermission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET))(this, a1);
		}

		::System::Void RefreshConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET))(this);
		}
	};
}
