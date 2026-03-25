#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PPEffectManager_MainIntensityByEntity.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_53BA4F2C2E556314;
class Class_1_8C01F4196D770BEF;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::GameCore { class DOFEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace RPG::GameCore { class LensGlitchEffect; }
namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace RPG::GameCore { class LittleGameSpeedLineEffect; }
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace RPG::GameCore { class RadialBlurCurveEffect; }
namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class SpeedLineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0x9EBD520)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0x9EBF730)
#define RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0x9EBF630)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET UNITYSDK_OFFSET(0x9EBC880)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET UNITYSDK_OFFSET(0x9EBD8E0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0x9EBF060)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET UNITYSDK_OFFSET(0x9EBF230)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0x9EBEB50)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0x9EBEEB0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0x9EBED50)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET UNITYSDK_OFFSET(0x9EBD620)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET UNITYSDK_OFFSET(0x9EBE5F0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0x9EBDED0)
#define RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0x9EBF790)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0x9EBD350)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0x9EBD050)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x9EC0B90)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x9EBB8F0)
#define RPG_CLIENT_PPEFFECTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9EBB900)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELINIT_OFFSET UNITYSDK_OFFSET(0x9EBBF20)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELUNINIT_OFFSET UNITYSDK_OFFSET(0x9EBBF90)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0x9EBB1C0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0x9EBB0C0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0x9EBAE00)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0x9EBA9B0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0x9EBABB0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0x9EBB220)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0x9EBACA0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_OFFSET UNITYSDK_OFFSET(0x9EBA7E0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_OFFSET UNITYSDK_OFFSET(0x9EBA8F0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0x9EBAFC0)
#define RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0x9EBC260)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0x9EBCAC0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET UNITYSDK_OFFSET(0x9EBCC60)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET UNITYSDK_OFFSET(0x9EBCBD0)
#define RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET UNITYSDK_OFFSET(0x9EBC7F0)
#define RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x9EBA860)
#define RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0x9EBCEE0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0x9EBC9B0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0x9EBD1A0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0x9EBCF50)
#define RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x9EBF830)
#define RPG_CLIENT_PPEFFECTMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x9EBBD30)
#define RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0x9EBF530)
#define RPG_CLIENT_PPEFFECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EC0BB0)
#define RPG_CLIENT_PPEFFECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC0BA0)
#define RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET UNITYSDK_OFFSET(0x9EC0AD0)
#define RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET UNITYSDK_OFFSET(0x9EBCE00)
#define RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET UNITYSDK_OFFSET(0x9EBBCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager_TypeDefinitionIndex = 57055;

	class PPEffectManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_GLOBAL_ONEMINUS_MAIN_INTENSITY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x44F20);
		}
		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x11D30);
		}
		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensityEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x11D34);
		}
		::Class_1_53BA4F2C2E556314* _MiniGameFilterSystem; // 0x10
		::RPG::GameCore::LensGlitchEffect* _LensGlitchEffectConfig; // 0x18
		::RPG::Client::CameraBlendCurve* _LensDistortionXCurve; // 0x20
		::RPG::GameCore::GameEntity* _SpeedLineTargetEntity; // 0x28
		::Class_1_D27BF54F25500E5F* _MainIntensityTransition; // 0x30
		::RPG::Client::CameraBlendCurve* _LensDistortionScaleCurve; // 0x38
		::RPG::CustomRP::RPGLensGlitch* _LensGlitch; // 0x40
		::RPG::GameCore::LensDistortionCurveEffect* _LensDistortionCurveEffectConfig; // 0x48
		::RPG::GameCore::DOFEffect* _DOFEffectConfig; // 0x50
		::RPG::GameCore::SpeedLineEffect* _SpeedLineEffectConfig; // 0x58
		::RPG::CustomRP::RPGLensDistortion* _LensDistortion; // 0x60
		::Class_1_D27BF54F25500E5F* _LensGlitchTransition; // 0x68
		::Class_1_53BA4F2C2E556314* _FilterSystem; // 0x70
		::System::Collections::Generic::List_1<::Class_1_8C01F4196D770BEF*>* _AvatarIntensityList; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::PPEffectManager_MainIntensityByEntity>* _MainIntensityStackByEntity; // 0x80
		::RPG::Client::CameraBlendCurve* _LensDistortionIntensityCurve; // 0x88
		::RPG::CustomRP::RPGSpeedLine* _MiniGameSpeedLine; // 0x90
		::RPG::Client::CameraBlendCurve* _LensDistortionYCurve; // 0x98
		::Class_1_D27BF54F25500E5F* _AvatarIntensityTransition; // 0xA0
		::UnityEngine::Texture* _SpeedLineSeed; // 0xA8
		::RPG::GameCore::GameEntity* _DOFTargetEntity; // 0xB0
		::UnityEngine::Texture* _MiniGameSpeedLineSeed; // 0xB8
		::Class_1_D27BF54F25500E5F* _DOFTransition; // 0xC0
		::RPG::CustomRP::RPGDepthOfField* _DOF; // 0xC8
		::RPG::CustomRP::RPGSpeedLine* _SpeedLine; // 0xD0
		::System::Single GlobalMainIntensity; // 0xD8
		::System::Boolean _IsBattleDataView; // 0xDC
		::System::Boolean _IsInitialized; // 0xDD
		::System::Single _LensDistortionEffectTickTimer; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void MiniGameInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_OFFSET))(this);
		}

		::System::Void MiniGameUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_OFFSET))(this);
		}

		::System::Void MiniGameConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* pConfig, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, pConfig, priority);
		}

		::System::Void MiniGameConfigFilterSystemRadialBlur(::RPG::GameCore::LittleGameRadialBlurEffect* pConfig, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameRadialBlurEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, pConfig, priority);
		}

		::System::Void MiniGameFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* pConfig, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, pConfig, priority);
		}

		::System::Void MiniGameConfigFilterStackWithAnim(::System::String* assetPath, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration, ::System::Single recoverDuration, ::RPG::GameCore::PPEffectFilterPriorityGroup priorityGroup, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET))(this, assetPath, startRate, targetRate, duration, recoverDuration, priorityGroup, priority);
		}

		::System::Void MiniGameUpdateFilterStackParams(::System::String* assetPath, ::RPG::GameCore::PPEffectFilterPriorityGroup priorityGroup, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET))(this, assetPath, priorityGroup, startRate, targetRate, duration);
		}

		::System::Void MiniGameCloseFilterStackWithAnim(::System::String* assetPath, ::RPG::GameCore::PPEffectFilterPriorityGroup group, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET))(this, assetPath, group, startRate, targetRate, duration);
		}

		::System::Void MiniGameClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, group);
		}

		::System::Void MiniGameConfigSpeedLine(::RPG::GameCore::LittleGameSpeedLineEffect* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET))(this, pConfig);
		}

		::Class_1_53BA4F2C2E556314* get_MiniGameFilterSystem()
		{
			return ((::Class_1_53BA4F2C2E556314*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void LevelInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_LEVELINIT_OFFSET))(this);
		}

		::System::Void LevelUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_LEVELUNINIT_OFFSET))(this);
		}

		::System::Void RefreshAvatarIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pTargetList, ::System::Single fromIntensity, ::System::Single toIntensity, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET))(this, pTargetList, fromIntensity, toIntensity, duration);
		}

		::System::Void ConfigAvatarIntensityWithTargetEntityLst(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pTargetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET))(this, pTargetList);
		}

		::System::Void ResetAllAvatarIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET))(this);
		}

		::System::Void ResetIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pTargetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET))(this, pTargetList);
		}

		::System::Void ResetIntensity_1(::RPG::GameCore::GameEntity* pCurEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET))(this, pCurEntity);
		}

		::System::Void SetAvatarIntensityValue(::System::Single fTargetIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET))(this, fTargetIntensity);
		}

		::System::Void StartAvatarIntensityEffect(::System::Single fTargetIntensity, ::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET))(this, fTargetIntensity, fDuration);
		}

		::System::Void SetGlobalMainAvatarIntensityEffectEnable(::System::Boolean bIsEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET))(this, bIsEnable);
		}

		::System::Void StartGlobalMainIntensityEffect(::System::Single fTargetIntensity, ::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET))(this, fTargetIntensity, fDuration);
		}

		::System::Void FinishGlobalMainIntensityEffect(::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET))(this, fDuration);
		}

		::System::Void StartGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* entity, ::System::Single fTargetIntensity, ::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, entity, fTargetIntensity, fDuration);
		}

		::System::Void FinishGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* entity, ::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, entity, fDuration);
		}

		::System::Void ClearGlobalMainIntensityEffectByEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this);
		}

		::System::Void ConfigLensDistortionCurve(::RPG::GameCore::LensDistortionCurveEffect* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET))(this, pConfig);
		}

		::System::Void ConfigDOF(::RPG::GameCore::DOFEffect* pConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DOFEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET))(this, pConfig, pEntityList);
		}

		::System::Void ConfigSpeedLine(::RPG::GameCore::SpeedLineEffect* pConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpeedLineEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET))(this, pConfig, pEntityList);
		}

		::System::Void ConfigLensGlitch(::RPG::GameCore::LensGlitchEffect* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET))(this, pConfig);
		}

		::System::Void ConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* pConfig, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, pConfig, priority);
		}

		::System::Void ConfigFilterSystemRadialBlur(::RPG::GameCore::RadialBlurEffect* pConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pEntityList, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, pConfig, pEntityList, priority);
		}

		::System::Void ConfigFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* pConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pEntityList, ::RPG::GameCore::PPEffectFilterPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, pConfig, pEntityList, priority);
		}

		::System::Void ConfigFilterStackWithAnim(::System::String* assetPath, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration, ::System::Single recoverDuration, ::RPG::GameCore::PPEffectFilterPriorityGroup priorityGroup, ::RPG::GameCore::PPEffectFilterPriority priority, ::System::Boolean muteAudioEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET))(this, assetPath, startRate, targetRate, duration, recoverDuration, priorityGroup, priority, muteAudioEvent);
		}

		::System::Void ConfigFilterStackWithAttenuation(::System::String* assetPath, ::RPG::GameCore::GameEntity* target, ::System::Single maxAttenuationDistance, ::System::Single maxAttenuationDistanceRate, ::System::Single minAttenuationDistanceRate, ::System::Single duration, ::System::Single recoverDuration, ::RPG::GameCore::PPEffectFilterPriorityGroup priorityGroup, ::RPG::GameCore::PPEffectFilterPriority priority, ::System::Boolean muteAudioEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET))(this, assetPath, target, maxAttenuationDistance, maxAttenuationDistanceRate, minAttenuationDistanceRate, duration, recoverDuration, priorityGroup, priority, muteAudioEvent);
		}

		::System::Void UpdateFilterStackParams(::System::String* assetPath, ::RPG::GameCore::PPEffectFilterPriorityGroup priorityGroup, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET))(this, assetPath, priorityGroup, startRate, targetRate, duration);
		}

		::System::Void CloseFilterStackWithAnim(::System::String* assetPath, ::RPG::GameCore::PPEffectFilterPriorityGroup group, ::System::Single startRate, ::System::Single targetRate, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET))(this, assetPath, group, startRate, targetRate, duration);
		}

		::System::Void ClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, group);
		}

		::System::Void SetCurrentPPEffectActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET))(this, isActive);
		}

		::System::Void DoOnBattleDataView(::System::Boolean isEnterBattleDataView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET))(this, isEnterBattleDataView);
		}

		::System::Void Tick(::System::Single elapsedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET))(this, elapsedTime);
		}

		::System::Void _OnPPFilterStackEffectActiveChagne(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET))(this, param);
		}

		::System::Void _SetAvatarIntensityOn(::System::Int32 sPropertyID, ::System::Boolean bIsOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET))(this, sPropertyID, bIsOn);
		}

		::System::Void _SetMainGlobalIntensity(::System::Single fIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET))(this, fIntensity);
		}

		::Class_1_53BA4F2C2E556314* get_FilterSystem()
		{
			return ((::Class_1_53BA4F2C2E556314*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET))(this);
		}
	};
}
