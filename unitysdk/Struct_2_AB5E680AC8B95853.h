#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AB5E680AC8B95853_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x3A4D4D0)
#define STRUCT_2_AB5E680AC8B95853__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4D4C0)

inline static constexpr unsigned int Struct_2_AB5E680AC8B95853_TypeDefinitionIndex = 36534;

struct alignas(4) Struct_2_AB5E680AC8B95853
{
	::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x10
	::System::Int32 FACIFJMPDCC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB5E680AC8B95853__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB5E680AC8B95853_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}
};
