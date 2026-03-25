#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POSCONSTRAINTBONES__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF50E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PosConstraintBones_TypeDefinitionIndex = 57498;

	class PosConstraintBones : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AdjustBone; // 0x10
		::UnityEngine::Vector3 PosOffset; // 0x18
		::UnityEngine::Quaternion RotOffset; // 0x24
		::System::Single Weight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POSCONSTRAINTBONES__CTOR_OFFSET))(this);
		}
	};
}
