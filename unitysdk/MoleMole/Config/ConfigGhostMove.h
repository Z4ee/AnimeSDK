#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1625EEE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostMove_TypeDefinitionIndex = 60576;

	class ConfigGhostMove : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x10
		::UnityEngine::AnimationCurve* DisplacementCurve; // 0x18
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTMOVE__CTOR_OFFSET))(this);
		}
	};
}
