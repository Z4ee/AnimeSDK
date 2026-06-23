#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArrayList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA400)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE___C__DISPLAYCLASS14_0__GETPOLYGON_B__0_OFFSET UNITYSDK_OFFSET(0x1E3BA410)

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int SplinePolyLine___c__DisplayClass14_0_TypeDefinitionIndex = 38886;

	class SplinePolyLine___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3> vPos; // 0x10
		::System::Single angleFromLast; // 0x30
		::System::Single distAccu; // 0x34
		::System::Int32 linearSteps; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPolygon_b__0(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE___C__DISPLAYCLASS14_0__GETPOLYGON_B__0_OFFSET))(this, position);
		}
	};
}
