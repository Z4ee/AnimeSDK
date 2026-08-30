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

#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x15E7ECA0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_004D2CE97AA50BBA_OFFSET UNITYSDK_OFFSET(0x15E870B0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x15E84B70)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15E89800)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x15E7EAD0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15E84E30)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_3E43B71D665FF6C0_OFFSET UNITYSDK_OFFSET(0x15E86C40)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15E7F010)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x15E7F070)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E7E970)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x15E7ED20)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x15E85370)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_708FD95A0BF1E451_OFFSET UNITYSDK_OFFSET(0x15E85670)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_7D2C7213E6B374D8_OFFSET UNITYSDK_OFFSET(0x15E7F170)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_8C1FB0C6AEFFB54E_OFFSET UNITYSDK_OFFSET(0x15E898A0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E895E0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x15E7EF00)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15E7EC40)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E895A0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15E7E9D0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x15E84E90)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15E7F0D0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E89BC0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E89AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleBackwardBehavior_TypeDefinitionIndex = 70483;

	class Effect_ParticleBackwardBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x60F00);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x60F08);
		}
		static ::System::Int32* StaticGet__Time_ShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_ParticleBackwardBehavior_TypeDefinitionIndex)->GetStaticField(0x13EE0);
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

		::System::Void Method_3_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_3_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
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

		::System::Void Method_3_147A527305B2FF1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_3_68805403250CC013()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_68805403250CC013_OFFSET))(this);
		}

		::System::Void Method_3_708FD95A0BF1E451(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_708FD95A0BF1E451_OFFSET))(this, a1);
		}

		::System::Void Method_3_004D2CE97AA50BBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_004D2CE97AA50BBA_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_3E43B71D665FF6C0(::UnityEngine::ParticleSystem_MinMaxGradient a1, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_3E43B71D665FF6C0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8C1FB0C6AEFFB54E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_8C1FB0C6AEFFB54E_OFFSET))(this, a1);
		}

		::System::Void Method_3_7D2C7213E6B374D8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_7D2C7213E6B374D8_OFFSET))(this, a1);
		}

		::System::Void Method_3_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_METHOD_3_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ParticleBackwardMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_ParticleBackwardMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
