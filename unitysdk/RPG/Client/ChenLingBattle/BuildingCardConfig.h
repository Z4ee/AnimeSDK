#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace RPG::GameCore { class ChenLingCardRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x931EF90)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x931F0F0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x931F050)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x931EEF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BuildingCardConfig_TypeDefinitionIndex = 61983;

	class BuildingCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingBuildingRow* _BuildingRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* row, ::System::Int32 cardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG__CTOR_OFFSET))(this, row, cardIndex);
		}

		::System::String* GetDesc(::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GETDESC_OFFSET))(this, level);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_NAME_OFFSET))(this);
		}
	};
}
