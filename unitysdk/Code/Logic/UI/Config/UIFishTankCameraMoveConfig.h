#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define CODE_LOGIC_UI_CONFIG_UIFISHTANKCAMERAMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x130F9C60)

namespace Code::Logic::UI::Config
{
	inline static constexpr unsigned int UIFishTankCameraMoveConfig_TypeDefinitionIndex = 81182;

	class UIFishTankCameraMoveConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single moveTime; // 0x58
		::UnityEngine::AnimationCurve* curve; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_CONFIG_UIFISHTANKCAMERAMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
