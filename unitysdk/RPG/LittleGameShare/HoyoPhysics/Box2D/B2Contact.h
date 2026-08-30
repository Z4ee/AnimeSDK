#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEdge.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2DAE00)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Contact_TypeDefinitionIndex = 35930;

	class B2Contact : public ::System::Object
	{
	public:
		::System::Int32 shapeIdB; // 0x10
		::System::Int32 colorIndex; // 0x14
		::System::UInt32 flags; // 0x18
		::System::Int32 shapeIdA; // 0x1C
		::System::Boolean isMarked; // 0x20
		::System::Int32 islandNext; // 0x24
		::System::Int32 islandPrev; // 0x28
		::System::Int32 contactId; // 0x2C
		::System::UInt32 generation; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEdge> edges; // 0x34
		::System::Int32 localIndex; // 0x4C
		::System::Int32 islandId; // 0x50
		::System::Int32 setIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACT__CTOR_OFFSET))(this);
		}
	};
}
