#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsRewardNumControl; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ACDD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4ACB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C4ACA40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsStateTagControl_TypeDefinitionIndex = 79037;

	class LimaoNewsStateTagControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeUnSearch; // 0x38
		::UnityEngine::Transform* _NodeInProgress; // 0x40
		::UnityEngine::Transform* _NodeFinish; // 0x48
		::UnityEngine::Transform* _NodePublish; // 0x50
		::RPG::Client::LimaoNews::LimaoNewsRewardNumControl* _RewardNumControl; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSTATETAGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
