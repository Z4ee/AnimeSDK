#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCBE2540)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCBE2730)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCBE26C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCBE27B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCBE2720)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCBE26D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBE2530)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE23C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeam__ExportAllMembersSnapshot_d__41_TypeDefinitionIndex = 63386;

	class ChimeraDuelGameSessionTeam__ExportAllMembersSnapshot_d__41 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* __2__current; // 0x10
		::RPG::Client::ChimeraDuelGameSessionTeam* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 __l__initialThreadId; // 0x24
		::System::Int32 _position_5__2; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuel_ChimeraDuelChimeraCache__get_Current()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuel_ChimeraDuelChimeraCache__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELCHIMERACACHE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__EXPORTALLMEMBERSSNAPSHOT_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
