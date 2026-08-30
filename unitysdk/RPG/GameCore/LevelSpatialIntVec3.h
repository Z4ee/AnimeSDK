#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSPATIALINTVEC3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1F05D0)
#define RPG_GAMECORE_LEVELSPATIALINTVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F07B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSpatialIntVec3_TypeDefinitionIndex = 17007;

	class LevelSpatialIntVec3 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int16 x; // 0x10
		::System::Int16 y; // 0x12
		::System::Int16 z; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC3__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelSpatialIntVec3*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSpatialIntVec3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC3_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
