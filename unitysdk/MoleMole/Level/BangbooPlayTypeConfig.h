#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayHUDType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeTemplate.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayTypeConfig_TypeDefinitionIndex = 54759;

	struct alignas(8) BangbooPlayTypeConfig
	{
		::MoleMole::Level::BangbooPlayTypeTemplate templateType; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Level::BangbooAbilityType>* extraAbilities; // 0x18
		::Il2CppArray<::System::String*>* extraAbilityNames; // 0x20
		::MoleMole::Level::BangbooPlayHUDType hudType; // 0x28
		::System::Boolean HideInteractAndBranchButton; // 0x2C
		::System::Boolean ForceInteractBtnNotKeepShowOnHUD; // 0x2D
		::MoleMole::Cameras::BangbooAdjustmentCameraConfig* AdjustmentCameraConfig; // 0x30
	};
}
