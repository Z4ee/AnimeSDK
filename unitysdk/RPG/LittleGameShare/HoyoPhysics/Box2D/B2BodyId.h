#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB613D10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xB613CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB613D80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xB613C30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID__CTOR_OFFSET UNITYSDK_OFFSET(0x7AF1E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyId_TypeDefinitionIndex = 35047;

	struct alignas(8) B2BodyId
	{
		::System::Int32 index1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world0; // 0x18
		::System::UInt16 generation; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean op_LessThan(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYID_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
