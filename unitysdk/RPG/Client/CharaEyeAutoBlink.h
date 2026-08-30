#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharaEyeBlinkStateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1015;
namespace RPG::Client { class CharaEyeBlinkStateRandom; }
namespace RPG::Client { class CharaEyeBlinkStateStop; }
namespace RPG::Client { class CharaEyeBlinkStateVoiceLoudness; }
namespace RPG::Client { class CharaEyeLight; }

#define RPG_CLIENT_CHARAEYEAUTOBLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xCAC1F80)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xCAC1B70)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0xCAC2120)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_UPDATE_OFFSET UNITYSDK_OFFSET(0xCAC2220)
#define RPG_CLIENT_CHARAEYEAUTOBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC2470)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeAutoBlink_TypeDefinitionIndex = 68340;

	class CharaEyeAutoBlink : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single DEFAULT_EYE_INTENSITY; // 0x0
		::RPG::Client::CharaEyeLight* JMPCDMFDMGI; // 0x18
		::System::Boolean UseVoiceLoudness; // 0x20
		::RPG::Client::CharaEyeBlinkStateStop* StopState; // 0x28
		::RPG::Client::CharaEyeBlinkStateRandom* RandomState; // 0x30
		::RPG::Client::CharaEyeBlinkStateVoiceLoudness* VoiceLoudnessState; // 0x38
		::RPG::Client::CharaEyeBlinkStateType DEBGCJFNKDD; // 0x40
		::Class_0_16E4307DCC419505_1015* JBDFMDNIPAD; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK__CTOR_OFFSET))(this);
		}

		::System::Void EnterState(::RPG::Client::CharaEyeBlinkStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharaEyeBlinkStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_ENTERSTATE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_UPDATE_OFFSET))(this);
		}
	};
}
