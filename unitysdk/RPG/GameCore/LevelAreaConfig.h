#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3BD30)
#define RPG_GAMECORE_LEVELAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaConfig_TypeDefinitionIndex = 17411;

	class LevelAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAreaConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
