#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VehicleSplineNode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace PathCreation { class PathCreator; }

#define MOLEMOLE_VEHICLESPLINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17D90)

namespace MoleMole
{
	inline static constexpr unsigned int VehicleSplineSegment_TypeDefinitionIndex = 80801;

	class VehicleSplineSegment : public ::System::Object
	{
	public:
		::PathCreation::PathCreator* source; // 0x10
		::System::Boolean reverse; // 0x18
		::Il2CppArray<::MoleMole::VehicleSplineNode>* nodes; // 0x20
		::Il2CppArray<::System::Int32>* branches; // 0x28
		::Il2CppArray<::System::Int32>* backBranches; // 0x30
		::System::Single halfWidth; // 0x38
		::System::Boolean allowGoBack; // 0x3C
		::UnityEngine::Bounds bounds; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLESPLINESEGMENT__CTOR_OFFSET))(this);
		}
	};
}
