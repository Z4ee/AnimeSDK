#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA6903D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_FINISH_OFFSET UNITYSDK_OFFSET(0xA6905B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xA6906C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xA6906D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xA690610)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA690370)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelShowAbilityDetailCommand_TypeDefinitionIndex = 71241;

	class ChimeraDuelShowAbilityDetailCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* _Caster; // 0x18
		::System::Single _CurrentTime; // 0x20
		::System::Int32 _CastedCount; // 0x24
		::System::UInt32 _SkillID; // 0x28
		::System::Single _MaxSafeTime; // 0x2C

		::System::Void _ctor(::Class_2_49CAB3DE74280C58* caster, ::Class_2_49CAB3DE74280C58* castedSkillEntity, ::System::Int32 castedCount, ::Class_2_6AA7CA7493367EF4* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::System::Int32, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND__CTOR_OFFSET))(this, caster, castedSkillEntity, castedCount, context);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* context, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_EXECUTE_OFFSET))(this, context, onComplete);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_FINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELSHOWABILITYDETAILCOMMAND_TICK_OFFSET))(this, fElapsedSeconds);
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
