#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionBehavior_RuntimeState.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Eff_VoxelUnidirOcclusionMonoPlugin; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xA1B1CB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_1_OFFSET UNITYSDK_OFFSET(0xA1B4240)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_OFFSET UNITYSDK_OFFSET(0xA1B4150)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_1_OFFSET UNITYSDK_OFFSET(0xA1B0C20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xA1B05B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0xA1B14E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xA1B0F50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xA1B2720)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xA1B1280)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xA1B1CF0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0xA1B35B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA1B1890)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA1B0BE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xA1B3BD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA1B09F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xA1B0DA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xA1B2F50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA1B0830)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA1B1BB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA1B53E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA1B5440)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xA1B54A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xA1B5500)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xA1B5570)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xA1B5650)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_7_OFFSET UNITYSDK_OFFSET(0xA1B56B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA1B5380)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xA1B3540)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xA1B12F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6DB0BD2CEA703683_OFFSET UNITYSDK_OFFSET(0xA1B3DA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xA1B17E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_744E204F41E762A0_OFFSET UNITYSDK_OFFSET(0xA1B36C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA1B4DD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA1B0A60)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_1_OFFSET UNITYSDK_OFFSET(0xA1B1A90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xA1B08A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA1B1480)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA1B4F50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_8C544E1228859051_OFFSET UNITYSDK_OFFSET(0xA1B3A10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA1B0E10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA1B0520)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA1B0720)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A585DA5742B7BDD6_OFFSET UNITYSDK_OFFSET(0xA1B4300)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A8A02A5CE5ADA860_OFFSET UNITYSDK_OFFSET(0xA1B4430)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA1B2600)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xA1B30F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA1B2C40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xA1B0B90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0xA1B3400)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xA1B2FA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xA1B11D0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0xA1B10B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA1B55E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xA1B1E40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xA1B1DE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA1B4C90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xA1B1050)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1B5220)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B51F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA1B5710)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex = 64903;

	class Eff_VoxelUnidirOcclusionBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__PausedProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113C0);
		}
		static ::System::Int32* StaticGet__VoxelCountZProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113C4);
		}
		static ::System::Int32* StaticGet__DisappearProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113C8);
		}
		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113CC);
		}
		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113D0);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleYProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113D4);
		}
		static ::System::Int32* StaticGet__FlyHeightProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113D8);
		}
		static ::System::Int32* StaticGet__VoxelUnitScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113DC);
		}
		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113E0);
		}
		static ::System::Int32* StaticGet__VoxelCountXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113E4);
		}
		static ::System::Int32* StaticGet__VoxelTotalAmountProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113E8);
		}
		static ::System::Int32* StaticGet__TransformScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113EC);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113F0);
		}
		static ::System::Int32* StaticGet__SeparationOffsetProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113F4);
		}
		static ::System::Int32* StaticGet__SpawnCenterProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113F8);
		}
		static ::System::Int32* StaticGet__WorldToObjectProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x113FC);
		}
		static ::System::Int32* StaticGet__OffsetModeProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x11400);
		}
		static ::System::Int32* StaticGet__SpawnScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x11404);
		}
		::System::Boolean _Inited; // 0x38
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAssetInstance; // 0x40
		::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x48
		::UnityEngine::Transform* VoxelTransform; // 0x50
		::UnityEngine::Vector4 _ParticleSpawnScale; // 0x58
		::System::Int32 ParticleNumber; // 0x68
		::System::Boolean _Initialized; // 0x6C
		::System::Boolean _Spawned; // 0x6D
		::UnityEngine::Vector3 spawnScale; // 0x70
		::UnityEngine::Vector3 spawnCenterWS; // 0x7C
		::UnityEngine::Camera* _Camera; // 0x88
		::UnityEngine::Vector3 _cachedParticleScale; // 0x90
		::Il2CppArray<::UnityEngine::Collider*>* _ignoreColliders; // 0xA0
		::Il2CppArray<::UnityEngine::Collider*>* _EffectTargetColliders; // 0xA8
		::UnityEngine::GameObject* _TargetGO; // 0xB0
		::System::Single heightOffset; // 0xB8
		::System::Single raycastDistance; // 0xBC
		::UnityEngine::Transform* targetObject; // 0xC0
		::System::Boolean _paused; // 0xC8
		::System::Int32 _groundCheckCounter; // 0xCC
		::UnityEngine::Vector3 _lastGroundPosition; // 0xD0
		::System::Boolean _hasGroundPosition; // 0xDC
		::System::Single _lastAppliedDisappear; // 0xE0
		::System::Single _lastAppliedFlyHeight; // 0xE4
		::UnityEngine::Coroutine* _DelaySpawnParticleCoroutine; // 0xE8
		::UnityEngine::ComputeShader* _ComputeShaderInstance; // 0xF0
		::UnityEngine::Material* _MaterialInstance; // 0xF8
		::System::Boolean _OwnsGPUParticlesAssetInstance; // 0x100
		::System::Boolean _OwnsComputeShaderInstance; // 0x101
		::System::Boolean _OwnsMaterialInstance; // 0x102
		::RPG::Client::Eff_VoxelUnidirOcclusionBehavior_RuntimeState _state; // 0x104
		::System::Int32 _lastRebuildFrame; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_3_BF5E2DCAE0BF038A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BF5E2DCAE0BF038A_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_0868EF727040C390_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_D51B57322AA430CA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D51B57322AA430CA_OFFSET))(this, a1);
		}

		::System::Void Method_3_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_1_OFFSET))(this);
		}

		::System::Boolean Method_3_C982C8295D29DA97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_3_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_3_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_3_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5AFFA079DA8B20AA_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_3_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_3_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_3_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET))(this);
		}

		::System::Void Method_3_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_3_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_3_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Void Method_3_6DB0BD2CEA703683(::UnityEngine::Material* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6DB0BD2CEA703683_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_8C544E1228859051(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_8C544E1228859051_OFFSET))(this, a1);
		}

		::System::Void Method_3_744E204F41E762A0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_744E204F41E762A0_OFFSET))(this, a1);
		}

		::System::Void Method_3_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_3_147A527305B2FF1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
		}

		::System::Void Method_3_0303214E004087C1(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_OFFSET))(this, a1);
		}

		::System::Void Method_3_0303214E004087C1_1(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_A585DA5742B7BDD6(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A585DA5742B7BDD6_OFFSET))(this, a1);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_3_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_775B6D644F07B554_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_A8A02A5CE5ADA860()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A8A02A5CE5ADA860_OFFSET))(this);
		}

		::System::Void Method_3_62165C025F5C0B19()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_62165C025F5C0B19_OFFSET))(this);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
		}

		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_7_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
