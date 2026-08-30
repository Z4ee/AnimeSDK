#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A0930)

inline static constexpr unsigned int Class_1_9B3DA0461DA15F70_TypeDefinitionIndex = 35877;

class Class_1_9B3DA0461DA15F70 : public ::System::Object
{
public:
	::System::Object* MLJJIEIPIEM; // 0x10
	::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x18
	::System::Single FEFFFCHGJHE; // 0x1C
	::System::Single NFEIGKAMLNE; // 0x20
	::RPG::MVector2 NMELCPIOKNO; // 0x24
	::RPG::MVector2 BBFOLEOPPPL; // 0x2C
	::System::Boolean GECBBOEPHFC; // 0x34
	::RPG::MVector2 IONGHEOGALH; // 0x38
	::System::Single BAFKPLNKGGD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET))(this);
	}
};
