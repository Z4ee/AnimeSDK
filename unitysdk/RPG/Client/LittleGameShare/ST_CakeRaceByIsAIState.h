#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_363F0F30B6C8F994_OFFSET UNITYSDK_OFFSET(0x16E86840)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_METHOD_5_7E846F6F252DFF69_OFFSET UNITYSDK_OFFSET(0x16E89CD0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E867F0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsAIState_TypeDefinitionIndex = 9993;

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
	};
}
