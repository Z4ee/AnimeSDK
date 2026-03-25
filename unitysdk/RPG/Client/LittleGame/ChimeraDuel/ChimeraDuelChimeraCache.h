#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1;
class Class_1_0574DA6BF5DF5E24;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }
namespace RPG::GameCore { class ChimeraDuelPresetChimeraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CALCULATERANDOMSEEDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x999BD60)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x999C740)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_1_OFFSET UNITYSDK_OFFSET(0x999BAB0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x999B820)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_1_OFFSET UNITYSDK_OFFSET(0x999BA00)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_OFFSET UNITYSDK_OFFSET(0x999B8A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x999B640)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x999B720)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x999B7A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_OFFSET UNITYSDK_OFFSET(0x999B340)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETCHIMERADATA_OFFSET UNITYSDK_OFFSET(0x999C640)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x999C3F0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETTONEXTLEVELEXP_OFFSET UNITYSDK_OFFSET(0x999C320)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOCHIMERALOG_OFFSET UNITYSDK_OFFSET(0x999BE70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOLOG_OFFSET UNITYSDK_OFFSET(0x999BF70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x999AE40)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x999AEA0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x999AF90)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x999B030)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x999BBD0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x999BC90)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x999AB00)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelChimeraCache_TypeDefinitionIndex = 63190;

	class ChimeraDuelChimeraCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* EquipmentIDs; // 0x10
		::System::Int32 UniqueID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x20
		::System::Int32 CurrentAttack; // 0x24
		::System::Int32 TeamPosition; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::UInt32 Exp; // 0x30
		::System::Int32 CurrentHP; // 0x34

		::System::Void _ctor(::Class_2_49CAB3DE74280C58* entity, ::Class_2_6AA7CA7493367EF4* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_OFFSET))(this, entity, context);
		}

		::System::Void _ctor_1(::Class_1_0574DA6BF5DF5E24* summonUnit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0574DA6BF5DF5E24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_1_OFFSET))(this, summonUnit);
		}

		::System::Void _ctor_2(::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition, ::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_2_OFFSET))(this, teamType, teamPosition, chimera);
		}

		::System::Void _ctor_3(::System::UInt32 masterID, ::System::Int32 uniqueID, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_3_OFFSET))(this, masterID, uniqueID, teamType, teamPosition);
		}

		::System::Void _ctor_4(::RPG::GameCore::ChimeraDuelPresetChimeraConfig* config, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_4_OFFSET))(this, config, teamType, teamPosition);
		}

		::System::Void _ctor_5(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 exp, ::System::Int32 hp, ::System::Int32 atk, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_5_OFFSET))(this, id, level, exp, hp, atk, teamType, teamPosition);
		}

		::System::Void _ctor_6(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_6_OFFSET))(this, other);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create(::Class_2_49CAB3DE74280C58* entity, ::Class_2_6AA7CA7493367EF4* context)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::Class_2_49CAB3DE74280C58*, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_OFFSET))(entity, context);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_1(::System::UInt32 masterID, ::System::Int32 uniqueID, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_1_OFFSET))(masterID, uniqueID, teamType, teamPosition);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_2(::Class_1_02098A44CBBFEEE1* chimera, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::Class_1_02098A44CBBFEEE1*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_2_OFFSET))(chimera, teamType, teamPosition);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_3(::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition, ::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_3_OFFSET))(teamType, teamPosition, chimera);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFake(::RPG::GameCore::ChimeraDuelPresetChimeraConfig* config, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelPresetChimeraConfig*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_OFFSET))(config, teamType, teamPosition);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFromPreset(::System::UInt32 presetID, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_OFFSET))(presetID, teamType, teamPosition);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFromPreset_1(::RPG::GameCore::ChimeraDuelChimeraPresetRow* row, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_1_OFFSET))(row, teamType, teamPosition);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFake_1(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 exp, ::System::Int32 hp, ::System::Int32 atk, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Int32 teamPosition)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_1_OFFSET))(id, level, exp, hp, atk, teamType, teamPosition);
		}

		::System::Int32 CalculateRandomSeedComponent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CALCULATERANDOMSEEDCOMPONENT_OFFSET))(this);
		}

		::System::String* ToChimeraLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOCHIMERALOG_OFFSET))(this);
		}

		::System::String* ToLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOLOG_OFFSET))(this);
		}

		::System::Int32 GetToNextLevelExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETTONEXTLEVELEXP_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* GetSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETSKILLDATA_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraData* GetChimeraData()
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETCHIMERADATA_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CLEAR_OFFSET))(this);
		}
	};
}
