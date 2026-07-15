#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_1B30420CE6B88FBA_OFFSET UNITYSDK_OFFSET(0x150F0370)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_38DF093766CC711E_OFFSET UNITYSDK_OFFSET(0x150F1BD0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_3E8D59CAE2F5EA99_OFFSET UNITYSDK_OFFSET(0x150F20A0)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_4F2C6507D17C6667_OFFSET UNITYSDK_OFFSET(0x150F1B10)
#define RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE__CTOR_OFFSET UNITYSDK_OFFSET(0x150EE9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUParticleShapeEmitterMonoPlugin_Cube_TypeDefinitionIndex = 67329;

	class Effect_GPUParticleShapeEmitterMonoPlugin_Cube : public ::RPG::Client::Effect_GPUParticleShapeEmitterMonoPlugin_EmitShape
	{
	public:
		::UnityEngine::Vector3 Size; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Method_2_1B30420CE6B88FBA()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_1B30420CE6B88FBA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_4F2C6507D17C6667()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_4F2C6507D17C6667_OFFSET))(this);
		}

		::System::Void Method_2_38DF093766CC711E(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_38DF093766CC711E_OFFSET))(this, a1);
		}

		::System::Void Method_2_3E8D59CAE2F5EA99(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUPARTICLESHAPEEMITTERMONOPLUGIN_CUBE_METHOD_2_3E8D59CAE2F5EA99_OFFSET))(this, a1);
		}
	};
}
