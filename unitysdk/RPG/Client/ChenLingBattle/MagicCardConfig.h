#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingMagicRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x9339F20)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x933A080)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9339FE0)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9339EA0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int MagicCardConfig_TypeDefinitionIndex = 61984;

	class MagicCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingMagicRow* _MagicRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* row, ::System::Int32 cardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG__CTOR_OFFSET))(this, row, cardIndex);
		}

		::System::String* GetDesc(::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GETDESC_OFFSET))(this, level);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_NAME_OFFSET))(this);
		}
	};
}
