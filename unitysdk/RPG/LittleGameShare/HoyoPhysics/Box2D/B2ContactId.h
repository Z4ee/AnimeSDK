#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTID__CTOR_OFFSET UNITYSDK_OFFSET(0x82E000)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactId_TypeDefinitionIndex = 35941;

	struct alignas(8) B2ContactId
	{
		::System::Int32 index1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world0; // 0x18
		::System::Int16 padding; // 0x20
		::System::UInt32 generation; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::System::Int16 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int16, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTID__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
