#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODYIKBODYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9749020)

namespace RPG::Client
{
	inline static constexpr unsigned int FullBodyIKBodyConfig_TypeDefinitionIndex = 56022;

	class FullBodyIKBodyConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* effectorTarget; // 0x10
		::System::Single effectorPositionWeight; // 0x18
		::System::Boolean effectToThighs; // 0x1C
		::System::Single spineStiffness; // 0x20
		::System::Single spinePullBodyVertical; // 0x24
		::System::Single spinePullBodyHorizontal; // 0x28
		::System::Int32 spineSolveIterations; // 0x2C
		::System::Single spineTwistWeight; // 0x30
		::System::Single maintainRotationWeight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODYIKBODYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
