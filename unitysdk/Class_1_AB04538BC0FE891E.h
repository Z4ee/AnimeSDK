#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }
namespace RPG::GameCore { class ChimeraDuelBackToEndOfTeamNode; }
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }
namespace RPG::GameCore { class ChimeraDuelDeleteEffectNode; }
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace RPG::GameCore { class ChimeraDuelFireEffectNode; }
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }
namespace RPG::GameCore { class ChimeraDuelHysilensEffectNode; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelMoveToStartOfTeamNode; }
namespace RPG::GameCore { class ChimeraDuelNpcAnimatorControlNode; }
namespace RPG::GameCore { class ChimeraDuelNpcDitherInNode; }
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelParallelNode; }
namespace RPG::GameCore { class ChimeraDuelPlayAnimationNode; }
namespace RPG::GameCore { class ChimeraDuelPlayEyeAnimationNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelReorderChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }
namespace RPG::GameCore { class ChimeraDuelSetChimeraLightWeightActiveNode; }
namespace RPG::GameCore { class ChimeraDuelShopModifierEffectNode; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }
namespace RPG::GameCore { class ChimeraDuelSummonNode; }
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }
namespace RPG::GameCore { class ChimeraDuelUIMoveToSummonQueueNode; }
namespace RPG::GameCore { class ChimeraDuelWaitReplaceEffectNode; }
namespace RPG::GameCore { class ChimeraDuelWaitSecondsNode; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AB04538BC0FE891E_METHOD_1_9640A3E889EEDD16_OFFSET UNITYSDK_OFFSET(0x1588FCF0)
#define CLASS_1_AB04538BC0FE891E_METHOD_1_B1956A8456261BA8_OFFSET UNITYSDK_OFFSET(0x1588F260)
#define CLASS_1_AB04538BC0FE891E__CTOR_OFFSET UNITYSDK_OFFSET(0x15890210)

inline static constexpr unsigned int Class_1_AB04538BC0FE891E_TypeDefinitionIndex = 77146;

class Class_1_AB04538BC0FE891E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB04538BC0FE891E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B1956A8456261BA8(::RPG::GameCore::BaseChimeraDuelNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + CLASS_1_AB04538BC0FE891E_METHOD_1_B1956A8456261BA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9640A3E889EEDD16(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelNode*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB04538BC0FE891E_METHOD_1_9640A3E889EEDD16_OFFSET))(this, a1);
	}
};
