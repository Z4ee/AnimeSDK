#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1859F150)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGestureDisplayWidgetController_Context_TypeDefinitionIndex = 90276;

	class UIGeneralAvatarGestureDisplayWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnGestureItemSelected; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREDISPLAYWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
