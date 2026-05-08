#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FishMove3DCurve; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FISHMOVEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x170BC550)

namespace MoleMole
{
	inline static constexpr unsigned int FishMoveParam_TypeDefinitionIndex = 82804;

	class FishMoveParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Single TurnMoveSpeed; // 0x18
		::System::Single TurnAngleSpeed; // 0x1C
		::MoleMole::FishMove3DCurve* Move3DCurve; // 0x20
		::System::Single MoveXSpeed; // 0x28
		::MoleMole::FishMove3DCurve* ClickCurve; // 0x30
		::MoleMole::FishMove3DCurve* PressCurve; // 0x38
		::System::Single HurtRate; // 0x40
		::System::Single HurtSpeed; // 0x44
		::UnityEngine::AnimationCurve* CameraTrackCurve; // 0x48
		::System::Single FrequencyRate; // 0x50
		::System::Single SpeedRate; // 0x54
		::System::Single MoveXSpeedLocal; // 0x58
		::MoleMole::FishMove3DCurve* Move3DCurveLocal; // 0x60
		::System::Single MoveXSpeedLocalBoss; // 0x68
		::MoleMole::FishMove3DCurve* Move3DCurveLocalBoss; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHMOVEPARAM__CTOR_OFFSET))(this);
		}
	};
}
