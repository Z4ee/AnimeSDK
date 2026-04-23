#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x9FA7050)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FA71C0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9FA7110)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA6FD0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EnchantCardConfig_TypeDefinitionIndex = 69983;

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
