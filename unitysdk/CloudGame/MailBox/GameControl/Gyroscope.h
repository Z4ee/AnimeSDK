#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x7846C0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x3B19D00)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x379FAC0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x17670)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x3B19D30)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x3B19D60)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x3B19D20)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x379FAE0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x17490)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x3B19D50)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 7496;

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

		::System::Void set_rotationRate(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_rotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::System::Void set_rotationRateUnbiased(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ROTATIONRATEUNBIASED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_GRAVITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_userAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_USERACCELERATION_OFFSET))(this);
		}

		::System::Void set_userAcceleration(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_USERACCELERATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_GET_ATTITUDE_OFFSET))(this);
		}

		::System::Void set_attitude(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GYROSCOPE_SET_ATTITUDE_OFFSET))(this, a1);
		}
	};
}
