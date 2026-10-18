#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_ICONLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE37A0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_IconLayerInfo_TypeDefinitionIndex = 69062;

	class UIAdventureMinimap_IconLayerInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* UpLayer; // 0x10
		::UnityEngine::Transform* DownLayer; // 0x18
		::UnityEngine::Transform* FloorLayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ICONLAYERINFO__CTOR_OFFSET))(this);
		}
	};
}
