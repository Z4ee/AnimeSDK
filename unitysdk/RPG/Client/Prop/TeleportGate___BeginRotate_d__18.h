#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class TeleportGate; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDD36CD0)
#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD37240)
#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDD372A0)
#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDD37250)
#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD36CC0)
#define RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0xDD36290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate___BeginRotate_d__18_TypeDefinitionIndex = 78418;

	class TeleportGate___BeginRotate_d__18 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* speedCurve; // 0x10
		::RPG::Client::Prop::TeleportGate* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single targetYaw; // 0x28
		::System::Single _currentDeltaYaw_5__3; // 0x2C
		::System::Single _initYaw_5__4; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Single maxRotateSpeed; // 0x38
		::System::Single _needRotateAngle_5__2; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___BEGINROTATE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
