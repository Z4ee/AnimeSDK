#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8DAB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8DC70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8D550)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8D3D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD8DD00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD8DCA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl_TypeDefinitionIndex = 73836;

	class LimaoNewsIssueTabItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _Btn; // 0x38
		::UnityEngine::UI::Text* _Text; // 0x40
		::UnityEngine::Transform* _NodeRedDot; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
