#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOMOUSEFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC12F830)
#define RPG_CLIENT_MONOMOUSEFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0xC12FA40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMouseFollower_TypeDefinitionIndex = 68025;

	class MonoMouseFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOUSEFOLLOWER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOUSEFOLLOWER_LATEUPDATE_OFFSET))(this);
		}
	};
}
