#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::MVVM::View { class LimaoNewsRewardNumControl; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7230)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA7100)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA6EC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA72A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA7240)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsStateTagControl_TypeDefinitionIndex = 60981;

	class LimaoNewsStateTagControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeUnSearch; // 0x30
		::UnityEngine::Transform* _NodeInProgress; // 0x38
		::UnityEngine::Transform* _NodeFinish; // 0x40
		::UnityEngine::Transform* _NodePublish; // 0x48
		::RPG::Client::MVVM::View::LimaoNewsRewardNumControl* _RewardNumControl; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSTATETAGCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
