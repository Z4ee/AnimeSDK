#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ARWavingTimeSychronizeBehavior; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9A93750)
#define RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9A937A0)
#define RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9A937B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ARWavingTimeSychronizeMonoPlugin_TypeDefinitionIndex = 64853;

	class ARWavingTimeSychronizeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ARWavingTimeSychronizeBehavior*>
	{
	public:
		::System::Single timeScale; // 0x30
		::System::Single timePerRound; // 0x34
		::UnityEngine::Vector3 starPosition; // 0x38
		::UnityEngine::Vector3 positionOffset; // 0x44
		::UnityEngine::AnimationCurve* positionOffsetRateX; // 0x50
		::UnityEngine::AnimationCurve* positionOffsetRateY; // 0x58
		::UnityEngine::AnimationCurve* positionOffsetRateZ; // 0x60
		::UnityEngine::GameObject* RendererObj; // 0x68
		::UnityEngine::GameObject* sychronizeTarget; // 0x70
		::System::Single timer; // 0x78
		::System::Boolean timerDebug; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARWAVINGTIMESYCHRONIZEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
