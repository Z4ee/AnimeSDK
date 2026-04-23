#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSPATIALINTVEC2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A46ED0)
#define RPG_GAMECORE_LEVELSPATIALINTVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSpatialIntVec2_TypeDefinitionIndex = 16320;

	class LevelSpatialIntVec2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int16 x; // 0x10
		::System::Int16 y; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC2__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSpatialIntVec2*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSpatialIntVec2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC2_FROMBINARY_OFFSET))(array, val);
		}
	};
}
