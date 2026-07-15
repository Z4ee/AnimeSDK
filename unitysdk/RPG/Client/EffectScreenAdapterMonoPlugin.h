#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EffectScreenAdapterBehavior; }
namespace RPG::Client { class TransformScreenAdapter; }

#define RPG_CLIENT_EFFECTSCREENADAPTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17731F10)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectScreenAdapterMonoPlugin_TypeDefinitionIndex = 67262;

	class EffectScreenAdapterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::EffectScreenAdapterBehavior*>
	{
	public:
		::System::Boolean FollowMainCamera; // 0x30
		::System::Boolean UpdatePerFrame; // 0x31
		::UnityEngine::Vector3 OverridePosition; // 0x34
		::UnityEngine::Vector3 OverrideRotation; // 0x40
		::UnityEngine::Vector3 OverrideScale; // 0x4C
		::RPG::Client::TransformScreenAdapter* ScreenAdapter; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTSCREENADAPTERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
