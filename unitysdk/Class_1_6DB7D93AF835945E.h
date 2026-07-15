#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;

#define CLASS_1_6DB7D93AF835945E_CLEAR_OFFSET UNITYSDK_OFFSET(0x13EDA4D0)
#define CLASS_1_6DB7D93AF835945E__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDA520)

inline static constexpr unsigned int Class_1_6DB7D93AF835945E_TypeDefinitionIndex = 35287;

class Class_1_6DB7D93AF835945E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_27* Field_1_0; // 0x10
	::RPG::GameCore::PhysicsRigidBodyType Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB7D93AF835945E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB7D93AF835945E_CLEAR_OFFSET))(this);
	}
};
