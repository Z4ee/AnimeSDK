#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A777090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7771D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A776F60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A776EC0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueNumItemControl_TypeDefinitionIndex = 75485;

	class LimaoNewsIssueNumItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _SelectedTrans; // 0x38
		::UnityEngine::Transform* _UnselectedTrans; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueTabViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
