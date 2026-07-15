#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraLevelInfo_LevelSkillMapping; }
namespace RPG::Client { class ChimeraDuelChimeraLevelInfo_LevelUpRule; }
namespace RPG::Client { class ChimeraDuelChimeraLevelInfo_SellRule; }
namespace RPG::Client { class IChimeraDuelChimeraLevelData; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_CONVERTEXPTOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A50D7E0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A50D460)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x1A50AEF0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A50D640)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETLEVELSKILLMAPPING_OFFSET UNITYSDK_OFFSET(0x1A50D4A0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x1A50ABD0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETSELLRULE_OFFSET UNITYSDK_OFFSET(0x1A50D570)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_COREFLAMEVESSELLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x1A50C150)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_COREFLAMEVESSELSELLRULE_OFFSET UNITYSDK_OFFSET(0x1A50C170)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_DEFAULTLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x1A50C120)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_DEFAULTSELLRULE_OFFSET UNITYSDK_OFFSET(0x1A50C140)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET__COREFLAMEVESSELLEVELSKILLMAPPING_OFFSET UNITYSDK_OFFSET(0x1A50C160)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET__DEFAULTLEVELSKILLMAPPING_OFFSET UNITYSDK_OFFSET(0x1A50C130)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50C180)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_TypeDefinitionIndex = 60558;

	class ChimeraDuelChimeraLevelInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* _CoreflameVesselLevelUpRule_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* __DefaultLevelSkillMapping_k__BackingField; // 0x18
		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* __CoreflameVesselLevelSkillMapping_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* _CoreflameVesselSellRule_k__BackingField; // 0x28
		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* _DefaultLevelUpRule_k__BackingField; // 0x30
		::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* _DefaultSellRule_k__BackingField; // 0x38
		::System::Int32 _ExpToAttributeDeltaScale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* get_DefaultLevelUpRule()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_DEFAULTLEVELUPRULE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* get__DefaultLevelSkillMapping()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET__DEFAULTLEVELSKILLMAPPING_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* get_DefaultSellRule()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_DEFAULTSELLRULE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* get_CoreflameVesselLevelUpRule()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_COREFLAMEVESSELLEVELUPRULE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* get__CoreflameVesselLevelSkillMapping()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET__COREFLAMEVESSELLEVELSKILLMAPPING_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* get_CoreflameVesselSellRule()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GET_COREFLAMEVESSELSELLRULE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* GetLevelUpRule(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETLEVELUPRULE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping* GetLevelSkillMapping(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelSkillMapping*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETLEVELSKILLMAPPING_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* GetSellRule(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETSELLRULE_OFFSET))(this, a1);
		}

		::RPG::Client::IChimeraDuelChimeraLevelData* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IChimeraDuelChimeraLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IChimeraDuelChimeraLevelData* GetData_1(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::IChimeraDuelChimeraLevelData*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_GETDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 ConvertExpToAttribute(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_CONVERTEXPTOATTRIBUTE_OFFSET))(this, a1);
		}
	};
}
