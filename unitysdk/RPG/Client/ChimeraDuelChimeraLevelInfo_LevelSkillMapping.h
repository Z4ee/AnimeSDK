#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChimeraLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORCOREFLAMEVESSEL_OFFSET UNITYSDK_OFFSET(0xB67F4C0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORDEFAULT_OFFSET UNITYSDK_OFFSET(0xB67E9F0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_GETDATA_OFFSET UNITYSDK_OFFSET(0xB67FA20)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xB67FBB0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__GETCHIMERALEVELKEY_OFFSET UNITYSDK_OFFSET(0xB67FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelSkillMapping_TypeDefinitionIndex = 59288;

	class ChimeraDuelChimeraLevelInfo_LevelSkillMapping : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::IChimeraDuelChimeraLevelData*>* _DataDict; // 0x10
		::System::Int32 _MaxLevel; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* CreateForDefault(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORDEFAULT_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* CreateForCoreflameVessel(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_CREATEFORCOREFLAMEVESSEL_OFFSET))(a1);
		}

		::System::Int32 _GetChimeraLevelKey(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING__GETCHIMERALEVELKEY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IChimeraDuelChimeraLevelData* GetData(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::IChimeraDuelChimeraLevelData*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELSKILLMAPPING_GETDATA_OFFSET))(this, a1, a2);
		}
	};
}
