#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_363F0F30B6C8F994_OFFSET UNITYSDK_OFFSET(0x193B4830)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_40266F153584400F_OFFSET UNITYSDK_OFFSET(0x193B5D00)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_45128FEC44579E05_OFFSET UNITYSDK_OFFSET(0x193B82F0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_7E846F6F252DFF69_OFFSET UNITYSDK_OFFSET(0x193B8260)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x193B47E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsAIState_TypeDefinitionIndex = 9971;

	class ST_CakeRaceByIsAIState : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7E846F6F252DFF69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_7E846F6F252DFF69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_363F0F30B6C8F994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_363F0F30B6C8F994_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_40266F153584400F(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_40266F153584400F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_45128FEC44579E05(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_45128FEC44579E05_OFFSET))(a1, a2);
		}
	};
}
