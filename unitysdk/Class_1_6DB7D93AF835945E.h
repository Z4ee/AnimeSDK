#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;

#define CLASS_1_6DB7D93AF835945E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C24CA80)
#define CLASS_1_6DB7D93AF835945E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24CAD0)

inline static constexpr unsigned int Class_1_6DB7D93AF835945E_TypeDefinitionIndex = 36148;

class Class_1_6DB7D93AF835945E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_27* LONMALFCKOI; // 0x10
	::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x18
	::System::Boolean GECBBOEPHFC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB7D93AF835945E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB7D93AF835945E_CLEAR_OFFSET))(this);
	}
};
