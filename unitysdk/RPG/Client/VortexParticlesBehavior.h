#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/VortexParticlesBehavior_ParticleAttributes.h"
#include "unitysdk/RPG/Client/VortexParticlesBehavior_SpawnerState.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VortexParticlesMonoPlugin; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x17414930)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x17415140)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x17412BE0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CIRCLEANGLE_OFFSET UNITYSDK_OFFSET(0x17415230)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONEANGLE_OFFSET UNITYSDK_OFFSET(0x174152D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONERADIUS_OFFSET UNITYSDK_OFFSET(0x174151E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONETHICKNESS_OFFSET UNITYSDK_OFFSET(0x17415280)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x17415570)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x174155C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_LIFETIMEMINMAX_OFFSET UNITYSDK_OFFSET(0x17413480)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0x174153C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x174150F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMAX_OFFSET UNITYSDK_OFFSET(0x174154C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMIN_OFFSET UNITYSDK_OFFSET(0x17415460)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATACACHED_OFFSET UNITYSDK_OFFSET(0x17415620)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATA_OFFSET UNITYSDK_OFFSET(0x17415670)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMFRAMERATE_OFFSET UNITYSDK_OFFSET(0x17413430)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x174133E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x17415520)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x174148E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMESH_OFFSET UNITYSDK_OFFSET(0x17414890)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SELFROTSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0x17415410)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEMINMAX_OFFSET UNITYSDK_OFFSET(0x17415320)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x17415050)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNCS_OFFSET UNITYSDK_OFFSET(0x17412B90)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0x17415190)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYMINMAX_OFFSET UNITYSDK_OFFSET(0x17415370)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x174150A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x17412B50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x174127C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x174123A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x174120B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17412A70)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x174115B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17412700)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x17412760)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17412340)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_492AD7A19DD3EA58_OFFSET UNITYSDK_OFFSET(0x17411E90)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x174123F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET UNITYSDK_OFFSET(0x17412AF0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0x17412010)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_8B1D1F4F3D0E01CB_OFFSET UNITYSDK_OFFSET(0x174134D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17411D90)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x17413190)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_A714DCC98F177E25_OFFSET UNITYSDK_OFFSET(0x17414B50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x17411560)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x17412FC0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x17414C50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FDCB0CC2979DD765_OFFSET UNITYSDK_OFFSET(0x17412C30)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x17411E00)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x174156D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x174156C0)

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_TypeDefinitionIndex = 67228;

	class VortexParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_maxTextureSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xE910);
		}
		static ::System::Single* StaticGet_maxSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xE914);
		}
		static ::System::Int32* StaticGet_animationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xE918);
		}
		static ::System::Single* StaticGet_kComputeShaderThreadCount()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xE91C);
		}
		::System::Int32 currentFrameIndex; // 0x38
		::System::Single spawnTick; // 0x3C
		::System::Single spawnerTime; // 0x40
		::System::Int32 clearKernelId; // 0x44
		::UnityEngine::ComputeBuffer* aliveParticleCounter; // 0x48
		::System::Int32 spawnKernelId; // 0x50
		::System::Int32 simulationKernelId; // 0x54
		::System::Int32 copyBufferKernelId; // 0x58
		::UnityEngine::ComputeBuffer* argsBuffer; // 0x60
		::UnityEngine::ComputeBuffer* particleBuffer0; // 0x68
		::UnityEngine::ComputeBuffer* particleBuffer1; // 0x70
		::UnityEngine::ComputeBuffer* outputBuffer; // 0x78
		::UnityEngine::RenderTexture* outputTexture; // 0x80
		::UnityEngine::ComputeBuffer* spawnerAttributesBuffer; // 0x88
		::UnityEngine::MaterialPropertyBlock* mpb; // 0x90
		::UnityEngine::Texture2D* lifeTimeAimation; // 0x98
		::RPG::Client::VortexParticlesBehavior_SpawnerState state; // 0xA0
		::System::Int32 hasBurstCount; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_06A2B758FCB8A24E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_3_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_36971FC3F16E2CEB_OFFSET))(this);
		}

		::System::Void Method_3_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_3_53898BC8CD31F230(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_53898BC8CD31F230_OFFSET))(this, a1);
		}

		::System::Void Method_3_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_21886A8411E71157_OFFSET))(this);
		}

		::System::Void Method_3_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_3_FDCB0CC2979DD765(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FDCB0CC2979DD765_OFFSET))(this, a1);
		}

		::System::Void Method_3_D14D1C669EDC2D6B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_D14D1C669EDC2D6B_OFFSET))(this);
		}

		::System::Void Method_3_FAADEE08E4E52BA5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* Method_3_516F895199CC4307(::System::Int32 a1)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET))(this, a1);
		}

		::System::Void Method_3_8B1D1F4F3D0E01CB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_8B1D1F4F3D0E01CB_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_492AD7A19DD3EA58()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_492AD7A19DD3EA58_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BOUNDS_OFFSET))(this);
		}

		static ::System::Void Method_3_A714DCC98F177E25(::Il2CppArray<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_A714DCC98F177E25_OFFSET))(a1);
		}

		::RPG::Client::VortexParticlesMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::VortexParticlesMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* get_spawnCS()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNCS_OFFSET))(this);
		}

		::System::Single get_coneRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONERADIUS_OFFSET))(this);
		}

		::System::Single get_circleAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CIRCLEANGLE_OFFSET))(this);
		}

		::System::Single get_coneThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONETHICKNESS_OFFSET))(this);
		}

		::System::Single get_coneAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONEANGLE_OFFSET))(this);
		}

		::System::Int32 get_burstCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BURSTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_spawnRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNRATE_OFFSET))(this);
		}

		::System::Int32 get_capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CAPACITY_OFFSET))(this);
		}

		::System::Int32 get_randomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Boolean get_prewarm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARM_OFFSET))(this);
		}

		::System::Boolean get_prewarmDataCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATACACHED_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::VortexParticlesBehavior_ParticleAttributes>* get_prewarmData()
		{
			return ((::Il2CppArray<::RPG::Client::VortexParticlesBehavior_ParticleAttributes>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATA_OFFSET))(this);
		}

		::System::Single get_prewarmFrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMFRAMERATE_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_renderMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMESH_OFFSET))(this);
		}

		::UnityEngine::Material* get_renderMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMATERIAL_OFFSET))(this);
		}

		::System::Single get_drag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_DRAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_GRAVITY_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_sizeMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_lifeTimeMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_LIFETIMEMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_velocityMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_orbitSpeedMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_selfRotSpeedMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SELFROTSPEEDMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionRandomMin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionRandomMax()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMAX_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_sizeOverLifeTime()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_velocityOverLifeTime()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_orbitSpeedOverLifeTime()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDOVERLIFETIME_OFFSET))(this);
		}
	};
}
