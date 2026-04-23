#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_866;

#define RPG_CLIENT_GYROMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5DAE70)
#define RPG_CLIENT_GYROMANAGER_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0xA5DB550)
#define RPG_CLIENT_GYROMANAGER_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xA5DB3B0)
#define RPG_CLIENT_GYROMANAGER_GET_GYROENABLED_OFFSET UNITYSDK_OFFSET(0xA5DB130)
#define RPG_CLIENT_GYROMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA5DB610)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0xA5DB2E0)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0xA5DB210)
#define RPG_CLIENT_GYROMANAGER_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0xA5DB480)
#define RPG_CLIENT_GYROMANAGER_GET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xA5DB640)
#define RPG_CLIENT_GYROMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA5DAD80)
#define RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET UNITYSDK_OFFSET(0xA5DAEC0)
#define RPG_CLIENT_GYROMANAGER_RELEASEGYRO_OFFSET UNITYSDK_OFFSET(0xA5DB0C0)
#define RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xA5DB650)
#define RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET UNITYSDK_OFFSET(0xA5DB050)
#define RPG_CLIENT_GYROMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DB6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GyroManager_TypeDefinitionIndex = 62969;

	class GyroManager : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_866* _GyroProvider; // 0x10
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

		::System::Void UseGyro(::System::Single updateInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET))(this, updateInterval);
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

		::System::Void set_WithPermission(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET))(this, value);
		}

		::System::Void RefreshConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET))(this);
		}
	};
}
