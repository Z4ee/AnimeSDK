#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD462FF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4631C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD462990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD4628D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl_TypeDefinitionIndex = 79069;

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
	};
}
