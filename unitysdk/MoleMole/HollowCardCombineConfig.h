#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13843EB0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 69139;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::System::String* SmallCardBGEffectKey; // 0x10
		::System::String* StartEffectKeyDirect; // 0x18
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x20
		::UnityEngine::AnimationCurve* RotateCurve; // 0x28
		::UnityEngine::AnimationCurve* CloseCurve; // 0x30
		::UnityEngine::AnimationCurve* CenterCurve; // 0x38
		::System::String* MainUIFadeIn; // 0x40
		::System::String* EndEffectKey; // 0x48
		::System::String* CardEffectKey; // 0x50
		::System::String* SmallCardEffectKey; // 0x58
		::System::String* StartEffectKey; // 0x60
		::System::String* UIFadeOut; // 0x68
		::System::Single SmallCardEffectDelay; // 0x70
		::System::Single DelayInterval2; // 0x74
		::System::Single SmallCardEffectDelay2; // 0x78
		::System::Single RelicUpgradeCardLeaveTime; // 0x7C
		::UnityEngine::Vector3 CombineCardRotate; // 0x80
		::System::Single SmallCardBGEffectDelay; // 0x8C
		::System::Single ShowCombineCardDelay; // 0x90
		::System::Single SmallCardY; // 0x94
		::System::Single RelicUpgradeCardLeaveInterval; // 0x98
		::System::Single CenterTime2; // 0x9C
		::System::Single CenterTime; // 0xA0
		::System::Single UIFadeOutDelay; // 0xA4
		::System::Single TargetCardY; // 0xA8
		::System::Single DelayExitTimeAfterRotate; // 0xAC
		::System::Single MainUIFadeInDelay; // 0xB0
		::System::Single EffectShowDelay; // 0xB4
		::System::Single CombineCardRotateTime; // 0xB8
		::System::Single CloseTime; // 0xBC
		::System::Int32 SoundID; // 0xC0
		::System::Single Fov; // 0xC4
		::System::Single ShowCombineDelay; // 0xC8
		::System::Single SmallCardBGEffectDelay2; // 0xCC
		::System::Single DelayInterval; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
