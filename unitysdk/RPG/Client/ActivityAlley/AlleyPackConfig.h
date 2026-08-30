#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC4BFD00)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackConfig_TypeDefinitionIndex = 73999;

	class AlleyPackConfig : public ::System::Object
	{
	public:
		::System::Single SelectTime; // 0x10
		::System::Single SelectHoverTime; // 0x14
		::UnityEngine::AnimationCurve* SettleCurve; // 0x18
		::System::Single SettleTime; // 0x20
		::UnityEngine::Vector3 DragOffset; // 0x24
		::System::Single JoyStickCursorFactor; // 0x30
		::System::Single JoyStickCursorFactor_M; // 0x34
		::System::Single JoyStickCursorFactor_L; // 0x38
		::System::Single JoyStickMoveFactor; // 0x3C
		::System::Single JoyStickInputDeadZone; // 0x40
		::System::Single GridLength; // 0x44
		::System::Single GridWidth; // 0x48
		::System::Single GridHeight; // 0x4C
		::System::Int32 GridNumX; // 0x50
		::System::Int32 GridNumY; // 0x54
		::System::Int32 GridNumZ; // 0x58
		::System::Int32 GridSearchNumX; // 0x5C
		::System::Int32 GridSearchNumY; // 0x60
		::System::Int32 GridSearchNumZ; // 0x64
		::UnityEngine::AnimationCurve* BoundRatioCurve; // 0x68
		::UnityEngine::AnimationCurve* LerpRatioCurve; // 0x70
		::System::UInt32 MaxSpeedRecordFrameCount; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
