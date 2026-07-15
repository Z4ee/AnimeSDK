#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_3;
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191F6870)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET UNITYSDK_OFFSET(0x191F6F10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c__DisplayClass42_0_TypeDefinitionIndex = 60411;

	class ChallengePeakTeamContext___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* lineupAvatarIDs; // 0x10
		::RPG::Client::ChallengePeakTeamContext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckHaveEquipmentConflict_b__1(::Class_1_7F6A638FBAAEC90B_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET))(this, a1);
		}
	};
}
