#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LightConeZoom_UpdateFunc; }

#define RPG_CLIENT_LIGHTCONEZOOM_ADD_UPDATEEVENT_OFFSET UNITYSDK_OFFSET(0x1A762D10)
#define RPG_CLIENT_LIGHTCONEZOOM_REMOVE_UPDATEEVENT_OFFSET UNITYSDK_OFFSET(0x1A762D70)
#define RPG_CLIENT_LIGHTCONEZOOM_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1A762DD0)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A762E20)
#define RPG_CLIENT_LIGHTCONEZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A762E90)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeZoom_TypeDefinitionIndex = 69277;

	class LightConeZoom : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LightConeZoom_UpdateFunc* UpdateEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM__CTOR_OFFSET))(this);
		}

		::System::Void add_UpdateEvent(::RPG::Client::LightConeZoom_UpdateFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeZoom_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_ADD_UPDATEEVENT_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateEvent(::RPG::Client::LightConeZoom_UpdateFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeZoom_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_REMOVE_UPDATEEVENT_OFFSET))(this, a1);
		}

		::System::Void SetEvent(::RPG::Client::LightConeZoom_UpdateFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeZoom_UpdateFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_SETEVENT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATE_OFFSET))(this);
		}
	};
}
