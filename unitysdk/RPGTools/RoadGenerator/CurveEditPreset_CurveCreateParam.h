#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D693B0)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveEditPreset_CurveCreateParam_TypeDefinitionIndex = 47047;

	struct alignas(4) CurveEditPreset_CurveCreateParam
	{
		static ::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam* StaticGet_Default()
		{
			return (::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam*)Il2CppClass::FromTypeDefinitionIndex(CurveEditPreset_CurveCreateParam_TypeDefinitionIndex)->GetStaticField(0x14620);
		}
		::UnityEngine::Vector3 RootPos; // 0x10
		::System::Single Radius; // 0x1C
		::System::Int32 SegmentCount; // 0x20
		::System::Single Angle; // 0x24
		::System::Single AngleOffset; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM__CCTOR_OFFSET))();
		}
	};
}
