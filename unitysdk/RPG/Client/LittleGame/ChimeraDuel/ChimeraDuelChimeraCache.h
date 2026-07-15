#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_CC757806132405E2;
class Class_1_D2412BD47CB5EDB5;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }
namespace RPG::GameCore { class ChimeraDuelPresetChimeraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CALCULATERANDOMSEEDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B9B3E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19B9BE00)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_1_OFFSET UNITYSDK_OFFSET(0x19B9B140)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x19B9AF50)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_1_OFFSET UNITYSDK_OFFSET(0x19B9B090)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_OFFSET UNITYSDK_OFFSET(0x19B9AFD0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19B9AD70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x19B9AE50)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x19B9AED0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_OFFSET UNITYSDK_OFFSET(0x19B9AAD0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETCHIMERADATA_OFFSET UNITYSDK_OFFSET(0x19B9BD10)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x19B9BA30)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_GETTONEXTLEVELEXP_OFFSET UNITYSDK_OFFSET(0x19B9B960)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOCHIMERALOG_OFFSET UNITYSDK_OFFSET(0x19B9B510)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_TOLOG_OFFSET UNITYSDK_OFFSET(0x19B9B610)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B9A5B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19B9A610)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19B9A750)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19B9A7F0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19B9B260)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19B9B320)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9A1E0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelChimeraCache_TypeDefinitionIndex = 73693;

	class ChimeraDuelChimeraCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* EquipmentIDs; // 0x10
		::System::Int32 UniqueID; // 0x18
		::System::UInt32 Exp; // 0x1C
		::System::Int32 TeamPosition; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Int32 CurrentHP; // 0x28
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x2C
		::System::UInt32 Level; // 0x30
		::System::Int32 CurrentAttack; // 0x34

		::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_2_FB9CF047C8AEAA83* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Class_1_D2412BD47CB5EDB5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2412BD47CB5EDB5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::ChimeraDuelTeamType a1, ::System::Int32 a2, ::RPG::Client::ChimeraDuelGameSessionChimera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::ChimeraDuelTeamType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::RPG::GameCore::ChimeraDuelPresetChimeraConfig* a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::RPG::GameCore::ChimeraDuelTeamType a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_6(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__CTOR_6_OFFSET))(this, a1);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create(::Class_2_B66C1067C0468FBB* a1, ::Class_2_FB9CF047C8AEAA83* a2)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::Class_2_B66C1067C0468FBB*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_1(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::ChimeraDuelTeamType a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_2(::Class_1_CC757806132405E2* a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::Class_1_CC757806132405E2*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_2_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Create_3(::RPG::GameCore::ChimeraDuelTeamType a1, ::System::Int32 a2, ::RPG::Client::ChimeraDuelGameSessionChimera* a3)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATE_3_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFake(::RPG::GameCore::ChimeraDuelPresetChimeraConfig* a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelPresetChimeraConfig*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFromPreset(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFromPreset_1(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFROMPRESET_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CreateFake_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::RPG::GameCore::ChimeraDuelTeamType a6, ::System::Int32 a7)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE_CREATEFAKE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
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
