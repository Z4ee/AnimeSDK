#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RoadGenerator/CurveEditPreset_CurveCreateParam.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0xB88CC70)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveEditPreset_TypeDefinitionIndex = 45524;

	class CurveEditPreset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPGTools::RoadGenerator::CurveEditPreset_CurveCreateParam CreateParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_CURVEEDITPRESET__CTOR_OFFSET))(this);
		}
	};
}
