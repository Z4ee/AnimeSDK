#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0xD456730)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4567C0)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int NPCPhysicsRuntimeData_TypeDefinitionIndex = 39848;

	class NPCPhysicsRuntimeData : public ::System::Object
	{
	public:
		::NPCCrowd::CrowdPhysics::DitherState DitherState; // 0x10
		::System::Boolean InitEnableCollision; // 0x1C
		::System::Boolean EnableNavmeshObstacle; // 0x1D
		::System::Boolean EnableCollision; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA_CLEAN_OFFSET))(this);
		}
	};
}
