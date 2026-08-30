#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_15AB4360A66D5CB4_OFFSET UNITYSDK_OFFSET(0x1CD53490)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_48AEDB4CF72198DB_OFFSET UNITYSDK_OFFSET(0x1CD4EF30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_4D61D47E699F9476_OFFSET UNITYSDK_OFFSET(0x1CD4DCF0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_828BBDFB786BC5C0_OFFSET UNITYSDK_OFFSET(0x1CD53440)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4DCE0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIdleCanEnterAIState_TypeDefinitionIndex = 10336;

	class ST_CakeRaceByIdleCanEnterAIState : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_828BBDFB786BC5C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_828BBDFB786BC5C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4D61D47E699F9476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_4D61D47E699F9476_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_48AEDB4CF72198DB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_48AEDB4CF72198DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_15AB4360A66D5CB4(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYIDLECANENTERAISTATE_METHOD_5_15AB4360A66D5CB4_OFFSET))(a1, a2);
		}
	};
}
