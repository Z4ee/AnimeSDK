#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelChimeraLevelRow; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x93947A0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x93947C0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x93947E0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9394790)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x9394800)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9394880)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelData_TypeDefinitionIndex = 51415;

	class ChimeraDuelChimeraLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelChimeraLevelRow* __Row_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 chimeraID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA__CTOR_OFFSET))(this, chimeraID, level);
		}

		::RPG::GameCore::ChimeraDuelChimeraLevelRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_LEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_SKILLIDS_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelData* TryCreate(::System::UInt32 chimeraID, ::System::UInt32 level)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_TRYCREATE_OFFSET))(chimeraID, level);
		}
	};
}
