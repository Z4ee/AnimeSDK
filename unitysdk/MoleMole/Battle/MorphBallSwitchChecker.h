#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_CANSWITCHTOBALL_OFFSET UNITYSDK_OFFSET(0x116CA330)
#define MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_CANSWITCHTOROBOT_OFFSET UNITYSDK_OFFSET(0x116CB340)
#define MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_GETCOLLISIONMASK_OFFSET UNITYSDK_OFFSET(0x116CA270)
#define MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_ISSPACEENOUGH_OFFSET UNITYSDK_OFFSET(0x116CA470)
#define MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x116CB480)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MorphBallSwitchChecker_TypeDefinitionIndex = 75440;

	class MorphBallSwitchChecker : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* avatarColliders; // 0x10
		::Il2CppArray<::UnityEngine::Collider*>* ballColliders; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::LayerMask GetCollisionMask(::System::Int32 layer)
		{
			return ((::UnityEngine::LayerMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_GETCOLLISIONMASK_OFFSET))(layer);
		}

		::System::Boolean CanSwitchToBall(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_CANSWITCHTOBALL_OFFSET))(this, position, rotation);
		}

		::System::Boolean CanSwitchToRobot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_CANSWITCHTOROBOT_OFFSET))(this, position, rotation);
		}

		static ::System::Boolean IsSpaceEnough(::UnityEngine::Collider* collider, ::System::Int32 layerMask, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::Il2CppArray<::UnityEngine::Collider*>* ignored)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLSWITCHCHECKER_ISSPACEENOUGH_OFFSET))(collider, layerMask, position, rotation, ignored);
		}
	};
}
