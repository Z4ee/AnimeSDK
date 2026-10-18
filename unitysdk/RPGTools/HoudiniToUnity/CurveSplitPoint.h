#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB086B20)
#define RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0858D0)
#define RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB086B10)

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int CurveSplitPoint_TypeDefinitionIndex = 46932;

	class CurveSplitPoint : public ::System::Object
	{
	public:
		::System::Single t; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPGTools::HoudiniToUnity::CurveSplitPoint* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPGTools::HoudiniToUnity::CurveSplitPoint*))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVESPLITPOINT_COMPARETO_OFFSET))(this, a1);
		}
	};
}
