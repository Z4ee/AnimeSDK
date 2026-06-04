#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_4D61D47E699F9476_OFFSET UNITYSDK_OFFSET(0x193B4630)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_A5286B12210E23F3_OFFSET UNITYSDK_OFFSET(0x193B7FF0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_B0B33332B8E63AC5_OFFSET UNITYSDK_OFFSET(0x193B5C70)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_E2FF12AF7A38D687_OFFSET UNITYSDK_OFFSET(0x193B8080)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x193B45E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIdleCanEnterAIState_TypeDefinitionIndex = 9985;

	class ST_CakeRaceByIdleCanEnterAIState : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A5286B12210E23F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_A5286B12210E23F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4D61D47E699F9476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_4D61D47E699F9476_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B0B33332B8E63AC5(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_B0B33332B8E63AC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E2FF12AF7A38D687(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_E2FF12AF7A38D687_OFFSET))(a1, a2);
		}
	};
}
