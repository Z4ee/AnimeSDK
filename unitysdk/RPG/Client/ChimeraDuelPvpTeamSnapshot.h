#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_9;
class Class_1_D3E9CB566496BBAE;
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_EXPORTBATTLESETUP_OFFSET UNITYSDK_OFFSET(0xCBF1EB0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xCBF1E70)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xCBF1E90)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xCBF1E80)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xCBF1EA0)
#define RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF1160)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelPvpTeamSnapshot_TypeDefinitionIndex = 63361;

	class ChimeraDuelPvpTeamSnapshot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x10
		::System::UInt32 _MasterID_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_7F6A638FBAAEC90B_9* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_9*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_CHIMERAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_SET_MASTERID_OFFSET))(this, a1);
		}

		static ::Class_1_D3E9CB566496BBAE* ExportBattleSetup(::RPG::Client::ChimeraDuelPvpTeamSnapshot* a1, ::RPG::Client::IChimeraDuelChallengeTeam* a2)
		{
			return ((::Class_1_D3E9CB566496BBAE*(*)(::RPG::Client::ChimeraDuelPvpTeamSnapshot*, ::RPG::Client::IChimeraDuelChallengeTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPVPTEAMSNAPSHOT_EXPORTBATTLESETUP_OFFSET))(a1, a2);
		}
	};
}
