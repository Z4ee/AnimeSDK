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

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xB8337E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0xB832630)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB8321A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xB832550)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xB834B30)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xB8339F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1681FE3461362526_OFFSET UNITYSDK_OFFSET(0xB835CB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB834ED0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0xB837680)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB8325F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0xB835050)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4153213143087230_OFFSET UNITYSDK_OFFSET(0xB836A40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB8324E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xB8326B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xB834E80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB832320)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xB832DC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB837C10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB837C70)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB837CD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB837D30)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB837D90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xB837E50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_7_OFFSET UNITYSDK_OFFSET(0xB837EB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB837BB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB837300)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xB837470)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xB833A50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xB835570)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xB8345B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xB8331E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB834460)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xB832B90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB832720)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB832110)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0xB832C00)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB8325A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB832210)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xB835600)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xB8336E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BA6BCE0B3D0BFA3B_OFFSET UNITYSDK_OFFSET(0xB8361F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xB832AE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D132478733D69425_OFFSET UNITYSDK_OFFSET(0xB835740)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xB833860)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xB833290)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_1_OFFSET UNITYSDK_OFFSET(0xB8367C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D93C10D3A568E698_OFFSET UNITYSDK_OFFSET(0xB836690)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_1_OFFSET UNITYSDK_OFFSET(0xB832390)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_2_OFFSET UNITYSDK_OFFSET(0xB8335C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xB832860)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_E59CAA2089D7E8B1_OFFSET UNITYSDK_OFFSET(0xB835FC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0xB832E20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_EFB08CA7047D8A4C_OFFSET UNITYSDK_OFFSET(0xB8368A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0xB8329C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB837DF0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xB8353D0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xB832960)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB837A20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8379F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB837F10)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex = 65829;

	class Eff_VoxelUnidirOcclusionBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleYProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4400);
		}
		static ::System::Int32* StaticGet__SeparationOffsetProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4404);
		}
		static ::System::Int32* StaticGet__VoxelTotalAmountProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4408);
		}
		static ::System::Int32* StaticGet__SpawnCenterProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x440C);
		}
		static ::System::Int32* StaticGet__SpawnScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4410);
		}
		static ::System::Int32* StaticGet__PausedProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4414);
		}
		static ::System::Int32* StaticGet__VoxelUnitScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4418);
		}
		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x441C);
		}
		static ::System::Int32* StaticGet__VoxelCountXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4420);
		}
		static ::System::Int32* StaticGet__VoxelCountZProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4424);
		}
		static ::System::Int32* StaticGet__WorldToObjectProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4428);
		}
		static ::System::Int32* StaticGet__FlyHeightProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x442C);
		}
		static ::System::Int32* StaticGet__TransformScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4430);
		}
		static ::System::Int32* StaticGet__OffsetModeProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4434);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4438);
		}
		static ::System::Int32* StaticGet__DisappearProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x443C);
		}
		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4440);
		}
		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x4444);
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

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
