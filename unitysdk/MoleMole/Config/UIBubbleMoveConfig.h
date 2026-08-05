#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UIBUBBLEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIBubbleMoveConfig_TypeDefinitionIndex = 90066;

	class UIBubbleMoveConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single moveTime; // 0x58
		::UnityEngine::AnimationCurve* curve; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIBUBBLEMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
