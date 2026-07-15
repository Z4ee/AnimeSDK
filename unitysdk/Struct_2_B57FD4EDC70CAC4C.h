#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43B0AF86156D9901;

#define STRUCT_2_B57FD4EDC70CAC4C_METHOD_2_0137D0A83C61C751_OFFSET UNITYSDK_OFFSET(0x3953760)
#define STRUCT_2_B57FD4EDC70CAC4C_METHOD_2_B64C224EE082CAC3_OFFSET UNITYSDK_OFFSET(0x3953750)

inline static constexpr unsigned int Struct_2_B57FD4EDC70CAC4C_TypeDefinitionIndex = 51948;

struct alignas(8) Struct_2_B57FD4EDC70CAC4C
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
	::RPG::GameCore::FixPoint Field_2_4; // 0x30
	::RPG::GameCore::FixPoint Field_2_5; // 0x38
	::RPG::GameCore::FixPoint Field_2_6; // 0x40
	::RPG::GameCore::FixPoint Field_2_7; // 0x48
	::RPG::GameCore::FixPoint Field_2_8; // 0x50
	::RPG::GameCore::FixPoint Field_2_9; // 0x58
	::RPG::GameCore::FixPoint Field_2_10; // 0x60
	::RPG::GameCore::FixPoint Field_2_11; // 0x68
	::RPG::GameCore::FixPoint Field_2_12; // 0x70
	::RPG::GameCore::FixPoint Field_2_13; // 0x78
	::RPG::GameCore::FixPoint Field_2_14; // 0x80
	::RPG::GameCore::FixPoint Field_2_15; // 0x88
	::RPG::GameCore::FixPoint Field_2_16; // 0x90

	::System::Void Method_2_B64C224EE082CAC3(::RPG::GameCore::AttackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + STRUCT_2_B57FD4EDC70CAC4C_METHOD_2_B64C224EE082CAC3_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_0137D0A83C61C751(::Class_1_43B0AF86156D9901* a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_43B0AF86156D9901*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_B57FD4EDC70CAC4C_METHOD_2_0137D0A83C61C751_OFFSET))(this, a1, a2, a3);
	}
};
