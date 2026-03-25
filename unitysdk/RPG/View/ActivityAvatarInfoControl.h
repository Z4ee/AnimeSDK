#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xAB12F70)
#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB11940)
#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xAB12D50)
#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB12F80)
#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xAB12FE0)

namespace RPG::View
{
	inline static constexpr unsigned int ActivityAvatarInfoControl_TypeDefinitionIndex = 41926;

	class ActivityAvatarInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38
		::UnityEngine::UI::Button* Field_6_2; // 0x40
		::UnityEngine::UI::Image* Field_6_3; // 0x48
		::UnityEngine::UI::Text* Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}
	};
}
