#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET UNITYSDK_OFFSET(0x190F2F30)

inline static constexpr unsigned int Class_1_9B3DA0461DA15F70_TypeDefinitionIndex = 35016;

class Class_1_9B3DA0461DA15F70 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::RPG::MVector2 Field_1_1; // 0x18
	::RPG::GameCore::PhysicsRigidBodyType Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::RPG::MVector2 Field_1_6; // 0x30
	::RPG::MVector2 Field_1_7; // 0x38
	::System::Single Field_1_8; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET))(this);
	}
};
