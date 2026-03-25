#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AB5E680AC8B95853_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x20DEEA0)
#define STRUCT_2_AB5E680AC8B95853__CTOR_OFFSET UNITYSDK_OFFSET(0x20DEE90)

inline static constexpr unsigned int Struct_2_AB5E680AC8B95853_TypeDefinitionIndex = 28874;

struct alignas(4) Struct_2_AB5E680AC8B95853
{
	::RPG::GameCore::CakeRaceCellType Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB5E680AC8B95853__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB5E680AC8B95853_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
