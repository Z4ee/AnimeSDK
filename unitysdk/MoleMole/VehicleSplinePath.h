#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class VehicleSplineSegment; }

#define MOLEMOLE_VEHICLESPLINEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1353A370)

namespace MoleMole
{
	inline static constexpr unsigned int VehicleSplinePath_TypeDefinitionIndex = 78081;

	class VehicleSplinePath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::VehicleSplineSegment*>* segments; // 0x18
		::System::Single BoundingBoxHeight; // 0x20
		::System::Single BoundingBoxFloorMargin; // 0x24
		::System::Single CurveDegreeAccuracy; // 0x28
		::System::Single MinDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLESPLINEPATH__CTOR_OFFSET))(this);
		}
	};
}
