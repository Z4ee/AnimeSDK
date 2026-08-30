#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class RPGColorGrading; }
namespace UnityEngine::Rendering { class Volume; }

#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_ENABLECOLORGRADING_OFFSET UNITYSDK_OFFSET(0xE413710)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xE413520)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xE413640)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xE4135B0)
#define RPG_CLIENT_VOLUMECOLORGRADINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xE413760)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeColorGradingProxy_TypeDefinitionIndex = 72935;

	class VolumeColorGradingProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::RPGColorGrading* _ColorGrading; // 0x18
		::System::Boolean _ColorGradingEnabled; // 0x20
		::System::Boolean _ColorSaturationGlobalOverrideState; // 0x21
		::UnityEngine::Vector4 _ColorSaturationGlobalColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::Volume* a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void Release(::UnityEngine::Rendering::Volume* a1, ::UnityEngine::Rendering::VolumeProxy_Priority a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_RELEASE_OFFSET))(this, a1, a2);
		}

		::System::Void EnableColorGrading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECOLORGRADINGPROXY_ENABLECOLORGRADING_OFFSET))(this, a1);
		}
	};
}
