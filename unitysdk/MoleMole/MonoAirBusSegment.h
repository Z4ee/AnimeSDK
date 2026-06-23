#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8FD97C8068FD2492.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOAIRBUSSEGMENT_GET_REVERSECURVE_OFFSET UNITYSDK_OFFSET(0x182FE930)
#define MOLEMOLE_MONOAIRBUSSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x182FEB10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAirBusSegment_TypeDefinitionIndex = 68233;

	class MonoAirBusSegment : public ::FluffyUnderware::Curvy::CurvyMetadataBase
	{
	public:
		::Enum_3_8FD97C8068FD2492 SegmentType; // 0x30
		::System::String* RollbackPointName; // 0x38
		::System::Boolean UseCustomSpeedCurve; // 0x40
		::UnityEngine::AnimationCurve* OverrideSpeedCurve; // 0x48
		::UnityEngine::AnimationCurve* Field_7_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOAIRBUSSEGMENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_ReverseCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOAIRBUSSEGMENT_GET_REVERSECURVE_OFFSET))(this);
		}
	};
}
