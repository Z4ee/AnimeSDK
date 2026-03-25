#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleBlockType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9FD29C41345F95C8_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E8050)
#define STRUCT_2_9FD29C41345F95C8_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14E80C0)
#define STRUCT_2_9FD29C41345F95C8_METHOD_2_B5DDF0ABC5A6834C_OFFSET UNITYSDK_OFFSET(0x14E8040)

inline static constexpr unsigned int Struct_2_9FD29C41345F95C8_TypeDefinitionIndex = 63963;

struct alignas(4) Struct_2_9FD29C41345F95C8
{
	::RPG::Client::Prop::CommandRobotPuzzleBlockType Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Void Method_2_B5DDF0ABC5A6834C(::RPG::Client::Prop::CommandRobotPuzzleBlockType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleBlockType, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_9FD29C41345F95C8_METHOD_2_B5DDF0ABC5A6834C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9FD29C41345F95C8_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9FD29C41345F95C8_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
