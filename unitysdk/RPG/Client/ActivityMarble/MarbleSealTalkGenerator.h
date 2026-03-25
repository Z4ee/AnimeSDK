#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleSealTalkConfig.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GENERATEBYTEAM_OFFSET UNITYSDK_OFFSET(0x8F6CBE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GETRANDOMTALKCONFIG_OFFSET UNITYSDK_OFFSET(0x8F6D430)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GET_OFFSET UNITYSDK_OFFSET(0x8F6CA90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8F6CB80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8F6D5D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8F6CA10)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTalkGenerator_TypeDefinitionIndex = 61428;

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

		::System::Void GenerateByTeam(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* team, ::RPG::Client::ActivityMarble::MarbleMatchContext* context, ::System::Boolean isEnemy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleMatchContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GENERATEBYTEAM_OFFSET))(this, team, context, isEnemy);
		}

		::RPG::Client::ActivityMarble::MarbleSealTalkConfig GetRandomTalkConfig(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* team, ::RPG::Client::ActivityMarble::MarbleMatchContext* context, ::System::Boolean isEnemy)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTalkConfig(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleMatchContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_GETRANDOMTALKCONFIG_OFFSET))(this, team, context, isEnemy);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKGENERATOR_RESET_OFFSET))(this);
		}
	};
}
