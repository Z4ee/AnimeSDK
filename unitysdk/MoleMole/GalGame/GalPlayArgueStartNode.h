#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x149E9880)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueStartNode_TypeDefinitionIndex = 84444;

	class GalPlayArgueStartNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList; // 0x20
		::System::Boolean hideRightHP; // 0x28
		::System::Boolean hideLeftHP; // 0x29
		::System::Int32 leftInitialHealth; // 0x2C
		::MoleMole::GalGame::GalArgueGoalMode goalMode; // 0x30
		::System::Int32 leftMaxHealth; // 0x34
		::MoleMole::GalGame::GalArgueStageLocation MyTeamLocation; // 0x38
		::System::Int32 rightInitialHealth; // 0x3C
		::System::Int32 rightMaxHealth; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE__CTOR_OFFSET))(this);
		}
	};
}
