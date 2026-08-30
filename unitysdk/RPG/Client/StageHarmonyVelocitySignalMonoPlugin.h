#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyVelocitySignalMonoPlugin_VelocitySignalType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StageHarmonyVelocitySignalBehavior; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYVELOCITYSIGNALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0DC130)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyVelocitySignalMonoPlugin_TypeDefinitionIndex = 70973;

	class StageHarmonyVelocitySignalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyVelocitySignalBehavior*>
	{
	public:
		::System::String* Channel; // 0x30
		::UnityEngine::Transform* GOTransform; // 0x38
		::RPG::Client::StageHarmonyVelocitySignalMonoPlugin_VelocitySignalType VelocitySignalMode; // 0x40
		::System::Boolean AbsValue; // 0x44
		::System::Boolean ChannleNameInvalid; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYVELOCITYSIGNALMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
