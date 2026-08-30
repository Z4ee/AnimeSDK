#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingMagicRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x1CC281C0)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC28360)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CC282B0)
#define RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC28100)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int MagicCardConfig_TypeDefinitionIndex = 75743;

	class MagicCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingMagicRow* _MagicRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_MAGICCARDCONFIG_GETDESC_OFFSET))(this, a1);
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
