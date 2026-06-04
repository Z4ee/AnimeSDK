#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_159F4A26A6FBCACF;
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xC239DB0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC239D00)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC239D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementParticleSimple_TypeDefinitionIndex = 66231;

	class MusicVisualization_BeatEffectElementParticleSimple : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Boolean ValueAffectEmit; // 0x30
		::System::Boolean ValueAffectMat; // 0x31
		::System::Boolean ValueMapToColor; // 0x32
		::System::Boolean MapToChildsColor; // 0x33
		::System::String* MatPropertyName; // 0x38
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x40
		::System::Int32 MatPropertyID; // 0x48
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _ParticleSystems; // 0x50
		::UnityEngine::ParticleSystemRenderer* _ParticleRender; // 0x58
		::System::Boolean _IsBeatEffectParticleSimpleInit; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E9A575D18A0748D9(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTPARTICLESIMPLE_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
		}
	};
}
