#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x4EB340)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x3F6B40)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x3FFA00)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x75B6D0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x777C70)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x75B6C0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x61EA70)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x75B6F0)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 18423;

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
