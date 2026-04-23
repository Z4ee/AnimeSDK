#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class Effect_ParticlePathFlowBehavior; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PARTICLEPATHFLOW_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1F3730)
#define RPG_CLIENT_EFFECT_PARTICLEPATHFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F3780)
#define RPG_CLIENT_EFFECT_PARTICLEPATHFLOW___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1F37F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticlePathFlow_TypeDefinitionIndex = 65012;

	class Effect_ParticlePathFlow : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_ParticlePathFlowBehavior*>
	{
	public:
		::UnityEngine::ParticleSystem* TargetParticleSystem; // 0x30
		::RPG::Client::BezierCurve* BezierCurve; // 0x38
		::System::Boolean FollowCurveDirection; // 0x40
		::System::Boolean Repeat; // 0x41
		::System::Single Progress; // 0x44
		::System::Single Speed; // 0x48
		::System::Int32 ParticleCount; // 0x4C
		::UnityEngine::Vector3 GlobalScale; // 0x50
		::UnityEngine::AnimationCurve* ScaleAlongCurve; // 0x60
		::UnityEngine::Vector3 GlobalRotation; // 0x68
		::UnityEngine::Gradient* ColorAlongCurve; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEPATHFLOW__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEPATHFLOW_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEPATHFLOW___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
