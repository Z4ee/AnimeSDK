#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIYorozuyaConfig_QuestType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIYorozuyaConfig_RowTypeColor; }
namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIYOROZUYACONFIG_GETCOLORCONFIGBYTYPE_OFFSET UNITYSDK_OFFSET(0x11C297C0)
#define MOLEMOLE_UIYOROZUYACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11C298D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaConfig_TypeDefinitionIndex = 69074;

	class UIYorozuyaConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single BornDelayTime; // 0x58
		::System::Single IconBornDelayTime; // 0x5C
		::System::Single FinalScale; // 0x60
		::System::Single BornScaleTime; // 0x64
		::UnityEngine::Vector3 BornRot; // 0x68
		::UnityEngine::Vector3 FinalRot; // 0x74
		::System::Single BornRotateTime; // 0x80
		::UnityEngine::AnimationCurve* BornRotAnimCurve; // 0x88
		::UnityEngine::Vector2 BornRandomTime; // 0x90
		::System::Single TriggerRotateTime; // 0x98
		::UnityEngine::AnimationCurve* TriggerRotateCurve; // 0xA0
		::System::Single TriggerRotateNoiseDelayTime; // 0xA8
		::MoleMole::Cameras::VNoiseSettings* TriggerRotateNoiseProfile; // 0xB0
		::System::Single TriggerRotateNoiseAmplitudeGain; // 0xB8
		::System::Single TriggerRotateNoiseFrequencyGain; // 0xBC
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIYorozuyaConfig_QuestType, ::MoleMole::UIYorozuyaConfig_RowTypeColor*>* RowColorDic; // 0xC0
		::System::Single TipsDelayShowTime; // 0xC8
		::System::Single ClickDelay; // 0xCC
		::UnityEngine::Vector2 glareScale; // 0xD0
		::System::Single breathLoopTimer; // 0xD8
		::UnityEngine::AnimationCurve* breathLoopCurve; // 0xE0
		::System::Single TweenDuration; // 0xE8
		::System::Int32 Posx_1; // 0xEC
		::System::Int32 Posx_2; // 0xF0
		::UnityEngine::AnimationCurve* TweenCurve; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::UIYorozuyaConfig_RowTypeColor* GetColorConfigByType(::MoleMole::UIYorozuyaConfig_QuestType type)
		{
			return ((::MoleMole::UIYorozuyaConfig_RowTypeColor*(*)(::PVOID, ::MoleMole::UIYorozuyaConfig_QuestType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACONFIG_GETCOLORCONFIGBYTYPE_OFFSET))(this, type);
		}
	};
}
