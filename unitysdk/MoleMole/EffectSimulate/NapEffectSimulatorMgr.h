#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/MoleMole/EffectSimulate/NapEffectSimulatorMgr_Enum_3_9834B72088450664.h"
#include "unitysdk/MoleMole/EffectSimulate/NapEffectSimulatorMgr_Enum_3_B1D7ADD79BEBBDB9.h"
#include "unitysdk/MoleMole/EffectSimulate/NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::EffectSimulate { class NESDataCacheBase; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ADDCHILDRENVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x161B8C50)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_AWAKE_OFFSET UNITYSDK_OFFSET(0x161B9650)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x161BE160)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_DURATIONISINF_OFFSET UNITYSDK_OFFSET(0x161BCAE0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETALLCHILDRENCOM_OFFSET UNITYSDK_OFFSET(0x161BE7F0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETDTCACHE_OFFSET UNITYSDK_OFFSET(0x161B6940)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETESCOMBYGO_OFFSET UNITYSDK_OFFSET(0x161BC1A0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETFADEOUTVAL_OFFSET UNITYSDK_OFFSET(0x161BBFA0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETINITPHASEACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x161BE3A0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETISFORCELIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x161B9770)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETISSUPPORTLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x161B9730)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETMRBYGO_OFFSET UNITYSDK_OFFSET(0x161BE940)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETNOWTIMEAT_OFFSET UNITYSDK_OFFSET(0x161BE2F0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETOTHERRENDERERBYGO_OFFSET UNITYSDK_OFFSET(0x161BE9C0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETPSBYGO_OFFSET UNITYSDK_OFFSET(0x161BE840)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETPSRBYGO_OFFSET UNITYSDK_OFFSET(0x161BE8C0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ARRCOMS_OFFSET UNITYSDK_OFFSET(0x161B9620)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ARRPS_OFFSET UNITYSDK_OFFSET(0x161B9630)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ISRUNTIMEUPDATEREADY_OFFSET UNITYSDK_OFFSET(0x161BF570)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_MAPGO2ESCOM_OFFSET UNITYSDK_OFFSET(0x161B9640)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x161BE340)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_HANDLESIMULATORMGRFADEVALUE_OFFSET UNITYSDK_OFFSET(0x161BBCF0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_INIT_OFFSET UNITYSDK_OFFSET(0x161BD540)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x161BC960)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ISININIT_OFFSET UNITYSDK_OFFSET(0x161BE350)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_MAPEFFECTLODTYPE_OFFSET UNITYSDK_OFFSET(0x161B78E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0B1EB5C9B94BAB66_1_OFFSET UNITYSDK_OFFSET(0x161B6700)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x161C06C0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x161C0820)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x161B8B20)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x161C05F0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x161C04F0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x161C03D0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_24ACE8D2378D26B0_OFFSET UNITYSDK_OFFSET(0x161BFC90)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x161BB6E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x161C0FD0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x161C05A0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x161C0DC0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x161B8780)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x161BDCD0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x161C05E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_741837A0FB99F394_OFFSET UNITYSDK_OFFSET(0x161C0430)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x161C0C00)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x161B6E40)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x161C0F70)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x161BFBF0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x161B9000)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x161C09E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x161B8F60)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x161B77C0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_ACD535D83ECB43B9_OFFSET UNITYSDK_OFFSET(0x161C1010)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x161B6810)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_C5E0FC6E1C3C1128_OFFSET UNITYSDK_OFFSET(0x161B7D70)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x161B6A50)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161C0680)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_D829460A9C07E886_1_OFFSET UNITYSDK_OFFSET(0x161BF6E0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_D829460A9C07E886_OFFSET UNITYSDK_OFFSET(0x161BFEC0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x161C0BF0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_E907F5C75FFBA4EA_OFFSET UNITYSDK_OFFSET(0x161C0A80)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_ED754E022B2B63CC_OFFSET UNITYSDK_OFFSET(0x161BA2B0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x161BCD60)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x161C0BC0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FB870C37E702D8C7_OFFSET UNITYSDK_OFFSET(0x161BFD10)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x161B8650)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x161BEA40)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x161BF430)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x161BF2D0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x161B6BF0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x161B6990)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x161BF500)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_REMOVECHILDRENVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x161B9330)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOFADEOUTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x161BB7C0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOFADEOUT_OFFSET UNITYSDK_OFFSET(0x161BB530)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOINACTIVE_OFFSET UNITYSDK_OFFSET(0x161BBAB0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEGLOBALSPEED_OFFSET UNITYSDK_OFFSET(0x161BBCA0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x161B97B0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEINIT_POOLOPT_OFFSET UNITYSDK_OFFSET(0x161B6EA0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMERELEASE_OFFSET UNITYSDK_OFFSET(0x161BAB70)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_JOB_OTHER_OFFSET UNITYSDK_OFFSET(0x161B6900)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_JOB_PREPARE_OFFSET UNITYSDK_OFFSET(0x161B6440)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_OFFSET UNITYSDK_OFFSET(0x161BAF20)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_RECORD_OFFSET UNITYSDK_OFFSET(0x161B63D0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETINITPHASEACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x161BE5D0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETPHASETIMEDURATION_OFFSET UNITYSDK_OFFSET(0x161BDE60)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETPHASETIMERATE_OFFSET UNITYSDK_OFFSET(0x161BA910)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETTIMEAT_OFFSET UNITYSDK_OFFSET(0x161BCEF0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SET_ISRUNTIMEUPDATEREADY_OFFSET UNITYSDK_OFFSET(0x161BF580)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x161BC220)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_START_OFFSET UNITYSDK_OFFSET(0x161BF470)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_STOPSELF_OFFSET UNITYSDK_OFFSET(0x161BB930)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_STOP_OFFSET UNITYSDK_OFFSET(0x161BCBB0)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x161BF630)
#define MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x161BF590)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NapEffectSimulatorMgr_TypeDefinitionIndex = 54352;

	class NapEffectSimulatorMgr : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet_Field_5_38()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapEffectSimulatorMgr_TypeDefinitionIndex)->GetStaticField(0x37560);
		}
		static ::System::Boolean* StaticGet_USE_VISIBLE_OPT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapEffectSimulatorMgr_TypeDefinitionIndex)->GetStaticField(0xDAC0);
		}
		static ::System::Single* StaticGet_DEFAULT_RENDERER_CULLING_DIS()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapEffectSimulatorMgr_TypeDefinitionIndex)->GetStaticField(0xDAC4);
		}
		// static const ::System::Single UPDATE_MAX_DT; // 0x0
		// static const ::System::String* SET_ACTIVE_TAG_KEY; // 0x0
		// static const ::System::String* Field_5_13; // 0x0
		// static const ::System::String* Field_5_14; // 0x0
		// static const ::System::String* Field_5_15; // 0x0
		// static const ::System::Single RUNTIME_FADEOUT_DEFAULT_VAL; // 0x0
		// static const ::System::Single RUNTIME_FADEOUT_HIDE_VAL; // 0x0
		::System::Single Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::System::Boolean Field_5_2; // 0x20
		::System::Boolean Field_5_3; // 0x21
		::System::Collections::Generic::HashSet_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_5_6; // 0x28
		::System::Single Field_5_7; // 0x30
		::System::Boolean Field_5_8; // 0x34
		::System::Boolean Field_5_9; // 0x35
		::System::Boolean Field_5_10; // 0x36
		::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B1D7ADD79BEBBDB9 fxType; // 0x38
		::System::Single duration; // 0x3C
		::System::Boolean autoCalcDuration; // 0x40
		::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_9834B72088450664 autoFadeOutBev; // 0x44
		::System::Single fadeOutBevCustomTime; // 0x48
		::UnityEngine::AnimationCurve* psSimulateSpeedCurve; // 0x50
		::System::Boolean runtimeAutoPlay; // 0x58
		::System::Single Field_5_25; // 0x5C
		::System::Single Field_5_26; // 0x60
		::System::Boolean Field_5_27; // 0x64
		::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C Field_5_28; // 0x68
		::UnityEngine::GameObject* Field_5_29; // 0x70
		::System::Boolean Field_5_30; // 0x78
		::System::Boolean Field_5_31; // 0x79
		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_5_32; // 0x80
		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_5_33; // 0x88
		::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_5_34; // 0x90
		::MoleMole::EffectSimulate::NapEffectSimulatorComponent* Field_5_35; // 0x98
		::System::Boolean Field_5_36; // 0xA0
		::System::Boolean Field_5_37; // 0xA1
		::System::Single Field_5_39; // 0xA4
		::System::Single Field_5_40; // 0xA8
		::System::Single Field_5_41; // 0xAC
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ParticleSystem*>* Field_5_42; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ParticleSystemRenderer*>* Field_5_43; // 0xB8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*>* Field_5_44; // 0xC0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::Renderer*>* Field_5_45; // 0xC8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_5_46; // 0xD0
		::System::Boolean hasBaked; // 0xD8
		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* NESComCache; // 0xE0
		::Il2CppArray<::UnityEngine::GameObject*>* Go2ESCom_goCache; // 0xE8
		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Go2ESCom_esComCache; // 0xF0
		::MoleMole::EffectSimulate::NapEffectSimulatorComponent* SelfComCache; // 0xF8
		::MoleMole::EffectSimulate::NESDataCacheBase* nesDataCache; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR__CCTOR_OFFSET))();
		}

		::System::Void RuntimeSimulate_Record(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_RECORD_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeSimulate_Job_Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_JOB_PREPARE_OFFSET))(this);
		}

		::System::Void RuntimeSimulate_Job_Other()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_JOB_OTHER_OFFSET))(this);
		}

		::System::Single GetDTCache()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETDTCACHE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONDISABLE_OFFSET))(this);
		}

		::System::Void RuntimeInit_PoolOpt(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::ParticleSystem*>* a3, ::Il2CppArray<::UnityEngine::Renderer*>* a4, ::MoleMole::Config::EffectLODType a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Il2CppArray<::UnityEngine::ParticleSystem*>*, ::Il2CppArray<::UnityEngine::Renderer*>*, ::MoleMole::Config::EffectLODType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEINIT_POOLOPT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AddChildrenVisibleState(::MoleMole::EffectSimulate::NapEffectSimulatorComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ADDCHILDRENVISIBLESTATE_OFFSET))(this, a1);
		}

		::System::Void RemoveChildrenVisibleState(::MoleMole::EffectSimulate::NapEffectSimulatorComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_REMOVECHILDRENVISIBLESTATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* get_arrComs()
		{
			return ((::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ARRCOMS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem*>* get_arrPS()
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ARRPS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* get_mapGo2EsCom()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_MAPGO2ESCOM_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_AWAKE_OFFSET))(this);
		}

		::System::Boolean GetIsSupportLightWeightActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETISSUPPORTLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Boolean GetIsForceLightWeightActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETISFORCELIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::MoleMole::Config::EffectLODType MapEffectLODType(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EffectLODType a2)
		{
			return ((::MoleMole::Config::EffectLODType(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_MAPEFFECTLODTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeInit(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::ParticleSystem*>* a3, ::Il2CppArray<::UnityEngine::Renderer*>* a4, ::MoleMole::Config::EffectLODType a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Il2CppArray<::UnityEngine::ParticleSystem*>*, ::Il2CppArray<::UnityEngine::Renderer*>*, ::MoleMole::Config::EffectLODType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEINIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void RuntimeRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMERELEASE_OFFSET))(this);
		}

		::System::Void RuntimeSimulate(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMESIMULATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RuntimeDoFadeOut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOFADEOUT_OFFSET))(this, a1);
		}

		::System::Boolean RuntimeDoFadeOutThreadSafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOFADEOUTTHREADSAFE_OFFSET))(this);
		}

		::System::Void StopSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_STOPSELF_OFFSET))(this);
		}

		::System::Void RuntimeDoInactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEDOINACTIVE_OFFSET))(this);
		}

		::System::Single RuntimeGlobalSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_RUNTIMEGLOBALSPEED_OFFSET))(this);
		}

		::System::Boolean HandleSimulatorMgrFadeValue(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::Il2CppArray<::Il2CppArray<::System::Single>*>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_HANDLESIMULATORMGRFADEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetFadeOutVal(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETFADEOUTVAL_OFFSET))(this, a1);
		}

		::System::Void Simulate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SIMULATE_OFFSET))(this, a1);
		}

		::System::Boolean SetTimeAt(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETTIMEAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Init(::System::Boolean a1, ::System::Boolean a2, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C a3, ::UnityEngine::GameObject* a4, ::MoleMole::Config::EffectLODType a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C, ::UnityEngine::GameObject*, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetPhaseTimeRate(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETPHASETIMERATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPhaseTimeDuration(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETPHASETIMEDURATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Stop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_STOP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_CLEAR_OFFSET))(this);
		}

		::System::Boolean DurationIsInf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_DURATIONISINF_OFFSET))(this);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ISFINISHED_OFFSET))(this);
		}

		::System::Single GetNowTimeAt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETNOWTIMEAT_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C get_PlayMode()
		{
			return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr_Enum_3_B9C5FC3D38ACE99C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Boolean IsInInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ISININIT_OFFSET))(this);
		}

		::System::Boolean GetInitPhaseActiveState(::MoleMole::EffectSimulate::NapEffectSimulatorComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETINITPHASEACTIVESTATE_OFFSET))(this, a1);
		}

		::System::Void SetInitPhaseActiveState(::MoleMole::EffectSimulate::NapEffectSimulatorComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SETINITPHASEACTIVESTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* GetAllChildrenCom()
		{
			return ((::Il2CppArray<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETALLCHILDRENCOM_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* GetPSByGo(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETPSBYGO_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemRenderer* GetPSRByGo(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::ParticleSystemRenderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETPSRBYGO_OFFSET))(this, a1);
		}

		::UnityEngine::MeshRenderer* GetMRByGo(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETMRBYGO_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* GetOtherRendererByGo(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETOTHERRENDERERBYGO_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::NapEffectSimulatorComponent* GetESComByGo(::UnityEngine::GameObject* a1)
		{
			return ((::MoleMole::EffectSimulate::NapEffectSimulatorComponent*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GETESCOMBYGO_OFFSET))(this, a1);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_START_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsRuntimeUpdateReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_GET_ISRUNTIMEUPDATEREADY_OFFSET))(this);
		}

		::System::Void set_IsRuntimeUpdateReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_SET_ISRUNTIMEUPDATEREADY_OFFSET))(this, a1);
		}

		::System::Void Method_5_C5E0FC6E1C3C1128(::Il2CppArray<::UnityEngine::ParticleSystem*>* a1, ::Il2CppArray<::UnityEngine::Renderer*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem*>*, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_C5E0FC6E1C3C1128_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_FB870C37E702D8C7(::Il2CppArray<::UnityEngine::ParticleSystem*>* a1, ::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* a2, ::Il2CppArray<::UnityEngine::MeshRenderer*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem*>*, ::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>*, ::Il2CppArray<::UnityEngine::MeshRenderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FB870C37E702D8C7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_7F4EBEC55EBE2D81()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7F4EBEC55EBE2D81_OFFSET))(this);
		}

		::System::Void Method_5_9B6BAF49879647BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9B6BAF49879647BD_OFFSET))(this);
		}

		::System::Void Method_5_D829460A9C07E886(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_D829460A9C07E886_OFFSET))(this, a1);
		}

		::System::Void Method_5_741837A0FB99F394(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_741837A0FB99F394_OFFSET))(this, a1);
		}

		::System::Void Method_5_464B80C09A37526F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_464B80C09A37526F_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Single Method_5_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Void Method_5_D829460A9C07E886_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_D829460A9C07E886_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1808E1CF7A125519_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1808E1CF7A125519_1_OFFSET))(this);
		}

		::System::Boolean Method_5_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_5_32B2368221A04800(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_32B2368221A04800_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_0DF420E95D6252BE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
		}

		::System::Void Method_5_4C1C6BDA70EF0410(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_4C1C6BDA70EF0410_OFFSET))(this, a1);
		}

		::System::Void Method_5_24ACE8D2378D26B0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_24ACE8D2378D26B0_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_5_ED754E022B2B63CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_ED754E022B2B63CC_OFFSET))(this);
		}

		::System::Void Method_5_E907F5C75FFBA4EA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_E907F5C75FFBA4EA_OFFSET))(this, a1);
		}

		::System::Void Method_5_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_AA169839CB93802A_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Boolean Method_5_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_7AEA4B2B25797605()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7AEA4B2B25797605_OFFSET))(this);
		}

		::System::Void Method_5_458DAEAB6170C584()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_458DAEAB6170C584_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Boolean Method_5_0B1EB5C9B94BAB66_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0B1EB5C9B94BAB66_1_OFFSET))(this);
		}

		::System::Void Method_5_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void Method_5_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_0E142E3463F30350_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_9D0688AE2E08E349()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_9D0688AE2E08E349_OFFSET))(this);
		}

		::System::Single Method_5_FF5188F77C143723()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_FF5188F77C143723_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_5_ACD535D83ECB43B9(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NAPEFFECTSIMULATORMGR_METHOD_5_ACD535D83ECB43B9_OFFSET))(this, a1);
		}
	};
}
