#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2DE72D0)
#define CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2DE71A0)
#define CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2DE72E0)
#define CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x2DE7170)

inline static constexpr unsigned int Class_2_D38A5848A793D38F_Struct_2_9FF8EAFB404E2FCF_TypeDefinitionIndex = 76259;

struct alignas(4) Class_2_D38A5848A793D38F_Struct_2_9FF8EAFB404E2FCF
{
	::System::Int32 NOGELILBICK; // 0x10
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FGDAGBDLAHC; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Class_2_D38A5848A793D38F_Struct_2_9FF8EAFB404E2FCF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D38A5848A793D38F_Struct_2_9FF8EAFB404E2FCF))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_STRUCT_2_9FF8EAFB404E2FCF_GETHASHCODE_OFFSET))(this);
	}
};
