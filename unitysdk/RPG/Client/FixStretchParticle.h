#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FixStrecthDimension.h"
#include "unitysdk/RPG/Client/ParameterCondition.h"
#include "unitysdk/RPG/Client/ParticleInitialData.h"
#include "unitysdk/RPG/Client/StretchMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FixStretchParticleBehavior; }
namespace System { class String; }

#define RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x190D7A60)
#define RPG_CLIENT_FIXSTRETCHPARTICLE_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x190D7A50)
#define RPG_CLIENT_FIXSTRETCHPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D7AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchParticle_TypeDefinitionIndex = 70557;

	class FixStretchParticle : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FixStretchParticleBehavior*>
	{
	public:
		::RPG::Client::FixStrecthDimension Dimension; // 0x30
		::RPG::Client::StretchMode CurrentStretchMode; // 0x34
		::RPG::Client::StretchMode CurrentStretchMode2; // 0x38
		::UnityEngine::Vector3 InitialParticleScale; // 0x3C
		::RPG::Client::ParticleInitialData _ParticleInitialData; // 0x48
		::RPG::Client::ParameterCondition ParameterConditions; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
