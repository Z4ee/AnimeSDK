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

#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xE419F50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0xE41AB20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xE41AC00)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CIRCLEANGLE_OFFSET UNITYSDK_OFFSET(0xE41A9D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONEANGLE_OFFSET UNITYSDK_OFFSET(0xE41AAB0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONERADIUS_OFFSET UNITYSDK_OFFSET(0xE41A960)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_CONETHICKNESS_OFFSET UNITYSDK_OFFSET(0xE41AA40)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_DRAG_OFFSET UNITYSDK_OFFSET(0xE41AF80)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xE41B000)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_LIFETIMEMINMAX_OFFSET UNITYSDK_OFFSET(0xE41B110)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0xE41B210)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_ORBITSPEEDOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE41B530)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMAX_OFFSET UNITYSDK_OFFSET(0xE41B3A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_POSITIONRANDOMMIN_OFFSET UNITYSDK_OFFSET(0xE41B310)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATACACHED_OFFSET UNITYSDK_OFFSET(0xE41AD50)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMDATA_OFFSET UNITYSDK_OFFSET(0xE41ADC0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARMFRAMERATE_OFFSET UNITYSDK_OFFSET(0xE41AE30)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xE41ACE0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xE41AC70)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0xE41AF10)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_RENDERMESH_OFFSET UNITYSDK_OFFSET(0xE41AEA0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SELFROTSPEEDMINMAX_OFFSET UNITYSDK_OFFSET(0xE41B290)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEMINMAX_OFFSET UNITYSDK_OFFSET(0xE41B090)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE41B430)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNCS_OFFSET UNITYSDK_OFFSET(0xE41A8F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0xE41AB90)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYMINMAX_OFFSET UNITYSDK_OFFSET(0xE41B190)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xE41B4B0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE41A870)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xE417130)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xE4174A0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE4173E0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xE417440)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE4170D0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xE417CD0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_516F895199CC4307_OFFSET UNITYSDK_OFFSET(0xE417890)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0xE417ED0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xE417180)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xE416DC0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE416A40)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97CC796BBF58BFC4_OFFSET UNITYSDK_OFFSET(0xE418280)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xE417760)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0xE416130)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_A714DCC98F177E25_OFFSET UNITYSDK_OFFSET(0xE41A770)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0xE416180)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_BF03D3F8C049B596_OFFSET UNITYSDK_OFFSET(0xE416B40)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C83D586A49F0396E_OFFSET UNITYSDK_OFFSET(0xE416D20)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0xE41A280)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_FDCB0CC2979DD765_OFFSET UNITYSDK_OFFSET(0xE4178F0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE416AB0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE41B5C0)
#define RPG_CLIENT_VORTEXPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE41B5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_TypeDefinitionIndex = 70347;

	class VortexParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_animationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x149C0);
		}
		static ::System::Single* StaticGet_kComputeShaderThreadCount()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x149C4);
		}
		static ::System::Single* StaticGet_maxSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x149C8);
		}
		static ::System::Int32* StaticGet_maxTextureSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VortexParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0x149CC);
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

		::System::Void Method_3_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_3_AFDC576A9606B859()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET))(this);
		}

		::System::Void Method_3_71227BBBB7D3D8E0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_71227BBBB7D3D8E0_OFFSET))(this);
		}

		::System::Void Method_3_C83D586A49F0396E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_C83D586A49F0396E_OFFSET))(this, a1);
		}

		::System::Void Method_3_8714CF4AE9195CA2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORTEXPARTICLESBEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET))(this);
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
