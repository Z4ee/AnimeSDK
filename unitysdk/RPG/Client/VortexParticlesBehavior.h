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

#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1C81E420)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C81EE20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C81BEA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CIRCLEANGLE_OFFSET UNITYSDK_OFFSET(0x1C81EF70)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONEANGLE_OFFSET UNITYSDK_OFFSET(0x1C81F050)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONERADIUS_OFFSET UNITYSDK_OFFSET(0x1C81EF00)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1C81EFE0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1C81F450)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1C81F4D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_LIFETIMEMINMAX_OFFSET UNITYSDK_OFFSET(0x1C81C8F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0x1C81F1C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C81EDA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMAX_OFFSET UNITYSDK_OFFSET(0x1C81F350)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMIN_OFFSET UNITYSDK_OFFSET(0x1C81F2C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATACACHED_OFFSET UNITYSDK_OFFSET(0x1C81F560)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATA_OFFSET UNITYSDK_OFFSET(0x1C81F5D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1C81C880)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x1C81C810)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1C81F3E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C81E3B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMESH_OFFSET UNITYSDK_OFFSET(0x1C81E340)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SELFROTSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0x1C81F240)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEMINMAX_OFFSET UNITYSDK_OFFSET(0x1C81F0C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C81ECA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNCS_OFFSET UNITYSDK_OFFSET(0x1C81BE30)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0x1C81EE90)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYMINMAX_OFFSET UNITYSDK_OFFSET(0x1C81F140)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C81ED20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1C81BDB0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x1C81B2B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x1C81B5F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1C81C4F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1C81B960)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1C81B8A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1C81B900)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1C81B590)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x1C81C2F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET UNITYSDK_OFFSET(0x1C81BD50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1C81B640)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1C81AF30)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97CC796BBF58BFC4_OFFSET UNITYSDK_OFFSET(0x1C81C970)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x1C81A620)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_A714DCC98F177E25_OFFSET UNITYSDK_OFFSET(0x1C81E6B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x1C81A670)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BF03D3F8C049B596_OFFSET UNITYSDK_OFFSET(0x1C81B030)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1C81BC20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C83D586A49F0396E_OFFSET UNITYSDK_OFFSET(0x1C81B210)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0x1C81E7B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FDCB0CC2979DD765_OFFSET UNITYSDK_OFFSET(0x1C81BF10)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1C81AFA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C81F650)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C81F640)

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_TypeDefinitionIndex = 70347;

	class VortexParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_animationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14940);
		}
		static ::System::Single* StaticGet_maxSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14944);
		}
		static ::System::Int32* StaticGet_maxTextureSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x14948);
		}
		static ::System::Single* StaticGet_kComputeShaderThreadCount()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x1494C);
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

		::System::Void Method_3_998E122F46014853()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_998E122F46014853_OFFSET))(this);
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

		::System::Void Method_3_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_30A2382C3FCC5386()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_AFDC576A9606B859()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET))(this);
		}

		::System::Void Method_3_289F28027FF47717()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_289F28027FF47717_OFFSET))(this);
		}

		::System::Void Method_3_C83D586A49F0396E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C83D586A49F0396E_OFFSET))(this, a1);
		}

		::System::Void Method_3_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_3_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_3_FDCB0CC2979DD765(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FDCB0CC2979DD765_OFFSET))(this, a1);
		}

		::System::Void Method_3_45714050EDEF8291()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_45714050EDEF8291_OFFSET))(this);
		}

		::System::Void Method_3_E11BF4997198DC1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* Method_3_516F895199CC4307(::System::Int32 a1)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET))(this, a1);
		}

		::System::Void Method_3_97CC796BBF58BFC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97CC796BBF58BFC4_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_BF03D3F8C049B596()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BF03D3F8C049B596_OFFSET))(this);
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
