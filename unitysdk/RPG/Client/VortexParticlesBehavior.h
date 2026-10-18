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

#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xE4576D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0xE4580D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xE455120)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CIRCLEANGLE_OFFSET UNITYSDK_OFFSET(0xE458220)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONEANGLE_OFFSET UNITYSDK_OFFSET(0xE458300)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONERADIUS_OFFSET UNITYSDK_OFFSET(0xE4581B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONETHICKNESS_OFFSET UNITYSDK_OFFSET(0xE458290)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_DRAG_OFFSET UNITYSDK_OFFSET(0xE458700)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xE458780)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_LIFETIMEMINMAX_OFFSET UNITYSDK_OFFSET(0xE455BA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0xE458470)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE458050)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMAX_OFFSET UNITYSDK_OFFSET(0xE458600)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMIN_OFFSET UNITYSDK_OFFSET(0xE458570)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATACACHED_OFFSET UNITYSDK_OFFSET(0xE458810)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATA_OFFSET UNITYSDK_OFFSET(0xE458880)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMFRAMERATE_OFFSET UNITYSDK_OFFSET(0xE455B30)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xE455AC0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xE458690)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0xE457660)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMESH_OFFSET UNITYSDK_OFFSET(0xE4575F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SELFROTSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0xE4584F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEMINMAX_OFFSET UNITYSDK_OFFSET(0xE458370)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE457F50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNCS_OFFSET UNITYSDK_OFFSET(0xE4550B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0xE458140)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYMINMAX_OFFSET UNITYSDK_OFFSET(0xE4583F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE457FD0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE455030)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xE454480)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xE4537C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xE4547C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xE453770)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xE4557A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xE454BE0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE454B20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xE454B80)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE454760)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xE4555A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xE454810)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4B0C05440201244A_OFFSET UNITYSDK_OFFSET(0xE455190)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET UNITYSDK_OFFSET(0xE454FD0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE454100)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97CC796BBF58BFC4_OFFSET UNITYSDK_OFFSET(0xE455C20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_A714DCC98F177E25_OFFSET UNITYSDK_OFFSET(0xE457960)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BF03D3F8C049B596_OFFSET UNITYSDK_OFFSET(0xE454200)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xE454EA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C83D586A49F0396E_OFFSET UNITYSDK_OFFSET(0xE4543E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0xE457A60)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE454170)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE458900)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE4588F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_TypeDefinitionIndex = 70383;

	class VortexParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_maxTextureSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xF2D0);
		}
		static ::System::Single* StaticGet_kComputeShaderThreadCount()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xF2D4);
		}
		static ::System::Single* StaticGet_maxSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xF2D8);
		}
		static ::System::Int32* StaticGet_animationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xF2DC);
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

		::System::Void Method_3_1E1FFD875CA8014A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_1E1FFD875CA8014A_OFFSET))(this);
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

		::System::Void Method_3_30A2382C3FCC5386()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_00DC6C482249EA10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_00DC6C482249EA10_OFFSET))(this);
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

		::System::Void Method_3_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_3_4B0C05440201244A(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4B0C05440201244A_OFFSET))(this, a1);
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
