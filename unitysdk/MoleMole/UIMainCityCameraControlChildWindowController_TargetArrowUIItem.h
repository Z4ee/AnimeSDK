#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityCameraControlChildWindowController_TargetArrowUIItem_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIGeneralTargetArrowWidgetController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER_TARGETARROWUIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15563560)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController_TargetArrowUIItem_TypeDefinitionIndex = 82607;

	class UIMainCityCameraControlChildWindowController_TargetArrowUIItem : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTargetArrowWidgetController* widget; // 0x10
		::System::String* key; // 0x18
		::UnityEngine::Transform* targetTransform; // 0x20
		::MoleMole::UIMainCityCameraControlChildWindowController_TargetArrowUIItem_State state; // 0x28
		::UnityEngine::Vector3 offset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER_TARGETARROWUIITEM__CTOR_OFFSET))(this);
		}
	};
}
