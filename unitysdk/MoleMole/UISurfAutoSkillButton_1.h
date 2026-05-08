#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIInLevelGamePlayButtonBaseController.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class RectTransform; }

namespace MoleMole
{
	inline static constexpr unsigned int UISurfAutoSkillButton_1_TypeDefinitionIndex = 68912;

	template <typename TView>
	class UISurfAutoSkillButton_1 : public ::MoleMole::UIInLevelGamePlayButtonBaseController
	{
	public:
		TView View; // 0x0
		::System::Boolean _Value_k__BackingField; // 0x0
	};
}
