#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_98FEC005A4F55264_OFFSET UNITYSDK_OFFSET(0x1D30BF60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_9B11AF1FF72E254B_OFFSET UNITYSDK_OFFSET(0x1D30F1B0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_AB6EB0FE0A9F49E8_OFFSET UNITYSDK_OFFSET(0x1D30F160)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_F4A01425AE24BD00_OFFSET UNITYSDK_OFFSET(0x1D30A770)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A760)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByCompareHasEffect_TypeDefinitionIndex = 10335;

	class ST_CakeRaceByCompareHasEffect : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::UInt32 EffectID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AB6EB0FE0A9F49E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_AB6EB0FE0A9F49E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F4A01425AE24BD00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_F4A01425AE24BD00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_98FEC005A4F55264(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_98FEC005A4F55264_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9B11AF1FF72E254B(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYCOMPAREHASEFFECT_METHOD_5_9B11AF1FF72E254B_OFFSET))(a1, a2);
		}
	};
}
