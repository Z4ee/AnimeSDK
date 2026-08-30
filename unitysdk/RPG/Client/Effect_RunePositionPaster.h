#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6E050B9DDF862710;
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCE154D0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCE15610)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCE15540)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE155A0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE156C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RunePositionPaster_TypeDefinitionIndex = 70512;

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
