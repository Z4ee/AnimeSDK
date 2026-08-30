#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C315BE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C315CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C315D20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1C315C70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C315C40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C315C10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1C315BC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x2F440)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Vec2_TypeDefinitionIndex = 36116;

	struct alignas(4) B2Vec2
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 op_UnaryNegation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 op_Addition(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 op_Subtraction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 op_Multiply(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 op_Multiply_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
