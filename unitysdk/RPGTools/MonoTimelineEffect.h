#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSPLAY_OFFSET UNITYSDK_OFFSET(0x1B525660)
#define RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSSTOPANDCLEAR_OFFSET UNITYSDK_OFFSET(0x1B5255D0)
#define RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSSTOPEMITTING_OFFSET UNITYSDK_OFFSET(0x1B525530)
#define RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORCROSSFADE_OFFSET UNITYSDK_OFFSET(0x1B525040)
#define RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETBOOL_OFFSET UNITYSDK_OFFSET(0x1B524EE0)
#define RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B524E20)
#define RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETINTEGER_OFFSET UNITYSDK_OFFSET(0x1B524D70)
#define RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B524F90)
#define RPGTOOLS_MONOTIMELINEEFFECT_GETINACCURATEDURATION_OFFSET UNITYSDK_OFFSET(0x1B525B20)
#define RPGTOOLS_MONOTIMELINEEFFECT_GET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0x1B5239E0)
#define RPGTOOLS_MONOTIMELINEEFFECT_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B5238D0)
#define RPGTOOLS_MONOTIMELINEEFFECT_INIT_OFFSET UNITYSDK_OFFSET(0x1B525120)
#define RPGTOOLS_MONOTIMELINEEFFECT_ISPARTICALSYSTEMSALIVE_OFFSET UNITYSDK_OFFSET(0x1B525490)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x1B5243B0)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B524A40)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x1B524060)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_5B6CC23D54F693F4_OFFSET UNITYSDK_OFFSET(0x1B5258E0)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1B524A90)
#define RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1B5246C0)
#define RPGTOOLS_MONOTIMELINEEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B5249C0)
#define RPGTOOLS_MONOTIMELINEEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B524360)
#define RPGTOOLS_MONOTIMELINEEFFECT_REPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1B5256F0)
#define RPGTOOLS_MONOTIMELINEEFFECT_RETAINEXTERNALASSETS_OFFSET UNITYSDK_OFFSET(0x1B523B20)
#define RPGTOOLS_MONOTIMELINEEFFECT_SELFDESTROY_OFFSET UNITYSDK_OFFSET(0x1B5241B0)
#define RPGTOOLS_MONOTIMELINEEFFECT_SETEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x1B525740)
#define RPGTOOLS_MONOTIMELINEEFFECT_SETMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1B5238F0)
#define RPGTOOLS_MONOTIMELINEEFFECT_SETPREFABASSET_OFFSET UNITYSDK_OFFSET(0x1B523AD0)
#define RPGTOOLS_MONOTIMELINEEFFECT_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1B525820)
#define RPGTOOLS_MONOTIMELINEEFFECT_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1B525D10)
#define RPGTOOLS_MONOTIMELINEEFFECT_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B5238E0)
#define RPGTOOLS_MONOTIMELINEEFFECT_SIMULATEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1B5253A0)
#define RPGTOOLS_MONOTIMELINEEFFECT_TICKMONO_OFFSET UNITYSDK_OFFSET(0x1B524120)
#define RPGTOOLS_MONOTIMELINEEFFECT_UPDATEANIMATOR_OFFSET UNITYSDK_OFFSET(0x1B524BE0)
#define RPGTOOLS_MONOTIMELINEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525D70)

namespace RPGTools
{
	inline static constexpr unsigned int MonoTimelineEffect_TypeDefinitionIndex = 48238;

	class MonoTimelineEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnablePOSM; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* KHKPBJDJGFM; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystem*>* MJCMEJBONDO; // 0x28
		::Il2CppArray<::UnityEngine::Animation*>* FDIAAPFFAJI; // 0x30
		::Il2CppArray<::UnityEngine::Animator*>* IJGOIBLBAEN; // 0x38
		::System::Boolean AEAMCCLEKPD; // 0x40
		::System::Single OKACKJONKEL; // 0x44
		::System::Int32 LDCJMMPGDOE; // 0x48
		::Il2CppArray<::System::Single>* PABJDIBDJDK; // 0x50
		::Il2CppArray<::System::Single>* FOLHNOBGKLH; // 0x58
		::System::String* IJMGEMMNNPI; // 0x60
		::UnityEngine::Object* NCPNKDBIINJ; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* EMMDAEIDMIB; // 0x70
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void SetMonoEffect(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SETMONOEFFECT_OFFSET))(this, a1);
		}

		::Class_1_1342B57709FD7AC5* get_GoRendererCache()
		{
			return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_GET_GORENDERERCACHE_OFFSET))(this);
		}

		::System::Void SetPrefabAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SETPREFABASSET_OFFSET))(this, a1);
		}

		::System::Void RetainExternalAssets(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_RETAINEXTERNALASSETS_OFFSET))(this, a1);
		}

		::System::Void TickMono(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_TICKMONO_OFFSET))(this, a1);
		}

		::System::Void SelfDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SELFDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_45714050EDEF8291()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_45714050EDEF8291_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateAnimator(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_UPDATEANIMATOR_OFFSET))(this, a1, a2);
		}

		::System::Void AnimatorSetInteger(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETINTEGER_OFFSET))(this, a1, a2);
		}

		::System::Void AnimatorSetFloat(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void AnimatorSetBool(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void AnimatorSetTrigger(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORSETTRIGGER_OFFSET))(this, a1);
		}

		::System::Void AnimatorCrossFade(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ANIMATORCROSSFADE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_INIT_OFFSET))(this);
		}

		::System::Void SimulateParticle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SIMULATEPARTICLE_OFFSET))(this, a1);
		}

		::System::Boolean IsParticalSystemsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ISPARTICALSYSTEMSALIVE_OFFSET))(this);
		}

		::System::Void AllParticalSystemsStopEmitting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSSTOPEMITTING_OFFSET))(this);
		}

		::System::Void AllParticalSystemsStopAndClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSSTOPANDCLEAR_OFFSET))(this);
		}

		::System::Void AllParticalSystemsPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_ALLPARTICALSYSTEMSPLAY_OFFSET))(this);
		}

		::System::Void ReplayParticleSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_REPLAYPARTICLESYSTEMS_OFFSET))(this);
		}

		::System::Void SetEffectScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SETEFFECTSCALE_OFFSET))(this, a1);
		}

		::System::Void SetRandomSeed(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SETRANDOMSEED_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5B6CC23D54F693F4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_5B6CC23D54F693F4_OFFSET))(this, a1);
		}

		static ::System::Single GetInaccurateDuration(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_GETINACCURATEDURATION_OFFSET))(a1);
		}

		::System::Void SetSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_SETSPEED_OFFSET))(this, a1);
		}

		::System::Void Method_5_1713F44301AA802F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_1713F44301AA802F_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_DF3C54A5ADEABAF1_OFFSET))(this);
		}

		::System::Void Method_5_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT_METHOD_5_D155D4917B3D2C6A_OFFSET))(this);
		}
	};
}
