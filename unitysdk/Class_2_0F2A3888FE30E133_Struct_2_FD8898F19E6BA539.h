#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_0F2A3888FE30E133_STRUCT_2_FD8898F19E6BA539__CTOR_OFFSET UNITYSDK_OFFSET(0x22B08C0)

inline static constexpr unsigned int Class_2_0F2A3888FE30E133_Struct_2_FD8898F19E6BA539_TypeDefinitionIndex = 34615;

struct alignas(4) Class_2_0F2A3888FE30E133_Struct_2_FD8898F19E6BA539
{
	::System::Int32 Field_2_0; // 0x10
	::RPG::GameCore::CakeRaceCellType Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCellType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_2_0F2A3888FE30E133_STRUCT_2_FD8898F19E6BA539__CTOR_OFFSET))(this, a1, a2);
	}
};
