#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICpInlevelChildWindowController_TipEnum.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpInlevelChildWindowController_NumInfo_TypeDefinitionIndex = 85330;

	struct alignas(8) UICpInlevelChildWindowController_NumInfo
	{
		::UnityEngine::GameObject* go; // 0x10
		::System::Single duration; // 0x18
		::UnityEngine::Vector3 pos; // 0x1C
		::MoleMole::UICpInlevelChildWindowController_TipEnum tipType; // 0x28
		::System::String* fadeOutAnim; // 0x30
		::System::Single fadeOutBeginTime; // 0x38
		::System::Boolean inFadeOutAnim; // 0x3C
		::System::Boolean isPropTip; // 0x3D
		::System::UInt32 entityId; // 0x40
		::UnityEngine::Vector3 fixedPosOffset; // 0x44
	};
}
