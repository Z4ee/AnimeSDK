#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PPEffectManager_MainIntensityByEntity.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_B265AEDCC887C2E5;
class Class_1_D27BF54F25500E5F;
class Class_1_E4DE5172E22946B7;
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

#define RPG_CLIENT_PPEFFECTMANAGER_CLEARALLFILTER_OFFSET UNITYSDK_OFFSET(0xC322570)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xC323EC0)
#define RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0xC326180)
#define RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xC326080)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET UNITYSDK_OFFSET(0xC323100)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET UNITYSDK_OFFSET(0xC324290)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xC325AB0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET UNITYSDK_OFFSET(0xC325C80)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0xC325570)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0xC3258E0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0xC325770)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET UNITYSDK_OFFSET(0xC323FD0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET UNITYSDK_OFFSET(0xC324FD0)
#define RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0xC3248A0)
#define RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xC3261E0)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xC323C40)
#define RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xC322840)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xC327690)
#define RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0xC321B80)
#define RPG_CLIENT_PPEFFECTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC321B90)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELINIT_OFFSET UNITYSDK_OFFSET(0xC322220)
#define RPG_CLIENT_PPEFFECTMANAGER_LEVELUNINIT_OFFSET UNITYSDK_OFFSET(0xC322290)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET UNITYSDK_OFFSET(0xC321460)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xC321360)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET UNITYSDK_OFFSET(0xC3210A0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET UNITYSDK_OFFSET(0xC320C50)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET UNITYSDK_OFFSET(0xC320E50)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET UNITYSDK_OFFSET(0xC3214C0)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET UNITYSDK_OFFSET(0xC320F40)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEINIT_OFFSET UNITYSDK_OFFSET(0xC320A70)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUNINIT_OFFSET UNITYSDK_OFFSET(0xC320B80)
#define RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0xC321260)
#define RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0xC3229B0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET UNITYSDK_OFFSET(0xC3233F0)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET UNITYSDK_OFFSET(0xC323600)
#define RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET UNITYSDK_OFFSET(0xC323550)
#define RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET UNITYSDK_OFFSET(0xC323070)
#define RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0xC320AF0)
#define RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xC3238C0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xC3232D0)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xC323A40)
#define RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET UNITYSDK_OFFSET(0xC323930)
#define RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xC326270)
#define RPG_CLIENT_PPEFFECTMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0xC322020)
#define RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET UNITYSDK_OFFSET(0xC325F80)
#define RPG_CLIENT_PPEFFECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3276B0)
#define RPG_CLIENT_PPEFFECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3276A0)
#define RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET UNITYSDK_OFFSET(0xC3275D0)
#define RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET UNITYSDK_OFFSET(0xC3237D0)
#define RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET UNITYSDK_OFFSET(0xC321F90)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager_TypeDefinitionIndex = 65227;

	class PPEffectManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_GLOBAL_ONEMINUS_MAIN_INTENSITY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x687C0);
		}
		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x140A0);
		}
		static ::System::Int32* StaticGet_PropertyIDGlobalOneMinusAvatarIntensityEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPEffectManager_TypeDefinitionIndex)->GetStaticField(0x140A4);
		}
		::RPG::GameCore::GameEntity* _SpeedLineTargetEntity; // 0x10
		::Class_1_B265AEDCC887C2E5* _MiniGameFilterSystem; // 0x18
		::UnityEngine::Texture* _MiniGameSpeedLineSeed; // 0x20
		::RPG::CustomRP::RPGLensDistortion* _LensDistortion; // 0x28
		::Class_1_D27BF54F25500E5F* _DOFTransition; // 0x30
		::RPG::Client::CameraBlendCurve* _LensDistortionIntensityCurve; // 0x38
		::UnityEngine::Texture* _SpeedLineSeed; // 0x40
		::Class_1_D27BF54F25500E5F* _LensGlitchTransition; // 0x48
		::RPG::GameCore::LensDistortionCurveEffect* _LensDistortionCurveEffectConfig; // 0x50
		::RPG::GameCore::LensGlitchEffect* _LensGlitchEffectConfig; // 0x58
		::Class_1_D27BF54F25500E5F* _AvatarIntensityTransition; // 0x60
		::RPG::Client::CameraBlendCurve* _LensDistortionXCurve; // 0x68
		::RPG::Client::CameraBlendCurve* _LensDistortionScaleCurve; // 0x70
		::Class_1_B265AEDCC887C2E5* _FilterSystem; // 0x78
		::System::Collections::Generic::List_1<::Class_1_E4DE5172E22946B7*>* _AvatarIntensityList; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::PPEffectManager_MainIntensityByEntity>* _MainIntensityStackByEntity; // 0x88
		::RPG::CustomRP::RPGLensGlitch* _LensGlitch; // 0x90
		::RPG::CustomRP::RPGSpeedLine* _SpeedLine; // 0x98
		::RPG::CustomRP::RPGDepthOfField* _DOF; // 0xA0
		::RPG::GameCore::GameEntity* _DOFTargetEntity; // 0xA8
		::Class_1_D27BF54F25500E5F* _MainIntensityTransition; // 0xB0
		::RPG::Client::CameraBlendCurve* _LensDistortionYCurve; // 0xB8
		::RPG::GameCore::SpeedLineEffect* _SpeedLineEffectConfig; // 0xC0
		::RPG::GameCore::DOFEffect* _DOFEffectConfig; // 0xC8
		::RPG::CustomRP::RPGSpeedLine* _MiniGameSpeedLine; // 0xD0
		::System::Single _LensDistortionEffectTickTimer; // 0xD8
		::System::Single GlobalMainIntensity; // 0xDC
		::System::Boolean _IsInitialized; // 0xE0
		::System::Boolean _IsBattleDataView; // 0xE1

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

		::System::Void MiniGameConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameConfigFilterSystemRadialBlur(::RPG::GameCore::LittleGameRadialBlurEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameRadialBlurEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void MiniGameConfigFilterStackWithAnim(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::PPEffectFilterPriorityGroup a6, ::RPG::GameCore::PPEffectFilterPriority a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MiniGameUpdateFilterStackParams(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMEUPDATEFILTERSTACKPARAMS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MiniGameCloseFilterStackWithAnim(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLOSEFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MiniGameClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, a1);
		}

		::System::Void MiniGameConfigSpeedLine(::RPG::GameCore::LittleGameSpeedLineEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_MINIGAMECONFIGSPEEDLINE_OFFSET))(this, a1);
		}

		::Class_1_B265AEDCC887C2E5* get_MiniGameFilterSystem()
		{
			return ((::Class_1_B265AEDCC887C2E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_MINIGAMEFILTERSYSTEM_OFFSET))(this);
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

		::System::Void ClearAllfilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARALLFILTER_OFFSET))(this);
		}

		::System::Void RefreshAvatarIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_REFRESHAVATARINTENSITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ConfigAvatarIntensityWithTargetEntityLst(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGAVATARINTENSITYWITHTARGETENTITYLST_OFFSET))(this, a1);
		}

		::System::Void ResetAllAvatarIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETALLAVATARINTENSITY_OFFSET))(this);
		}

		::System::Void ResetIntensity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_OFFSET))(this, a1);
		}

		::System::Void ResetIntensity_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_RESETINTENSITY_1_OFFSET))(this, a1);
		}

		::System::Void SetAvatarIntensityValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETAVATARINTENSITYVALUE_OFFSET))(this, a1);
		}

		::System::Void StartAvatarIntensityEffect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTAVATARINTENSITYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalMainAvatarIntensityEffectEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETGLOBALMAINAVATARINTENSITYEFFECTENABLE_OFFSET))(this, a1);
		}

		::System::Void StartGlobalMainIntensityEffect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void FinishGlobalMainIntensityEffect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECT_OFFSET))(this, a1);
		}

		::System::Void StartGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_STARTGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishGlobalMainIntensityEffectByEntity(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_FINISHGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearGlobalMainIntensityEffectByEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARGLOBALMAININTENSITYEFFECTBYENTITY_OFFSET))(this);
		}

		::System::Void ConfigLensDistortionCurve(::RPG::GameCore::LensDistortionCurveEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSDISTORTIONCURVE_OFFSET))(this, a1);
		}

		::System::Void ConfigDOF(::RPG::GameCore::DOFEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DOFEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGDOF_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigSpeedLine(::RPG::GameCore::SpeedLineEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpeedLineEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGSPEEDLINE_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigLensGlitch(::RPG::GameCore::LensGlitchEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGLENSGLITCH_OFFSET))(this, a1);
		}

		::System::Void ConfigFilterSystemColorGradingCurve(::RPG::GameCore::RPGColorGradingCurveEffect* a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMCOLORGRADINGCURVE_OFFSET))(this, a1, a2);
		}

		::System::Void ConfigFilterSystemRadialBlur(::RPG::GameCore::RadialBlurEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::PPEffectFilterPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLUR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigFilterSystemRadialBlurCurve(::RPG::GameCore::RadialBlurCurveEffect* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::PPEffectFilterPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RadialBlurCurveEffect*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSYSTEMRADIALBLURCURVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigFilterStackWithAnim(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::PPEffectFilterPriorityGroup a6, ::RPG::GameCore::PPEffectFilterPriority a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ConfigFilterStackWithAttenuation(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::GameCore::PPEffectFilterPriorityGroup a8, ::RPG::GameCore::PPEffectFilterPriority a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CONFIGFILTERSTACKWITHATTENUATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void UpdateFilterStackParams(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_UPDATEFILTERSTACKPARAMS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CloseFilterStackWithAnim(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLOSEFILTERSTACKWITHANIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ClearPPEffectFilterByPriorityGroup(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_CLEARPPEFFECTFILTERBYPRIORITYGROUP_OFFSET))(this, a1);
		}

		::System::Void SetCurrentPPEffectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SETCURRENTPPEFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void DoOnBattleDataView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_DOONBATTLEDATAVIEW_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnPPFilterStackEffectActiveChagne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__ONPPFILTERSTACKEFFECTACTIVECHAGNE_OFFSET))(this, a1);
		}

		::System::Void _SetAvatarIntensityOn(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETAVATARINTENSITYON_OFFSET))(this, a1, a2);
		}

		::System::Void _SetMainGlobalIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER__SETMAINGLOBALINTENSITY_OFFSET))(this, a1);
		}

		::Class_1_B265AEDCC887C2E5* get_FilterSystem()
		{
			return ((::Class_1_B265AEDCC887C2E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_GET_FILTERSYSTEM_OFFSET))(this);
		}
	};
}
