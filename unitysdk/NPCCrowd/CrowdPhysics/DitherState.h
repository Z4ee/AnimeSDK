#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState_EDitherState.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState_EPrepareState.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define NPCCROWD_CROWDPHYSICS_DITHERSTATE_CLEAN_OFFSET UNITYSDK_OFFSET(0x60FA00)
#define NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEDITHER_OFFSET UNITYSDK_OFFSET(0x60FB30)
#define NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEFADEIN_OFFSET UNITYSDK_OFFSET(0x60FAC0)
#define NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEFADEOUT_OFFSET UNITYSDK_OFFSET(0x60FA50)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_TypeDefinitionIndex = 60840;

	struct alignas(4) DitherState
	{
		// static const ::System::Single PrepareFadeInTime; // 0x0
		// static const ::System::Single PrepareFadeOutTime; // 0x0
		::NPCCrowd::CrowdPhysics::DitherState_EDitherState _ditherState; // 0x10
		::NPCCrowd::CrowdPhysics::DitherState_EPrepareState _prepareState; // 0x14
		::System::Single _prepareTime; // 0x18

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_DITHERSTATE_CLEAN_OFFSET))(this);
		}

		::System::Void UpdateFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEFADEOUT_OFFSET))(this);
		}

		::System::Void UpdateFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEFADEIN_OFFSET))(this);
		}

		::System::Void UpdateDither(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::System::Boolean isCrowd)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_DITHERSTATE_UPDATEDITHER_OFFSET))(this, entity, deltaTime, isCrowd);
		}
	};
}
