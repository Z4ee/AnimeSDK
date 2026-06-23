#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_MONOHOLLOWGUIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18305840)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHollowGuideConfig_TypeDefinitionIndex = 81968;

	class MonoHollowGuideConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Vector2 BorderRange; // 0x58
		::System::Single SmoothTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHOLLOWGUIDECONFIG__CTOR_OFFSET))(this);
		}
	};
}
