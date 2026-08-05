#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalConditionNode.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x149E9810)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueSettleNode_TypeDefinitionIndex = 66567;

	class GalPlayArgueSettleNode : public ::MoleMole::GalGame::GalConditionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList_Draw; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList_Win; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList_Lose; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE__CTOR_OFFSET))(this);
		}
	};
}
