#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C11E070)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11E4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverrideLocation_TypeDefinitionIndex = 17168;

	class LevelNPCInfoOverrideLocation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PosX; // 0x10
		::System::Single PosY; // 0x14
		::System::Single PosZ; // 0x18
		::System::Single RotY; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCInfoOverrideLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfoOverrideLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
