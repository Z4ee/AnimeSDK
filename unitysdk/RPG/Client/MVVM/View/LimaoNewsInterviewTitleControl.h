#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA74AF00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74AD40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74AC20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74AF70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74AF10)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTitleControl_TypeDefinitionIndex = 68450;

	class LimaoNewsInterviewTitleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTITLECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
