#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class DeformationCasterCleanupBehavior; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CLEANUPREGISTEREDCASTER_OFFSET UNITYSDK_OFFSET(0xCC9B1D0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_MARKREGISTERED_OFFSET UNITYSDK_OFFSET(0xCC9B300)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_SETCASTER_OFFSET UNITYSDK_OFFSET(0xCC9B2A0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCC9B360)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCasterCleanupMonoPlugin_TypeDefinitionIndex = 70231;

	class DeformationCasterCleanupMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::DeformationCasterCleanupBehavior*>
	{
	public:
		::UnityEngine::Renderer* RegisteredRenderer; // 0x30
		::System::Int32 RegisteredInstanceId; // 0x38
		::System::Boolean IsRegistered; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetCaster(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_SETCASTER_OFFSET))(this, a1, a2);
		}

		::System::Void MarkRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_MARKREGISTERED_OFFSET))(this);
		}

		::System::Void CleanupRegisteredCaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CLEANUPREGISTEREDCASTER_OFFSET))(this);
		}
	};
}
