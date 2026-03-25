#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A98410)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A98350)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A98290)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A98480)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A98420)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewImgControl_TypeDefinitionIndex = 60993;

	class LimaoNewsInterviewImgControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* Field_6_0; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWIMGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
