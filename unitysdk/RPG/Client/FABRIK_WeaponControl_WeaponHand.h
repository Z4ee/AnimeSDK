#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FABRIK; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_WEAPONCONTROL_WEAPONHAND_METHOD_1_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0xA3145B0)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_WEAPONHAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA314490)

namespace RPG::Client
{
	inline static constexpr unsigned int FABRIK_WeaponControl_WeaponHand_TypeDefinitionIndex = 63088;

	class FABRIK_WeaponControl_WeaponHand : public ::System::Object
	{
	public:
		::RPG::Client::FABRIK* ik; // 0x10
		::UnityEngine::Transform* weaponPoint; // 0x18
		::UnityEngine::Transform* weaponControlPoint; // 0x20
		::UnityEngine::Transform* handControlPoint; // 0x28
		::System::Boolean FollowHand; // 0x30
		::UnityEngine::Vector3 LockPosition; // 0x34
		::UnityEngine::Vector3 LockOffset; // 0x40
		::UnityEngine::Matrix4x4 LockOffsetMat; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_WEAPONHAND__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_CD5C08A2521794A0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_WEAPONHAND_METHOD_1_CD5C08A2521794A0_OFFSET))(this);
		}
	};
}
