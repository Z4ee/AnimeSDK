#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_85AE2DC43E9AF910;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP_CREATE_OFFSET UNITYSDK_OFFSET(0xA024230)
#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CREATE_G__LOADPRESETCHIMERAS_3_0_OFFSET UNITYSDK_OFFSET(0xA024920)
#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA024A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTools_ShowcaseBattleSetup_TypeDefinitionIndex = 58318;

	class ChimeraDuelTools_ShowcaseBattleSetup : public ::System::Object
	{
	public:
		::Class_1_85AE2DC43E9AF910* BattleSetup; // 0x10
		::System::UInt32 EnemyRankLevel; // 0x18
		::System::UInt32 AllyRankLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* Create()
		{
			return ((::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP_CREATE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Create_g__LoadPresetChimeras_3_0(::Il2CppArray<::RPG::GameCore::DynamicValue*>* dynamicValues, ::RPG::GameCore::ChimeraDuelTeamType team)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::Il2CppArray<::RPG::GameCore::DynamicValue*>*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CREATE_G__LOADPRESETCHIMERAS_3_0_OFFSET))(dynamicValues, team);
		}
	};
}
