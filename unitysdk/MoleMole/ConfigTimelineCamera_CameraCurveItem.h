#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E46C30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineCamera_CameraCurveItem_TypeDefinitionIndex = 47290;

	class ConfigTimelineCamera_CameraCurveItem : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEITEM__CTOR_OFFSET))(this);
		}
	};
}
