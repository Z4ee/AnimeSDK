#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INCONTROL_DEADZONE_CIRCULAR_OFFSET UNITYSDK_OFFSET(0x18E7B840)
#define INCONTROL_DEADZONE_SEPARATENOTNORMALIZED_OFFSET UNITYSDK_OFFSET(0x18E7B620)
#define INCONTROL_DEADZONE_SEPARATE_OFFSET UNITYSDK_OFFSET(0x18E7B700)

namespace InControl
{
	inline static constexpr unsigned int DeadZone_TypeDefinitionIndex = 39521;

	class DeadZone : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 SeparateNotNormalized(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_SEPARATENOTNORMALIZED_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 Separate(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_SEPARATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 Circular(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_CIRCULAR_OFFSET))(a1, a2, a3, a4);
		}
	};
}
