#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_HOTPOTRENDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE949880)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HotpotRenderInfo_TypeDefinitionIndex = 59380;

	class HotpotRenderInfo : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Color ErosionColor; // 0x58
		::System::Int32 Index; // 0x68
		::System::Single LinkAnimCollisionIntensityThreshold; // 0x6C
		::UnityEngine::Transform* TransformsUnderHigherPotRoot; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTRENDERINFO__CTOR_OFFSET))(this);
		}
	};
}
