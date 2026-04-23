#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xADB00E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_MotionData_TypeDefinitionIndex = 71959;

	class ChimeraArrangementModelInstance_MotionData : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10
		::System::Boolean IsActive; // 0x18
		::UnityEngine::Quaternion SourceQuaternion; // 0x1C
		::UnityEngine::Vector3 SourcePosition; // 0x2C
		::UnityEngine::Vector3 TargetPosition; // 0x38
		::System::Single Time; // 0x44
		::UnityEngine::Quaternion TargetQuaternion; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
