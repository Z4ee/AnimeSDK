#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_MOTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xADB1CD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementSlot_MotionData_TypeDefinitionIndex = 71961;

	class ChimeraArrangementSlot_MotionData : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* Config; // 0x10
		::System::Boolean IsActive; // 0x18
		::UnityEngine::Quaternion TargetQuaternion; // 0x1C
		::UnityEngine::Vector3 SourcePosition; // 0x2C
		::UnityEngine::Quaternion SourceQuaternion; // 0x38
		::UnityEngine::Vector3 TargetPosition; // 0x48
		::System::Single Time; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_MOTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
