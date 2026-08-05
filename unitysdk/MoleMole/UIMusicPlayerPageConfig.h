#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIMUSICPLAYERPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189D05C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicPlayerPageConfig_TypeDefinitionIndex = 79142;

	class UIMusicPlayerPageConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Sprite* playSpriteRoutine; // 0x58
		::UnityEngine::Sprite* playSpriteFlash; // 0x60
		::UnityEngine::Sprite* pauseSpriteRoutine; // 0x68
		::UnityEngine::Sprite* pauseSpriteFlash; // 0x70
		::UnityEngine::Sprite* unStarSprite; // 0x78
		::UnityEngine::Sprite* starredSprite; // 0x80
		::System::Single curBPM; // 0x88
		::System::Single fadeTime; // 0x8C
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* spectrums; // 0x90
		::UnityEngine::AnimationCurve* lerpSpeedCurve; // 0x98
		::UnityEngine::AnimationCurve* flowSpeedCurve; // 0xA0
		::UnityEngine::AnimationCurve* ampLevelCurve; // 0xA8
		::System::Int32 kernelSize; // 0xB0
		::System::Int32 sigma; // 0xB4
		::System::Int32 skipSampleCount; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
