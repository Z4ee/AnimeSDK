#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParameterCondition.h"
#include "unitysdk/RPG/Client/ParticleInitialData.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FixStretchParticleBehavior; }
namespace System { class String; }

#define RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x96FBF80)
#define RPG_CLIENT_FIXSTRETCHPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x96FBFD0)
#define RPG_CLIENT_FIXSTRETCHPARTICLE___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x96FBFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchParticle_TypeDefinitionIndex = 57807;

	class FixStretchParticle : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FixStretchParticleBehavior*>
	{
	public:
		::UnityEngine::Vector3 InitialParticleScale; // 0x30
		::System::Single initialPSEmissionRateOVerTime; // 0x3C
		::System::Boolean IsAutoChange; // 0x40
		::System::Single ScaleV; // 0x44
		::RPG::Client::ParticleInitialData _ParticleInitialData; // 0x48
		::RPG::Client::ParameterCondition ParameterConditions; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
