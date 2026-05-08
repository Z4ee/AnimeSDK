#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x1482AAB0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_ONDROP_OFFSET UNITYSDK_OFFSET(0x1482AB10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1482AAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController_DefaultDropTarget_TypeDefinitionIndex = 76899;

	class UIItemIconBtnWidgetController_DefaultDropTarget : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* _controller; // 0x10

		::System::Void _ctor(::MoleMole::UIItemIconBtnWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET__CTOR_OFFSET))(this, controller);
		}

		::System::Boolean CanAcceptDrop(::System::Object* payload)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_CANACCEPTDROP_OFFSET))(this, payload);
		}

		::System::Void OnDrop(::System::Object* payload, ::UnityEngine::Transform* sourceTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_DEFAULTDROPTARGET_ONDROP_OFFSET))(this, payload, sourceTransform);
		}
	};
}
