#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC5030)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 58931;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::System::String* UIFadeOut; // 0x10
		::System::String* StartEffectKey; // 0x18
		::System::String* EndEffectKey; // 0x20
		::UnityEngine::AnimationCurve* CenterCurve; // 0x28
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x30
		::System::String* SmallCardEffectKey; // 0x38
		::System::String* MainUIFadeIn; // 0x40
		::System::String* CardEffectKey; // 0x48
		::System::String* StartEffectKeyDirect; // 0x50
		::UnityEngine::AnimationCurve* RotateCurve; // 0x58
		::System::String* SmallCardBGEffectKey; // 0x60
		::UnityEngine::AnimationCurve* CloseCurve; // 0x68
		::UnityEngine::Vector3 CombineCardRotate; // 0x70
		::System::Single TargetCardY; // 0x7C
		::System::Single Fov; // 0x80
		::System::Single SmallCardY; // 0x84
		::System::Single ShowCombineDelay; // 0x88
		::System::Single CloseTime; // 0x8C
		::System::Single SmallCardEffectDelay; // 0x90
		::System::Single CenterTime; // 0x94
		::System::Int32 SoundID; // 0x98
		::System::Single EffectShowDelay; // 0x9C
		::System::Single CenterTime2; // 0xA0
		::System::Single ShowCombineCardDelay; // 0xA4
		::System::Single MainUIFadeInDelay; // 0xA8
		::System::Single RelicUpgradeCardLeaveTime; // 0xAC
		::System::Single SmallCardEffectDelay2; // 0xB0
		::System::Single SmallCardBGEffectDelay; // 0xB4
		::System::Single DelayExitTimeAfterRotate; // 0xB8
		::System::Single DelayInterval; // 0xBC
		::System::Single UIFadeOutDelay; // 0xC0
		::System::Single RelicUpgradeCardLeaveInterval; // 0xC4
		::System::Single SmallCardBGEffectDelay2; // 0xC8
		::System::Single CombineCardRotateTime; // 0xCC
		::System::Single DelayInterval2; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
