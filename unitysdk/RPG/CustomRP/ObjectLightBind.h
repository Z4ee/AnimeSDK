#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_OBJECTLIGHTBIND_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18147B10)
#define RPG_CUSTOMRP_OBJECTLIGHTBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x18147B20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ObjectLightBind_TypeDefinitionIndex = 35030;

	class ObjectLightBind : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* entity; // 0x18
		::UnityEngine::Light* targetLight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OBJECTLIGHTBIND__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OBJECTLIGHTBIND_ONENABLE_OFFSET))(this);
		}
	};
}
