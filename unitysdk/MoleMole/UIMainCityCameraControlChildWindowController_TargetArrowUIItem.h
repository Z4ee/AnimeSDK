#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityCameraControlChildWindowController_TargetArrowUIItem_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIGeneralTargetArrowWidgetController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER_TARGETARROWUIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182A67B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController_TargetArrowUIItem_TypeDefinitionIndex = 78530;

	class UIMainCityCameraControlChildWindowController_TargetArrowUIItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* targetTransform; // 0x10
		::MoleMole::UIGeneralTargetArrowWidgetController* widget; // 0x18
		::System::String* key; // 0x20
		::UnityEngine::Vector3 offset; // 0x28
		::MoleMole::UIMainCityCameraControlChildWindowController_TargetArrowUIItem_State state; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER_TARGETARROWUIITEM__CTOR_OFFSET))(this);
		}
	};
}
