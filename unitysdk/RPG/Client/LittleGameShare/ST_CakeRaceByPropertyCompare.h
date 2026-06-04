#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_22AB930F87CCE276_OFFSET UNITYSDK_OFFSET(0x193B86B0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_3AC8B8CEE388BD1A_OFFSET UNITYSDK_OFFSET(0x193B8740)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_444EE53A2252B138_OFFSET UNITYSDK_OFFSET(0x193B5E20)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_B33E0511F177F870_OFFSET UNITYSDK_OFFSET(0x193B4BC0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x193B4B70)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByPropertyCompare_TypeDefinitionIndex = 9972;

	class ST_CakeRaceByPropertyCompare : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x20
		::RPG::GameCore::CakeRacePropertyCompare Compare; // 0x24
		::System::Int32 Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_22AB930F87CCE276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_22AB930F87CCE276_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B33E0511F177F870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_B33E0511F177F870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_444EE53A2252B138(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_444EE53A2252B138_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3AC8B8CEE388BD1A(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_3AC8B8CEE388BD1A_OFFSET))(a1, a2);
		}
	};
}
