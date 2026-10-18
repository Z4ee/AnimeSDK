#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3AD650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AD760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3AD570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3AD4D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueNumItemControl_TypeDefinitionIndex = 80389;

	class LimaoNewsIssueNumItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _SelectedTrans; // 0x40
		::UnityEngine::Transform* _UnselectedTrans; // 0x48

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
