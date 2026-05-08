#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_MONOHOLLOWGUIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178275C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHollowGuideConfig_TypeDefinitionIndex = 82405;

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
