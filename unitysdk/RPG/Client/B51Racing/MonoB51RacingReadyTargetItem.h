#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8A9F40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8AAC90)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC8AABE0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingReadyTargetItem_TypeDefinitionIndex = 80633;

	class MonoB51RacingReadyTargetItem : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* TRIGGER_SUCCEED; // 0x0
		// static const ::System::String* TRIGGER_FAILED; // 0x0
		// static const ::System::String* TRIGGER_PENDING; // 0x0
		::UnityEngine::Animator* _Animator; // 0x38
		::RPG::Client::LocalizedText* _TargetText; // 0x40
		::System::String* _LastTrigger; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYTARGETITEM_SETUPVIEW_OFFSET))(this);
		}
	};
}
