#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x11E48D00)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_ONDROP_OFFSET UNITYSDK_OFFSET(0x11E48D70)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11E48CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController_DefaultDropTarget_TypeDefinitionIndex = 45166;

	class UIZenkovItemIconBtnWidgetController_DefaultDropTarget : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovItemIconBtnWidgetController* _controller; // 0x10

		::System::Void _ctor(::MoleMole::UIZenkovItemIconBtnWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET__CTOR_OFFSET))(this, controller);
		}

		::System::Boolean CanAcceptDrop(::System::Object* payload)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_CANACCEPTDROP_OFFSET))(this, payload);
		}

		::System::Void OnDrop(::System::Object* payload, ::UnityEngine::Transform* sourceTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_ONDROP_OFFSET))(this, payload, sourceTransform);
		}
	};
}
