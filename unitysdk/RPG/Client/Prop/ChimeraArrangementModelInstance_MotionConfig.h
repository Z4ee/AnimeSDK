#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E0AC40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_MotionConfig_TypeDefinitionIndex = 74505;

	class ChimeraArrangementModelInstance_MotionConfig : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
