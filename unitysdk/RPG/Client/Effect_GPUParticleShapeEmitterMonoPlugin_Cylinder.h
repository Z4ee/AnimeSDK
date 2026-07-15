#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_4F2C6507D17C6667_OFFSET UNITYSDK_OFFSET(0x150F3270)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_AA5EB6C0E8DC9D74_OFFSET UNITYSDK_OFFSET(0x150F3330)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_B0FB0178D34CC9F5_OFFSET UNITYSDK_OFFSET(0x150F37B0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_E19F224D4967A3A0_OFFSET UNITYSDK_OFFSET(0x150F2780)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x150F3DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cylinder_TypeDefinitionIndex = 67331;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cylinder : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single Radius; // 0x40
		::System::Single Height; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Method_2_E19F224D4967A3A0()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_E19F224D4967A3A0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_4F2C6507D17C6667()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_4F2C6507D17C6667_OFFSET))(this);
		}

		::System::Void Method_2_AA5EB6C0E8DC9D74(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_AA5EB6C0E8DC9D74_OFFSET))(this, a1);
		}

		::System::Void Method_2_B0FB0178D34CC9F5(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CYLINDER_METHOD_2_B0FB0178D34CC9F5_OFFSET))(this, a1);
		}
	};
}
