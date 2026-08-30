#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RotatableRegionPose3DMapConfig; }

#define RPG_CLIENT_MONOROTATABLEREGION3DMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0BCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRotatableRegion3DMap_TypeDefinitionIndex = 69012;

	class MonoRotatableRegion3DMap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::RotatableRegionPose3DMapConfig*>* Poses; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATABLEREGION3DMAP__CTOR_OFFSET))(this);
		}
	};
}
