#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOMAPROTATIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DF6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMapRotationVolume_TypeDefinitionIndex = 63272;

	class MonoMapRotationVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* Slots; // 0x18
		::System::UInt32 PoseSwitcherPropID; // 0x20
		::Il2CppArray<::UnityEngine::Collider*>* Triggers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAPROTATIONVOLUME__CTOR_OFFSET))(this);
		}
	};
}
