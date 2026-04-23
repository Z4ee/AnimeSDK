#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6E050B9DDF862710;
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA200F80)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2010C0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA200FF0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA201050)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA201170)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RunePositionPaster_TypeDefinitionIndex = 65039;

	class Effect_RunePositionPaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* runRenderer; // 0x18
		::Class_2_6E050B9DDF862710* _Behavior; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONDESTROY_OFFSET))(this);
		}
	};
}
