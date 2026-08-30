#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE84D8E232AFC277;
class Class_1_F08EB77E19F16C2C;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B93B850)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x1B93BE80)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1B95AF20)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93B610)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 75815;

	class GamePhase : public ::System::Object
	{
	public:
		::Class_1_CE84D8E232AFC277* _PhaseManager; // 0x10

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* get__GameContext()
		{
			return ((::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET))(this);
		}

		::System::Void SendMessage_(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::Class_1_F08EB77E19F16C2C* get__NetworkService()
		{
			return ((::Class_1_F08EB77E19F16C2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET))(this);
		}
	};
}
