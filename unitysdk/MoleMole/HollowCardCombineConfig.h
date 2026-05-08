#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1604FBF0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 56758;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::System::String* CardEffectKey; // 0x10
		::System::String* StartEffectKey; // 0x18
		::System::String* UIFadeOut; // 0x20
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x28
		::System::String* EndEffectKey; // 0x30
		::System::String* MainUIFadeIn; // 0x38
		::UnityEngine::AnimationCurve* CenterCurve; // 0x40
		::System::String* StartEffectKeyDirect; // 0x48
		::System::String* SmallCardEffectKey; // 0x50
		::UnityEngine::AnimationCurve* RotateCurve; // 0x58
		::UnityEngine::AnimationCurve* CloseCurve; // 0x60
		::System::String* SmallCardBGEffectKey; // 0x68
		::System::Single SmallCardBGEffectDelay; // 0x70
		::System::Single MainUIFadeInDelay; // 0x74
		::System::Single DelayExitTimeAfterRotate; // 0x78
		::System::Single ShowCombineCardDelay; // 0x7C
		::System::Single ShowCombineDelay; // 0x80
		::UnityEngine::Vector3 CombineCardRotate; // 0x84
		::System::Single SmallCardEffectDelay2; // 0x90
		::System::Single DelayInterval; // 0x94
		::System::Single TargetCardY; // 0x98
		::System::Single Fov; // 0x9C
		::System::Single CenterTime; // 0xA0
		::System::Single CenterTime2; // 0xA4
		::System::Single SmallCardEffectDelay; // 0xA8
		::System::Single DelayInterval2; // 0xAC
		::System::Int32 SoundID; // 0xB0
		::System::Single SmallCardBGEffectDelay2; // 0xB4
		::System::Single RelicUpgradeCardLeaveInterval; // 0xB8
		::System::Single CloseTime; // 0xBC
		::System::Single EffectShowDelay; // 0xC0
		::System::Single UIFadeOutDelay; // 0xC4
		::System::Single SmallCardY; // 0xC8
		::System::Single RelicUpgradeCardLeaveTime; // 0xCC
		::System::Single CombineCardRotateTime; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
