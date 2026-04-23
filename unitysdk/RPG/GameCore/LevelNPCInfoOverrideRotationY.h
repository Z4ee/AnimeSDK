#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4C7C0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4CC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverrideRotationY_TypeDefinitionIndex = 16471;

	class LevelNPCInfoOverrideRotationY : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RotY; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCInfoOverrideRotationY*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfoOverrideRotationY*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_FROMBINARY_OFFSET))(array, val);
		}
	};
}
