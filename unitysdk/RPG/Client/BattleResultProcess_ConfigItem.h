#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS_CONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x91D0EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess_ConfigItem_TypeDefinitionIndex = 49461;

	class BattleResultProcess_ConfigItem : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::GameCore::BattleResultState, ::System::Collections::IEnumerator*>* ResultProcess; // 0x10
		::System::Func_1<::System::Boolean>* Condition; // 0x18
		::RPG::GameCore::StageType StageType; // 0x20
		::System::Boolean HaveResultPageOnLose; // 0x24
		::System::Boolean HaveResultPageOnWin; // 0x25
		::System::Boolean HaveResultPageOnQuit; // 0x26
		::RPG::Client::BattleResultProcess_RestartOption RestartOption; // 0x28

		::System::Void _ctor(::RPG::GameCore::StageType stageType, ::System::Func_1<::System::Boolean>* condition, ::System::Boolean haveResultPageOnWin, ::System::Boolean haveResultPageOnLose, ::System::Boolean haveResultPageOnQuit, ::RPG::Client::BattleResultProcess_RestartOption restartOption, ::System::Func_2<::RPG::GameCore::BattleResultState, ::System::Collections::IEnumerator*>* resultProcess)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType, ::System::Func_1<::System::Boolean>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::BattleResultProcess_RestartOption, ::System::Func_2<::RPG::GameCore::BattleResultState, ::System::Collections::IEnumerator*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_CONFIGITEM__CTOR_OFFSET))(this, stageType, condition, haveResultPageOnWin, haveResultPageOnLose, haveResultPageOnQuit, restartOption, resultProcess);
		}
	};
}
