#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_ParticleVelocityControlBehavior; }
namespace RPG::Client { class Effect_ParticleVelocityControlBehavior_ParticleControlContent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB87A550)
#define RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB87A5A0)
#define RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB87A5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleVelocityControlMonoPlugin_TypeDefinitionIndex = 65943;

	class Effect_ParticleVelocityControlMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_ParticleVelocityControlBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_ParticleVelocityControlBehavior_ParticleControlContent*>* ParticleControlContents; // 0x30
		::UnityEngine::Vector3 TargetPos; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
