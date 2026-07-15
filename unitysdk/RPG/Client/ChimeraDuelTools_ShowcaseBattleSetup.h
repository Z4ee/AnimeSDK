#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_D3E9CB566496BBAE;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP_CREATE_OFFSET UNITYSDK_OFFSET(0x19AF4AC0)
#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CREATE_G__LOADPRESETCHIMERAS_3_0_OFFSET UNITYSDK_OFFSET(0x19AF51B0)
#define RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF5340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTools_ShowcaseBattleSetup_TypeDefinitionIndex = 60519;

	class ChimeraDuelTools_ShowcaseBattleSetup : public ::System::Object
	{
	public:
		::Class_1_D3E9CB566496BBAE* BattleSetup; // 0x10
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

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Create_g__LoadPresetChimeras_3_0(::Il2CppArray<::RPG::GameCore::DynamicValue*>* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::Il2CppArray<::RPG::GameCore::DynamicValue*>*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SHOWCASEBATTLESETUP__CREATE_G__LOADPRESETCHIMERAS_3_0_OFFSET))(a1, a2);
		}
	};
}
