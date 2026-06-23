#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_LASERELEMENTSCALEADJUSTMENT_LASERLENGTHLINEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x13027140)

namespace MoleMole
{
	inline static constexpr unsigned int LaserElementScaleAdjustment_LaserLengthLinear_TypeDefinitionIndex = 86188;

	class LaserElementScaleAdjustment_LaserLengthLinear : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::System::Boolean adjustX; // 0x18
		::System::Int32 scaleXMultiplier; // 0x1C
		::System::Boolean adjustY; // 0x20
		::System::Int32 scaleYMultiplier; // 0x24
		::System::Boolean adjustZ; // 0x28
		::System::Int32 scaleZMultiplier; // 0x2C
		::System::Boolean resetScaleOnOver; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LASERELEMENTSCALEADJUSTMENT_LASERLENGTHLINEAR__CTOR_OFFSET))(this);
		}
	};
}
