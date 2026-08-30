#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_01098DE181271FAE_METHOD_1_19543FAC0245D405_1_OFFSET UNITYSDK_OFFSET(0x19712330)
#define CLASS_1_01098DE181271FAE_METHOD_1_19543FAC0245D405_OFFSET UNITYSDK_OFFSET(0x19712290)

inline static constexpr unsigned int Class_1_01098DE181271FAE_TypeDefinitionIndex = 35864;

class Class_1_01098DE181271FAE : public ::System::Object
{
public:
	static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType Method_1_19543FAC0245D405(::RPG::GameCore::PhysicsRigidBodyType a1)
	{
		return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType(*)(::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + CLASS_1_01098DE181271FAE_METHOD_1_19543FAC0245D405_OFFSET))(a1);
	}

	static ::RPG::GameCore::PhysicsRigidBodyType Method_1_19543FAC0245D405_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a1)
	{
		return ((::RPG::GameCore::PhysicsRigidBodyType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType))((::PBYTE)hIl2Cpp + CLASS_1_01098DE181271FAE_METHOD_1_19543FAC0245D405_1_OFFSET))(a1);
	}
};
