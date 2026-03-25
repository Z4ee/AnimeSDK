#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ICartography3D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIMAP3DCONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA708850)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMap3DContainerConfig_TypeDefinitionIndex = 56411;

	class UIMap3DContainerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ViewCenterTransform; // 0x10
		::UnityEngine::Transform* MapModelTransform; // 0x18
		::RPG::Client::NavMap::ICartography3D* Cartography3D; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
