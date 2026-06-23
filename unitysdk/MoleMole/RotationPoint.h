#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB2C27F60FA583B0.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_ROTATIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19174C00)

namespace MoleMole
{
	inline static constexpr unsigned int RotationPoint_TypeDefinitionIndex = 47463;

	class RotationPoint : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14
		::UnityEngine::Transform* pointTransform; // 0x18
		::Enum_3_BB2C27F60FA583B0 DirectionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROTATIONPOINT__CTOR_OFFSET))(this);
		}
	};
}
