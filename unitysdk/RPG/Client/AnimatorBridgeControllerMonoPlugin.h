#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class AnimatorBridgeControllerBehavior; }
namespace RPG::Client { class BridgeChildAnimator; }
namespace System { class String; }

#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_METHOD_7_5112DAEA12867223_OFFSET UNITYSDK_OFFSET(0x1B313120)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_ONANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1B312D90)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B313130)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorBridgeControllerMonoPlugin_TypeDefinitionIndex = 70244;

	class AnimatorBridgeControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::AnimatorBridgeControllerBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::BridgeChildAnimator*>* ChildAnimators; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_ONANIMEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::AnimatorBridgeControllerBehavior* Method_7_5112DAEA12867223()
		{
			return ((::RPG::Client::AnimatorBridgeControllerBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_METHOD_7_5112DAEA12867223_OFFSET))(this);
		}
	};
}
