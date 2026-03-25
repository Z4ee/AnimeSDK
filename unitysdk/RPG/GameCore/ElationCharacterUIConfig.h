#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1718AAE0)
#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1718ABE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationCharacterUIConfig_TypeDefinitionIndex = 15154;

	class ElationCharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID EchoPointDesc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ElationCharacterUIConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationCharacterUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
