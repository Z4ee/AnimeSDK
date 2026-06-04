#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODYIKLIMBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA4690)

namespace RPG::Client
{
	inline static constexpr unsigned int FullBodyIKLimbConfig_TypeDefinitionIndex = 64183;

	class FullBodyIKLimbConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* effectorTarget; // 0x10
		::System::Single effectorPositionWeight; // 0x18
		::System::Single effectorRotationWeight; // 0x1C
		::System::Single effectorMaintainRelativePositionWeight; // 0x20
		::System::Single pull; // 0x24
		::System::Single push; // 0x28
		::System::Single pushParent; // 0x2C
		::System::Single reach; // 0x30
		::UnityEngine::Transform* bendGoal; // 0x38
		::System::Single bendGoalWeight; // 0x40
		::System::Single mappingWeight; // 0x44
		::System::Single mappingMaintainRotationWeight; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODYIKLIMBCONFIG__CTOR_OFFSET))(this);
		}
	};
}
