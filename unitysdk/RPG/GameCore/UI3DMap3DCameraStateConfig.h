#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMAP3DCAMERASTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE7D14F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMap3DCameraStateConfig_TypeDefinitionIndex = 57698;

	class UI3DMap3DCameraStateConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Target; // 0x10
		::UnityEngine::Camera* SourceCamera; // 0x18
		::System::Single InitDistance; // 0x20
		::System::Single ZoomSpeed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
