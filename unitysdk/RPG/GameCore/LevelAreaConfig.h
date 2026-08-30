#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10C870)
#define RPG_GAMECORE_LEVELAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10C8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaConfig_TypeDefinitionIndex = 18107;

	class LevelAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREACONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
