#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_38DF093766CC711E_OFFSET UNITYSDK_OFFSET(0x150EFC70)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_4F2C6507D17C6667_OFFSET UNITYSDK_OFFSET(0x150EF6A0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_742B4CA18DC7C22B_OFFSET UNITYSDK_OFFSET(0x150EF760)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x150EEA20)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_E19F224D4967A3A0_OFFSET UNITYSDK_OFFSET(0x150EEAA0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE__CTOR_OFFSET UNITYSDK_OFFSET(0x150F02E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cone_TypeDefinitionIndex = 67332;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cone : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single BottomRadius; // 0x40
		::System::Single TopRadius; // 0x44
		::System::Single Height; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE__CTOR_OFFSET))(this);
		}

		::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds Method_2_E19F224D4967A3A0()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_E19F224D4967A3A0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_4F2C6507D17C6667()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_4F2C6507D17C6667_OFFSET))(this);
		}

		::System::Void Method_2_742B4CA18DC7C22B(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_742B4CA18DC7C22B_OFFSET))(this, a1);
		}

		::System::Void Method_2_38DF093766CC711E(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CONE_METHOD_2_38DF093766CC711E_OFFSET))(this, a1);
		}
	};
}
