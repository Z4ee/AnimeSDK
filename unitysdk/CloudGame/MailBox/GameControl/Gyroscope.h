#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x15F5410)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x24F30)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x24600)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x245E0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x20C9260)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x20C9290)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x20C9250)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x15B0E30)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x79820)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x20C9280)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 6567;

	struct alignas(4) Gyroscope
	{
		::UnityEngine::Vector3 _rotationRate_k__BackingField; // 0x10
		::UnityEngine::Vector3 _rotationRateUnbiased_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _gravity_k__BackingField; // 0x28
		::UnityEngine::Vector3 _userAcceleration_k__BackingField; // 0x34
		::UnityEngine::Quaternion _attitude_k__BackingField; // 0x40

		::UnityEngine::Vector3 get_rotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATE_OFFSET))(this);
		}

		::System::Void set_rotationRate(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::System::Void set_rotationRateUnbiased(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATEUNBIASED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_GRAVITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_userAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_USERACCELERATION_OFFSET))(this);
		}

		::System::Void set_userAcceleration(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_USERACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ATTITUDE_OFFSET))(this);
		}

		::System::Void set_attitude(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ATTITUDE_OFFSET))(this, value);
		}
	};
}
