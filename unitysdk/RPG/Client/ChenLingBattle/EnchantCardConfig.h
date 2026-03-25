#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x9339510)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9339670)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x93395D0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9339490)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EnchantCardConfig_TypeDefinitionIndex = 61985;

	class EnchantCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingEnchantRow* _EnchantRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* row, ::System::Int32 cardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG__CTOR_OFFSET))(this, row, cardIndex);
		}

		::System::String* GetDesc(::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GETDESC_OFFSET))(this, level);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_NAME_OFFSET))(this);
		}
	};
}
