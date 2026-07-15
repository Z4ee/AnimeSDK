#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_1940D816D2682AF5_OFFSET UNITYSDK_OFFSET(0x1B9EC9E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_4BE50A0452A54AE1_OFFSET UNITYSDK_OFFSET(0x1B9EC990)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_B33E0511F177F870_OFFSET UNITYSDK_OFFSET(0x1B9E6AF0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_DB09771289D5E922_OFFSET UNITYSDK_OFFSET(0x1B9E7950)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6AE0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByPropertyCompare_TypeDefinitionIndex = 9987;

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

		static ::System::Void Method_5_4BE50A0452A54AE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_4BE50A0452A54AE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B33E0511F177F870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_B33E0511F177F870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DB09771289D5E922(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_DB09771289D5E922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1940D816D2682AF5(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_METHOD_5_1940D816D2682AF5_OFFSET))(a1, a2);
		}
	};
}
