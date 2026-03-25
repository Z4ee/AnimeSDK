#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_CREATE_OFFSET UNITYSDK_OFFSET(0x9392810)
#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_GET_FRIENDS_OFFSET UNITYSDK_OFFSET(0x9392D00)
#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_GET_MASTERS_OFFSET UNITYSDK_OFFSET(0x9392D10)
#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x9392890)
#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__INITFRIENDS_OFFSET UNITYSDK_OFFSET(0x9392910)
#define RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__INITMASTERS_OFFSET UNITYSDK_OFFSET(0x9392B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChallengeGameSession_TypeDefinitionIndex = 51373;

	class ChimeraDuelChallengeGameSession : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>* _Masters_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>* _Friends_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelChallengeGameSession* Create()
		{
			return ((::RPG::Client::ChimeraDuelChallengeGameSession*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_CREATE_OFFSET))();
		}

		::System::Void _InitFriends()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__INITFRIENDS_OFFSET))(this);
		}

		::System::Void _InitMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION__INITMASTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>* get_Friends()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_GET_FRIENDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>* get_Masters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IChimeraDuelChallengeTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGEGAMESESSION_GET_MASTERS_OFFSET))(this);
		}
	};
}
