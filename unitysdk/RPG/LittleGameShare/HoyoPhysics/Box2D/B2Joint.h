#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEdge.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83D960)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Joint_TypeDefinitionIndex = 36693;

	class B2Joint : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Int32 islandId; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0x1C
		::System::Int32 setIndex; // 0x20
		::System::Single drawScale; // 0x24
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEdge> edges; // 0x28
		::System::Int32 jointId; // 0x40
		::System::Int32 islandPrev; // 0x44
		::System::Int32 islandNext; // 0x48
		::System::Boolean isMarked; // 0x4C
		::System::Boolean collideConnected; // 0x4D
		::System::UInt16 generation; // 0x4E
		::System::Int32 colorIndex; // 0x50
		::System::Int32 localIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT__CTOR_OFFSET))(this);
		}
	};
}
