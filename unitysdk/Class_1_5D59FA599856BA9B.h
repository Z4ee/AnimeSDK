#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_1_5D59FA599856BA9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1683F5C0)

inline static constexpr unsigned int Class_1_5D59FA599856BA9B_TypeDefinitionIndex = 32215;

class Class_1_5D59FA599856BA9B : public ::System::Object
{
public:
	::System::Int32 Field_1_9; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_1_10; // 0x14
	::System::UInt32 Field_1_12; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_8; // 0x24
	::System::UInt32 Field_1_0; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_4; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Int32 Field_1_11; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_2; // 0x40

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5D59FA599856BA9B__CTOR_OFFSET))(this, a1, a2);
	}
};
