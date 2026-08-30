#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RoadGenerator/CurveCreateMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B528760)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveEditPreset_CurveCreateParam_TypeDefinitionIndex = 49310;

	struct alignas(4) CurveEditPreset_CurveCreateParam
	{
		static ::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam* StaticGet_Default()
		{
			return (::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam*)Il2CppClass::FromTypeDefinitionIndex(CurveEditPreset_CurveCreateParam_TypeDefinitionIndex)->GetStaticField(0xD2A0);
		}
		::RPGTools::RoadGenerator::CurveCreateMode Mode; // 0x10
		::UnityEngine::Vector3 RootPos; // 0x14
		::System::Single Radius; // 0x20
		::System::Int32 SegmentCount; // 0x24
		::System::Single Angle; // 0x28
		::System::Single AngleOffset; // 0x2C
		::System::Single TotalHeight; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET_CURVECREATEPARAM__CCTOR_OFFSET))();
		}
	};
}
