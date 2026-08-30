#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlushLockedTransformChannel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterCustomBlushBehavior_Struct_2_6406F0003F78CC40_TypeDefinitionIndex = 70224;

	struct alignas(8) CharacterCustomBlushBehavior_Struct_2_6406F0003F78CC40
	{
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::RPG::Client::BlushLockedTransformChannel BPIOAFNLNNO; // 0x18
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x1C
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x38
	};
}
