#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalConditionNode.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x136A4080)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueHealthChangeNode_TypeDefinitionIndex = 59131;

	class GalPlayArgueHealthChangeNode : public ::MoleMole::GalGame::GalConditionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList; // 0x30
		::MoleMole::GalGame::GalArgueStageLocation HealthChangeTeamLocation; // 0x38
		::System::Int32 healthDelta; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE__CTOR_OFFSET))(this);
		}
	};
}
