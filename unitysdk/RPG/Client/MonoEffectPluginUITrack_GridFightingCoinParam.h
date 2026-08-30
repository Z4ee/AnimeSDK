#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_GRIDFIGHTINGCOINPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39A5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginUITrack_GridFightingCoinParam_TypeDefinitionIndex = 70098;

	class MonoEffectPluginUITrack_GridFightingCoinParam : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 ParabolaInitSpeed; // 0x10
		::System::Single ParabolaDownwardAcceleration; // 0x18
		::System::Single ParabolaMaxTime; // 0x1C
		::System::Single ParabolaTargetSafeDistance; // 0x20
		::System::Single ParabolaScreenSafeDistance; // 0x24
		::System::Single LinearSpeed; // 0x28
		::UnityEngine::AnimationCurve* LinearOscillationCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_GRIDFIGHTINGCOINPARAM__CTOR_OFFSET))(this);
		}
	};
}
