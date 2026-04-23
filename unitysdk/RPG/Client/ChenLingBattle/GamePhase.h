#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F793F2BF173A91F;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x9FA7220)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x9FA7390)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x9FA7270)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7210)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 70054;

	class GamePhase : public ::System::Object
	{
	public:
		::Class_1_F65FD1783A40C6D8* _PhaseManager; // 0x10

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* get__GameContext()
		{
			return ((::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET))(this);
		}

		::System::Void SendMessage_(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE__OFFSET))(this, message, obj);
		}

		::Class_1_4F793F2BF173A91F* get__NetworkService()
		{
			return ((::Class_1_4F793F2BF173A91F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET))(this);
		}
	};
}
