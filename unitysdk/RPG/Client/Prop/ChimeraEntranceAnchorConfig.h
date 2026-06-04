#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraMainEnvTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_TRYGETCHIMERATALKINFO_OFFSET UNITYSDK_OFFSET(0xC51F9A0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC51FA80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceAnchorConfig_TypeDefinitionIndex = 73000;

	class ChimeraEntranceAnchorConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 ChimeraID; // 0x18
		::System::String* ChimeraAnimatorParamName; // 0x20
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x28
		::System::Single ParamValue; // 0x2C
		::System::Single EyeLayerWeight; // 0x30
		::System::String* ChimeraEyeAnimatorParamName; // 0x38
		::RPG::GameCore::AnimatorParameterType EyeParamType; // 0x40
		::System::Single EyeParamValue; // 0x44
		::System::Boolean IsTalk; // 0x48
		::RPG::Client::Prop::ChimeraMainEnvTalkInfo* TalkInfo; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBubbleTalkParam* TryGetChimeraTalkInfo()
		{
			return ((::RPG::Client::Prop::ChimeraBubbleTalkParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_TRYGETCHIMERATALKINFO_OFFSET))(this);
		}
	};
}
