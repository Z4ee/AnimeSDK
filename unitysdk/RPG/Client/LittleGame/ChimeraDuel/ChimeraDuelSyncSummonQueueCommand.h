#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelSummonChimeraDisplayData; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x999FF10)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET UNITYSDK_OFFSET(0x99A0080)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0x99A00E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x999FBC0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelSyncSummonQueueCommand_TypeDefinitionIndex = 63207;

	class ChimeraDuelSyncSummonQueueCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* EnemySummonQueue; // 0x18
		::RPG::Client::Prop::DuelChimeraProxy* Caster; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* AllySummonQueue; // 0x28
		::System::Boolean _IsComplete; // 0x30
		::System::Int32 _CasterID; // 0x34

		::System::Void _ctor(::Class_2_6AA7CA7493367EF4* context, ::System::Int32 casterID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND__CTOR_OFFSET))(this, context, casterID);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* nodeContext, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET))(this, nodeContext, onComplete);
		}

		::System::Void FlyToSummonQueueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET))(this, deltaTime);
		}
	};
}
