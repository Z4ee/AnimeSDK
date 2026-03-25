#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA031C20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_MotionData_TypeDefinitionIndex = 63912;

	class ChimeraArrangementModelInstance_MotionData : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10
		::UnityEngine::Quaternion TargetQuaternion; // 0x18
		::UnityEngine::Vector3 SourcePosition; // 0x28
		::UnityEngine::Quaternion SourceQuaternion; // 0x34
		::UnityEngine::Vector3 TargetPosition; // 0x44
		::System::Single Time; // 0x50
		::System::Boolean IsActive; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
