#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_CollapsingParticleMonoPlugin_Orientation.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_CollapsingParticleBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xA1C3840)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0xA1C4160)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0xA1C40A0)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_E46A4D7B872282A4_OFFSET UNITYSDK_OFFSET(0xA1C3A80)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_RENDEREREQUALS_OFFSET UNITYSDK_OFFSET(0xA1C3390)
#define RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C4450)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_CollapsingParticleMonoPlugin_TypeDefinitionIndex = 64935;

	class Effect_CollapsingParticleMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_CollapsingParticleBehavior*>
	{
	public:
		::System::Single interval; // 0x30
		::System::Single jitterRatio; // 0x34
		::UnityEngine::Vector3 riseMinSizeRange; // 0x38
		::UnityEngine::Vector3 riseMaxSizeRange; // 0x44
		::UnityEngine::Vector3 jitterMinSizeRange; // 0x50
		::UnityEngine::Vector3 jitterMaxSizeRange; // 0x5C
		::UnityEngine::Vector3 boundingBoxCenter; // 0x68
		::UnityEngine::Vector3 boundingBoxExtent; // 0x74
		::UnityEngine::Mesh* particleMesh; // 0x80
		::UnityEngine::Material* particleMaterial; // 0x88
		::RPG::Client::Effect_CollapsingParticleMonoPlugin_Orientation orientation; // 0x90
		::System::Boolean useWorldDirection; // 0x94
		::System::Single riseSpeed; // 0x98
		::System::Single riseHeight; // 0x9C
		::System::Single jitterSpeed; // 0xA0
		::System::Single jitterRange; // 0xA4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Vertices; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Trans; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Scales; // 0xB8
		::System::Collections::Generic::List_1<::System::Boolean>* m_Jitters; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* matrices; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean RendererEquals(::RPG::Client::Effect_CollapsingParticleMonoPlugin* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_CollapsingParticleMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_RENDEREREQUALS_OFFSET))(this, a1);
		}

		::System::Void Method_7_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_7_E46A4D7B872282A4(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_E46A4D7B872282A4_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_7_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_A3EF4ED894EBFFC3_OFFSET))(this, a1);
		}

		::System::Void Method_7_2B85C1969225764F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_COLLAPSINGPARTICLEMONOPLUGIN_METHOD_7_2B85C1969225764F_OFFSET))(this);
		}
	};
}
