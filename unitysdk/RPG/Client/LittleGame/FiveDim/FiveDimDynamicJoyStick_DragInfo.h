#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_DRAGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB60)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicJoyStick_DragInfo_TypeDefinitionIndex = 71745;

	struct alignas(4) FiveDimDynamicJoyStick_DragInfo
	{
		::System::Single UIAngle; // 0x10
		::UnityEngine::Vector2 HitPos; // 0x14
		::UnityEngine::Vector2 CenterPos; // 0x1C
		::System::Single CenterToHitDistancePow; // 0x24

		::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_DRAGINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
