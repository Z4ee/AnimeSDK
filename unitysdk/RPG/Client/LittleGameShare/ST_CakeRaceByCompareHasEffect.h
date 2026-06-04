#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_4791D77420C4879A_OFFSET UNITYSDK_OFFSET(0x193B5A30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_5C086862B33E112B_OFFSET UNITYSDK_OFFSET(0x193B7400)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_F4A01425AE24BD00_OFFSET UNITYSDK_OFFSET(0x193B3E40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_FB71BDEB1792949D_OFFSET UNITYSDK_OFFSET(0x193B7490)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x193B3DF0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareHasEffect_TypeDefinitionIndex = 9984;

	class ST_CakeRaceByCompareHasEffect : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 EffectID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5C086862B33E112B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_5C086862B33E112B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F4A01425AE24BD00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_F4A01425AE24BD00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4791D77420C4879A(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_4791D77420C4879A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_FB71BDEB1792949D(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_FB71BDEB1792949D_OFFSET))(a1, a2);
		}
	};
}
