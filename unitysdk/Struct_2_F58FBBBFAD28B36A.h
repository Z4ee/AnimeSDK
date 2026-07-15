#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F58FBBBFAD28B36A_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x39CC4C0)

inline static constexpr unsigned int Struct_2_F58FBBBFAD28B36A_TypeDefinitionIndex = 59337;

struct alignas(4) Struct_2_F58FBBBFAD28B36A
{
	::RPG::GameCore::FloorInstanceType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_F58FBBBFAD28B36A_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}
};
