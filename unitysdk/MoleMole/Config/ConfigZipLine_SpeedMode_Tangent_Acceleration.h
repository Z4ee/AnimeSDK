#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_ACCELERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17056F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedMode_Tangent_Acceleration_TypeDefinitionIndex = 51232;

	class ConfigZipLine_SpeedMode_Tangent_Acceleration : public ::System::Object
	{
	public:
		::System::Single BaseSpeed; // 0x10
		::UnityEngine::Vector2 pitchRange_Acceleration; // 0x14
		::UnityEngine::AnimationCurve* pitch2Acceleration; // 0x20
		::UnityEngine::Vector2 accelerationRange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_SPEEDMODE_TANGENT_ACCELERATION__CTOR_OFFSET))(this);
		}
	};
}
