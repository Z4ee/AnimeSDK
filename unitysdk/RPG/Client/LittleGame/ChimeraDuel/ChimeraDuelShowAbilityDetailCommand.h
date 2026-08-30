#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC2F3C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_FINISH_OFFSET UNITYSDK_OFFSET(0x1AC2F5B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x1AC2F6C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1AC2F6D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0x1AC2F610)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2F360)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelShowAbilityDetailCommand_TypeDefinitionIndex = 77188;

	class ChimeraDuelShowAbilityDetailCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* _Caster; // 0x18
		::System::UInt32 _SkillID; // 0x20
		::System::Single _MaxSafeTime; // 0x24
		::System::Int32 _CastedCount; // 0x28
		::System::Single _CurrentTime; // 0x2C

		::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2, ::System::Int32 a3, ::Class_2_FB9CF047C8AEAA83* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::System::Int32, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_FINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* get_Caster()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_CASTER_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_SKILLID_OFFSET))(this);
		}
	};
}
