#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleSealTalkConfig.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GENERATEBYTEAM_OFFSET UNITYSDK_OFFSET(0xC638EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GETRANDOMTALKCONFIG_OFFSET UNITYSDK_OFFSET(0xC639890)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GET_OFFSET UNITYSDK_OFFSET(0xC638DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC638E90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC639A20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC638D20)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTalkGenerator_TypeDefinitionIndex = 74576;

	class MarbleSealTalkGenerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealTalkConfig>* _GenerateConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTalkGenerator* Get()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTalkGenerator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GET_OFFSET))();
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void GenerateByTeam(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1, ::RPG::Client::ActivityMarble::MarbleMatchContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleMatchContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GENERATEBYTEAM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActivityMarble::MarbleSealTalkConfig GetRandomTalkConfig(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1, ::RPG::Client::ActivityMarble::MarbleMatchContext* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTalkConfig(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleMatchContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GETRANDOMTALKCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_RESET_OFFSET))(this);
		}
	};
}
