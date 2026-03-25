#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INCONTROL_DEADZONE_CIRCULAR_OFFSET UNITYSDK_OFFSET(0x15B66000)
#define INCONTROL_DEADZONE_SEPARATENOTNORMALIZED_OFFSET UNITYSDK_OFFSET(0x15B65DE0)
#define INCONTROL_DEADZONE_SEPARATE_OFFSET UNITYSDK_OFFSET(0x15B65EC0)

namespace InControl
{
	inline static constexpr unsigned int DeadZone_TypeDefinitionIndex = 31402;

	class DeadZone : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 SeparateNotNormalized(::System::Single x, ::System::Single y, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_SEPARATENOTNORMALIZED_OFFSET))(x, y, lowerDeadZone, upperDeadZone);
		}

		static ::UnityEngine::Vector2 Separate(::System::Single x, ::System::Single y, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_SEPARATE_OFFSET))(x, y, lowerDeadZone, upperDeadZone);
		}

		static ::UnityEngine::Vector2 Circular(::System::Single x, ::System::Single y, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONE_CIRCULAR_OFFSET))(x, y, lowerDeadZone, upperDeadZone);
		}
	};
}
