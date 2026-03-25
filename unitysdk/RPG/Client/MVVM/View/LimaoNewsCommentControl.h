#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A93870)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A93710)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A935F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A938E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A93880)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsCommentControl_TypeDefinitionIndex = 60971;

	class LimaoNewsCommentControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSCOMMENTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
