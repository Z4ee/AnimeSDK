#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChimeraLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORCOREFLAMEVESSEL_OFFSET UNITYSDK_OFFSET(0x9395710)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9394DD0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_GETDATA_OFFSET UNITYSDK_OFFSET(0x9395C10)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x9395D20)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__GETCHIMERALEVELKEY_OFFSET UNITYSDK_OFFSET(0x9395DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelSkillMapping_TypeDefinitionIndex = 51420;

	class ChimeraDuelChimeraLevelInfo_LevelSkillMapping : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::IChimeraDuelChimeraLevelData*>* _DataDict; // 0x10
		::System::Int32 _MaxLevel; // 0x18

		::System::Void _ctor(::System::Int32 maxLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__CTOR_OFFSET))(this, maxLevel);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* CreateForDefault(::System::Int32 maxLevel)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORDEFAULT_OFFSET))(maxLevel);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* CreateForCoreflameVessel(::System::Int32 maxLevel)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORCOREFLAMEVESSEL_OFFSET))(maxLevel);
		}

		::System::Int32 _GetChimeraLevelKey(::System::UInt32 chimeraID, ::System::Int32 level)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__GETCHIMERALEVELKEY_OFFSET))(this, chimeraID, level);
		}

		::RPG::Client::IChimeraDuelChimeraLevelData* GetData(::System::UInt32 chimeraID, ::System::Int32 level)
		{
			return ((::RPG::Client::IChimeraDuelChimeraLevelData*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_GETDATA_OFFSET))(this, chimeraID, level);
		}
	};
}
