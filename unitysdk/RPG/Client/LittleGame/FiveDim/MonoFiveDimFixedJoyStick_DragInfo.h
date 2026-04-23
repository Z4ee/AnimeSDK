#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_DRAGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD8370)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimFixedJoyStick_DragInfo_TypeDefinitionIndex = 70939;

	struct alignas(4) MonoFiveDimFixedJoyStick_DragInfo
	{
		::System::Single UIAngle; // 0x10
		::UnityEngine::Vector2 HitPos; // 0x14
		::System::Single CenterToHitDistancePow; // 0x1C

		::System::Void _ctor(::System::Single uiAngle, ::UnityEngine::Vector2 hitPos, ::System::Single centerToHitDistancePow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_DRAGINFO__CTOR_OFFSET))(this, uiAngle, hitPos, centerToHitDistancePow);
		}
	};
}
