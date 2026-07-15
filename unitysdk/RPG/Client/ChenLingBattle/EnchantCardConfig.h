#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x1AFD7690)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFD7830)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1AFD7780)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD75D0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EnchantCardConfig_TypeDefinitionIndex = 72308;

	class EnchantCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingEnchantRow* _EnchantRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANTCARDCONFIG_GETDESC_OFFSET))(this, a1);
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
