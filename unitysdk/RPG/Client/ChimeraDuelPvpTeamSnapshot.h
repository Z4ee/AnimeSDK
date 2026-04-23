#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_3;
class Class_1_85AE2DC43E9AF910;
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_EXPORTBATTLESETUP_OFFSET UNITYSDK_OFFSET(0xA021BD0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xA021B90)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA021BB0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xA021BA0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA021BC0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xA021030)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelPvpTeamSnapshot_TypeDefinitionIndex = 58307;

	class ChimeraDuelPvpTeamSnapshot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x10
		::System::UInt32 _MasterID_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_766E1CF11E204F43_3* lineup, ::RPG::GameCore::ChimeraDuelTeamType teamType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_3*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT__CTOR_OFFSET))(this, lineup, teamType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_CHIMERAS_OFFSET))(this, value);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_MASTERID_OFFSET))(this, value);
		}

		static ::Class_1_85AE2DC43E9AF910* ExportBattleSetup(::RPG::Client::ChimeraDuelPvpTeamSnapshot* ally, ::RPG::Client::IChimeraDuelChallengeTeam* enemy)
		{
			return ((::Class_1_85AE2DC43E9AF910*(*)(::RPG::Client::ChimeraDuelPvpTeamSnapshot*, ::RPG::Client::IChimeraDuelChallengeTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_EXPORTBATTLESETUP_OFFSET))(ally, enemy);
		}
	};
}
