#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelSummonChimeraDisplayData; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE1410)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET UNITYSDK_OFFSET(0xBDE1500)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xBDE1570)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE0FB0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelSyncSummonQueueCommand_TypeDefinitionIndex = 72185;

	class ChimeraDuelSyncSummonQueueCommand : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* Caster; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* AllySummonQueue; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelSummonChimeraDisplayData*>* EnemySummonQueue; // 0x20
		::System::Action* _OnComplete; // 0x28
		::System::Boolean _IsComplete; // 0x30
		::System::Int32 _CasterID; // 0x34

		::System::Void _ctor(::Class_2_FB9CF047C8AEAA83* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void FlyToSummonQueueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_FLYTOSUMMONQUEUEFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSYNCSUMMONQUEUECOMMAND_TICK_OFFSET))(this, a1);
		}
	};
}
