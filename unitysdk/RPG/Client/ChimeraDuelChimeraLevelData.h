#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelChimeraLevelRow; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0xCBCE940)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCBCE990)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0xCBCE9E0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCBCE930)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xCBCEA30)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCBCEAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelData_TypeDefinitionIndex = 63407;

	class ChimeraDuelChimeraLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelChimeraLevelRow* __Row_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA__CTOR_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::ChimeraDuelChimeraLevelData* TryCreate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELDATA_TRYCREATE_OFFSET))(a1, a2);
		}
	};
}
