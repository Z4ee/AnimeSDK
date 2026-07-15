#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLAND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6464F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Island_TypeDefinitionIndex = 35142;

	class B2Island : public ::System::Object
	{
	public:
		::System::Int32 parentIsland; // 0x10
		::System::Int32 tailBody; // 0x14
		::System::Int32 tailContact; // 0x18
		::System::Int32 constraintRemoveCount; // 0x1C
		::System::Int32 setIndex; // 0x20
		::System::Int32 headBody; // 0x24
		::System::Int32 contactCount; // 0x28
		::System::Int32 headJoint; // 0x2C
		::System::Int32 jointCount; // 0x30
		::System::Int32 islandId; // 0x34
		::System::Int32 localIndex; // 0x38
		::System::Int32 headContact; // 0x3C
		::System::Int32 bodyCount; // 0x40
		::System::Int32 tailJoint; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLAND__CTOR_OFFSET))(this);
		}
	};
}
