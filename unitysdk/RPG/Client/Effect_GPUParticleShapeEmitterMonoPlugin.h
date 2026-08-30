#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_GPUParticleShapeEmitterBehavior; }
namespace RPG::Client { class Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCDDEB90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_TypeDefinitionIndex = 70448;

	class Effect_GPUParticleShapeEmitterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_GPUParticleShapeEmitterBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape*>* EmitShapes; // 0x30
		::System::UInt32 TotalPointNum; // 0x38
		::System::String* _ParticleInstanceDataTexPath; // 0x40
		::System::Boolean DrawShapeHanles; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
