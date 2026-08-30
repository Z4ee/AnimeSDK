#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_1B30420CE6B88FBA_OFFSET UNITYSDK_OFFSET(0x15E652D0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_38DF093766CC711E_1_OFFSET UNITYSDK_OFFSET(0x15E66AA0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_38DF093766CC711E_OFFSET UNITYSDK_OFFSET(0x15E66F90)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_4F2C6507D17C6667_OFFSET UNITYSDK_OFFSET(0x15E669E0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E67450)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Sphere_TypeDefinitionIndex = 70452;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Sphere : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::System::Single Radius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Method_2_1B30420CE6B88FBA()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_1B30420CE6B88FBA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_4F2C6507D17C6667()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_4F2C6507D17C6667_OFFSET))(this);
		}

		::System::Void Method_2_38DF093766CC711E(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_38DF093766CC711E_OFFSET))(this, a1);
		}

		::System::Void Method_2_38DF093766CC711E_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_SPHERE_METHOD_2_38DF093766CC711E_1_OFFSET))(this, a1);
		}
	};
}
