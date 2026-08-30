#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF5470)

inline static constexpr unsigned int Class_1_9B3DA0461DA15F70_TypeDefinitionIndex = 35877;

class Class_1_9B3DA0461DA15F70 : public ::System::Object
{
public:
	::System::Object* MLJJIEIPIEM; // 0x10
	::System::Single NFEIGKAMLNE; // 0x18
	::System::Boolean GECBBOEPHFC; // 0x1C
	::RPG::MVector2 IONGHEOGALH; // 0x20
	::System::Single FEFFFCHGJHE; // 0x28
	::RPG::MVector2 NMELCPIOKNO; // 0x2C
	::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x34
	::System::Single BAFKPLNKGGD; // 0x38
	::RPG::MVector2 BBFOLEOPPPL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3DA0461DA15F70__CTOR_OFFSET))(this);
	}
};
