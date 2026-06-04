#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace RPG::GameCore { class ChenLingCardRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0xB5A6DE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5A6F50)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xB5A6EA0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A6D40)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BuildingCardConfig_TypeDefinitionIndex = 70793;

	class BuildingCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingBuildingRow* _BuildingRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGCARDCONFIG_GETDESC_OFFSET))(this, a1);
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
