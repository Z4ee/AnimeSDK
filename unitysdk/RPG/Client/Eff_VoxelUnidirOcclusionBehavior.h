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

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1A6A0C80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0x1A69FAD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A69F640)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1A69F9F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1A6A1FD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1A6A0E90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1681FE3461362526_OFFSET UNITYSDK_OFFSET(0x1A6A3150)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1A6A2370)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1A6A4B20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A69FA90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x1A6A24F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4153213143087230_OFFSET UNITYSDK_OFFSET(0x1A6A3EE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1A69F980)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1A69FB50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1A6A2320)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A69F7C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1A6A0260)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1A6A47A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1A6A4910)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x1A6A0EF0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1A6A2A10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x1A6A1A50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1A6A0680)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1A6A1900)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x1A6A0030)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1A69FBC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A69F5B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x1A6A00A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x1A69FA40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1A69F6B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1A6A2AA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1A6A0B80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BA6BCE0B3D0BFA3B_OFFSET UNITYSDK_OFFSET(0x1A6A3690)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x1A69FF80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D132478733D69425_OFFSET UNITYSDK_OFFSET(0x1A6A2BE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1A6A0D00)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x1A6A0730)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_1_OFFSET UNITYSDK_OFFSET(0x1A6A3C60)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_OFFSET UNITYSDK_OFFSET(0x1A6A3B30)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_1_OFFSET UNITYSDK_OFFSET(0x1A69F830)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_2_OFFSET UNITYSDK_OFFSET(0x1A6A0A60)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1A69FD00)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_E59CAA2089D7E8B1_OFFSET UNITYSDK_OFFSET(0x1A6A3460)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0x1A6A02C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_EFB08CA7047D8A4C_OFFSET UNITYSDK_OFFSET(0x1A6A3D40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0x1A69FE60)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1A6A2870)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1A69FE00)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A4EC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A4E90)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex = 70368;

	class Eff_VoxelUnidirOcclusionBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SpawnCenterProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x13590);
		}
		static ::System::Int32* StaticGet__WorldToObjectProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x13594);
		}
		static ::System::Int32* StaticGet__FlyHeightProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x13598);
		}
		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x1359C);
		}
		static ::System::Int32* StaticGet__VoxelCountXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135A0);
		}
		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135A4);
		}
		static ::System::Int32* StaticGet__TransformScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135A8);
		}
		static ::System::Int32* StaticGet__PausedProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135AC);
		}
		static ::System::Int32* StaticGet__OffsetModeProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135B0);
		}
		static ::System::Int32* StaticGet__DisappearProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135B4);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135B8);
		}
		static ::System::Int32* StaticGet__SpawnScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135BC);
		}
		static ::System::Int32* StaticGet__VoxelUnitScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135C0);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleYProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135C4);
		}
		static ::System::Int32* StaticGet__SeparationOffsetProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135C8);
		}
		static ::System::Int32* StaticGet__VoxelCountZProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135CC);
		}
		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135D0);
		}
		static ::System::Int32* StaticGet__VoxelTotalAmountProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x135D4);
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

		::System::Void Method_3_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_3_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_06330CD58CB602B6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_1_OFFSET))(this);
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

		::System::Void Method_3_F07840BBC25636A7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F07840BBC25636A7_OFFSET))(this, a1);
		}

		::System::Void Method_3_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_OFFSET))(this);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_3_DF3C54A5ADEABAF1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_1_OFFSET))(this);
		}

		::System::Void Method_3_DF3C54A5ADEABAF1_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_2_OFFSET))(this);
		}

		::System::Boolean Method_3_C982C8295D29DA97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET))(this);
		}

		::System::Void Method_3_D87A7D8243E04FD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
		}

		::System::Void Method_3_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void Method_3_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_460F8AE6EF9687FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_3_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_3_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_3_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_3_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_3_3BFE3B9EF8374F61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3BFE3B9EF8374F61_OFFSET))(this);
		}

		::System::Void Method_3_E59CAA2089D7E8B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_E59CAA2089D7E8B1_OFFSET))(this);
		}

		::System::Void Method_3_BA6BCE0B3D0BFA3B(::UnityEngine::Material* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BA6BCE0B3D0BFA3B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1681FE3461362526(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1681FE3461362526_OFFSET))(this, a1);
		}

		::System::Void Method_3_D132478733D69425(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D132478733D69425_OFFSET))(this, a1);
		}

		::System::Void Method_3_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_3_ECB5F1C983BF42E9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ECB5F1C983BF42E9_OFFSET))(this);
		}

		::System::Void Method_3_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_3_D93C10D3A568E698(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_OFFSET))(this, a1);
		}

		::System::Void Method_3_D93C10D3A568E698_1(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_EFB08CA7047D8A4C(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_EFB08CA7047D8A4C_OFFSET))(this, a1);
		}

		::System::Void Method_3_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_3_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Void Method_3_601EF3E7226D7DC2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_601EF3E7226D7DC2_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_4153213143087230()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4153213143087230_OFFSET))(this);
		}

		::System::Void Method_3_97B44ED90A2DE2AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_97B44ED90A2DE2AB_OFFSET))(this);
		}

		::System::Void Method_3_3574512695A597AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3574512695A597AB_OFFSET))(this);
		}

		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
