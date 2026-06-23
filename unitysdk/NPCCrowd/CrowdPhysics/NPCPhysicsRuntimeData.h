#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x10709330)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x107093C0)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int NPCPhysicsRuntimeData_TypeDefinitionIndex = 82011;

	class NPCPhysicsRuntimeData : public ::System::Object
	{
	public:
		::System::Boolean EnableCollision; // 0x10
		::System::Boolean InitEnableCollision; // 0x11
		::System::Boolean EnableNavmeshObstacle; // 0x12
		::NPCCrowd::CrowdPhysics::DitherState DitherState; // 0x14

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
