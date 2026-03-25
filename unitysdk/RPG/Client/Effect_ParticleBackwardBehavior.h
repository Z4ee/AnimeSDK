#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxGradient.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace ParticleRecorder { class ParticleRecorders; }
namespace RPG::Client { class Effect_ParticleBackwardMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x95662D0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x956BA60)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_2_OFFSET UNITYSDK_OFFSET(0x956F9C0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x956B770)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x956BA00)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9566630)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x9566690)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9565F90)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x9566530)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x9566100)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x956FEE0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x956FF40)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x956FFA0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x9570000)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x9570070)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x956FE80)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x9566340)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x956BE80)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_76DE4F53EB87BB28_OFFSET UNITYSDK_OFFSET(0x956D700)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_891A756279733473_OFFSET UNITYSDK_OFFSET(0x9566790)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x956F790)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9566270)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x956C0F0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_BD50D311A56B5E90_OFFSET UNITYSDK_OFFSET(0x956FA70)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_C7EA6C1AE405CD79_OFFSET UNITYSDK_OFFSET(0x956D3D0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x956F750)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9565FF0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x95666F0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x956FDC0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x956FCE0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x95700E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleBackwardBehavior_TypeDefinitionIndex = 57746;

	class Effect_ParticleBackwardBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x45E70);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x45E78);
		}
		static ::System::Int32* StaticGet__Time_ShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x122D0);
		}
		::ParticleRecorder::BackwardParticlesInfoSO* ParticleInfoSO; // 0x38
		::System::Boolean _NeedReleaseSO; // 0x40
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _ParticleSystems; // 0x48
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleRecorders*>* _RecorderStates; // 0x50
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleRenderers; // 0x58
		::UnityEngine::MaterialPropertyBlock* _TimeMPB; // 0x60
		::System::Boolean _OverridedMPB; // 0x68
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* _WorldSpaceBias; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _ParticleAlphaBackup; // 0x78
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>*>* customDataCurves; // 0x80
		::System::Single TimePoint; // 0x88
		::System::Single ImmediateForwardMaxTime; // 0x8C
		::RPG::Client::ParticlePlaybackStatus PlaybackStatus; // 0x90
		::System::Int32 TotalFrame; // 0x94
		::System::Single PlaybackStartTime; // 0x98
		::System::Single frameRateTime; // 0x9C
		::System::Single skipTime; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_464B80C09A37526F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_464B80C09A37526F_OFFSET))(this);
		}

		::System::Void Method_3_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4389275F4099DE36_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_151E25A63D14DDB0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_1_OFFSET))(this);
		}

		::System::Void Method_3_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_3_BCBA2F161B837B0C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_BCBA2F161B837B0C_OFFSET))(this, a1);
		}

		::System::Void Method_3_76DE4F53EB87BB28(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_76DE4F53EB87BB28_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_2_OFFSET))(this);
		}

		::System::Void Method_3_C7EA6C1AE405CD79(::UnityEngine::ParticleSystem_MinMaxGradient a1, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_C7EA6C1AE405CD79_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_BD50D311A56B5E90(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_BD50D311A56B5E90_OFFSET))(this, a1);
		}

		::System::Void Method_3_891A756279733473(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_891A756279733473_OFFSET))(this, a1);
		}

		::System::Void Method_3_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ParticleBackwardMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_ParticleBackwardMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
