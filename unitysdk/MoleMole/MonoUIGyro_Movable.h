#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIGYRO_MOVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDDBD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGyro_Movable_TypeDefinitionIndex = 68993;

	class MonoUIGyro_Movable : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single speedRatio; // 0x18
		::System::Single rangeRatio; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_MOVABLE__CTOR_OFFSET))(this);
		}
	};
}
