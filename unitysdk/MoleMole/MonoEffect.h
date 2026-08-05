#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/MonoEffectPluginMask.h"
#include "unitysdk/MoleMole/MonoEffectRuntimeDataCache.h"
#include "unitysdk/MoleMole/MonoEffect_Enum_3_EF934AA54C999033.h"
#include "unitysdk/MoleMole/MonoEffect_Enum_3_F8BBB3B7E922E8A1.h"
#include "unitysdk/MoleMole/MonoEffect_Enum_3_FC3DC21E660E5341.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_452;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole { class DynamicBoneParaSwitch; }
namespace MoleMole { class MonoEffectExtensionBehaviour; }
namespace MoleMole { class MonoEffectPluginAttachPoint; }
namespace MoleMole { class MonoEffectPluginAttachToCamera; }
namespace MoleMole { class MonoEffectPluginAudio; }
namespace MoleMole { class MonoEffectPluginClipPlane; }
namespace MoleMole { class MonoEffectPluginConstantScreenSize; }
namespace MoleMole { class MonoEffectPluginDestroy; }
namespace MoleMole { class MonoEffectPluginDither; }
namespace MoleMole { class MonoEffectPluginFade; }
namespace MoleMole { class MonoEffectPluginFollow; }
namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace MoleMole { class MonoEffectPluginHitWall; }
namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }
namespace MoleMole { class MonoEffectPluginScreenEffect; }
namespace MoleMole { class MonoEffectPluginStateAnimation; }
namespace MoleMole { class MonoEffectPluginSyncEntityPos; }
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole { class MonoEffectSelfAttachPoint; }
namespace MoleMole { class MonoEffectShape; }
namespace MoleMole { class MonoEffect_LayeredEffect; }
namespace MoleMole { class MonoEffect_TagGoConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class PBDDeformer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x13AAD660)
#define MOLEMOLE_MONOEFFECT_CLEARPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x13AAEEF0)
#define MOLEMOLE_MONOEFFECT_CLEARRENDER_OFFSET UNITYSDK_OFFSET(0x13AAF2C0)
#define MOLEMOLE_MONOEFFECT_DOCACHEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x13AACF60)
#define MOLEMOLE_MONOEFFECT_GETCACHEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x13AAC630)
#define MOLEMOLE_MONOEFFECT_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x13AACCE0)
#define MOLEMOLE_MONOEFFECT_GET_CACHEDBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x13AAD600)
#define MOLEMOLE_MONOEFFECT_GET_CACHEDRENDERERSTOENABLE_OFFSET UNITYSDK_OFFSET(0x13AACF00)
#define MOLEMOLE_MONOEFFECT_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x13AAC5F0)
#define MOLEMOLE_MONOEFFECT_GET_DYNAMICBONEPARASWITCHES_OFFSET UNITYSDK_OFFSET(0x13AABE10)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATIONS_OFFSET UNITYSDK_OFFSET(0x13AAA090)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATION_OFFSET UNITYSDK_OFFSET(0x13AA9F10)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTLOGICCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13AAA290)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13AAC610)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x13AAAB90)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHTOCAMERA_OFFSET UNITYSDK_OFFSET(0x13AABB10)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINAUDIO_OFFSET UNITYSDK_OFFSET(0x13AAA410)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x13AABC90)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCONSTANTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x13AAC120)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDESTROY_OFFSET UNITYSDK_OFFSET(0x13AAAA10)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDITHER_OFFSET UNITYSDK_OFFSET(0x13AAA590)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFADE_OFFSET UNITYSDK_OFFSET(0x13AAA710)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x13AABFA0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOW_OFFSET UNITYSDK_OFFSET(0x13AAA890)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINGROUNDLIGHTING_OFFSET UNITYSDK_OFFSET(0x13AAB690)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINLASERLINERENDERERS_OFFSET UNITYSDK_OFFSET(0x13AAB990)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x13AAAD10)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSTATEANIMATION_OFFSET UNITYSDK_OFFSET(0x13AAC420)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSYNCENTITYPOS_OFFSET UNITYSDK_OFFSET(0x13AAC2A0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13AAAE90)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTSELFATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x13AAB810)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTSHAPE_OFFSET UNITYSDK_OFFSET(0x13AAB010)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTWEAPONTRAIL_OFFSET UNITYSDK_OFFSET(0x13AAB190)
#define MOLEMOLE_MONOEFFECT_GET_FINALANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x13AAE840)
#define MOLEMOLE_MONOEFFECT_GET_FINALPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x13AAE810)
#define MOLEMOLE_MONOEFFECT_GET_ISALLCOMPONENTSCACHED_OFFSET UNITYSDK_OFFSET(0x13AA90A0)
#define MOLEMOLE_MONOEFFECT_GET_ISINACTIVECOMPCACHED_OFFSET UNITYSDK_OFFSET(0x13AA9010)
#define MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTLIGHTS_OFFSET UNITYSDK_OFFSET(0x13AA92B0)
#define MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTRENDERS_OFFSET UNITYSDK_OFFSET(0x13AA9820)
#define MOLEMOLE_MONOEFFECT_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0x13AA9150)
#define MOLEMOLE_MONOEFFECT_GET_MONOEFFECTEXTENSIONBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x13AAA1A0)
#define MOLEMOLE_MONOEFFECT_GET_NEEDINACTIVECACHED_OFFSET UNITYSDK_OFFSET(0x13AA8FB0)
#define MOLEMOLE_MONOEFFECT_GET_PARTICLESYS_OFFSET UNITYSDK_OFFSET(0x13AA9C30)
#define MOLEMOLE_MONOEFFECT_GET_PBDDEFORMER_OFFSET UNITYSDK_OFFSET(0x13AAB590)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLBULLET_OFFSET UNITYSDK_OFFSET(0x13AAB490)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLSCRATCH_OFFSET UNITYSDK_OFFSET(0x13AAB390)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALL_OFFSET UNITYSDK_OFFSET(0x13AAB290)
#define MOLEMOLE_MONOEFFECT_GET_POLYGONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x13AAC5A0)
#define MOLEMOLE_MONOEFFECT_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x13AA96C0)
#define MOLEMOLE_MONOEFFECT_GET_SIMULATORMGR_OFFSET UNITYSDK_OFFSET(0x13AA9D90)
#define MOLEMOLE_MONOEFFECT_INITPARTICLES_OFFSET UNITYSDK_OFFSET(0x13AAE910)
#define MOLEMOLE_MONOEFFECT_METHOD_5_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x13AADAA0)
#define MOLEMOLE_MONOEFFECT_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13AA8EB0)
#define MOLEMOLE_MONOEFFECT_METHOD_5_4CD1124C71DEC91E_OFFSET UNITYSDK_OFFSET(0x13AB0310)
#define MOLEMOLE_MONOEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13AAE120)
#define MOLEMOLE_MONOEFFECT_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13AB02A0)
#define MOLEMOLE_MONOEFFECT_METHOD_5_C5E0D2AA3A5BB59B_OFFSET UNITYSDK_OFFSET(0x13AAE080)
#define MOLEMOLE_MONOEFFECT_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13AA8DB0)
#define MOLEMOLE_MONOEFFECT_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x13AAE5B0)
#define MOLEMOLE_MONOEFFECT_METHOD_5_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x13AB0510)
#define MOLEMOLE_MONOEFFECT_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x13AAD890)
#define MOLEMOLE_MONOEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13AAE240)
#define MOLEMOLE_MONOEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13AA8DF0)
#define MOLEMOLE_MONOEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13AA8CC0)
#define MOLEMOLE_MONOEFFECT_RESETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x13AAF3A0)
#define MOLEMOLE_MONOEFFECT_SETATTACH_OFFSET UNITYSDK_OFFSET(0x13AAE870)
#define MOLEMOLE_MONOEFFECT_SETCOMPONENTSACTIVE_OFFSET UNITYSDK_OFFSET(0x13AAF3F0)
#define MOLEMOLE_MONOEFFECT_SET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x13AAC600)
#define MOLEMOLE_MONOEFFECT_SET_EFFECTMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13AAC620)
#define MOLEMOLE_MONOEFFECT_UPDATECACHESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x13AAFB10)
#define MOLEMOLE_MONOEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB01B0)
#define MOLEMOLE_MONOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB0100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffect_TypeDefinitionIndex = 50323;

	class MonoEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>** StaticGet_Field_5_24()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x46E20);
		}
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>** StaticGet_Field_5_27()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x46E28);
		}
		static ::System::Boolean* StaticGet_monoEffectUseSimulateTimeOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x10700);
		}
		static ::System::Boolean* StaticGet_monoEffectNotSimulateIfNoOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x10701);
		}
		::UnityEngine::Vector3 OffsetVec3; // 0x18
		::UnityEngine::Vector3 PosOffset; // 0x24
		::UnityEngine::Vector3 AngleOffset; // 0x30
		::System::Boolean IsUseStartTimeOffset; // 0x3C
		::System::Single StartTimeOffset; // 0x40
		::System::Boolean IgnoreWorldTimeScale; // 0x44
		::System::Boolean IgnoreOwnerTimeScale; // 0x45
		::System::Boolean IgnoreWitchTimeScale; // 0x46
		::MoleMole::MonoEffect_Enum_3_FC3DC21E660E5341 ActionWhenAttachedCasterKilled; // 0x48
		::MoleMole::MonoEffect_Enum_3_EF934AA54C999033 CasterKilledType; // 0x4C
		::System::Boolean IsUseLayeredEffect; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::MonoEffect_LayeredEffect*>* LayeredEffectList; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MonoEffect_TagGoConfig*>* TagGoConfigList; // 0x60
		::System::Boolean IgnoreBlackScreenHide; // 0x68
		::System::Boolean NeedShowLightInBlackScreen; // 0x69
		::System::Boolean IgnoreColorAdjustment; // 0x6A
		::System::Boolean IsExcludeFromLevelEndEffectDisappear; // 0x6B
		::MoleMole::GameplayTag EffectTag; // 0x70
		::MoleMole::MonoEffectPluginMask _MonoEffectPluginMask; // 0x80
		::System::Boolean _isInactiveCached; // 0xA0
		::Il2CppArray<::UnityEngine::Light*>* _lights; // 0xA8
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* _layeredEffectLights; // 0xB0
		::Il2CppArray<::UnityEngine::Renderer*>* _renderers; // 0xB8
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* _layeredEffectRenders; // 0xC0
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _particleSys; // 0xC8
		::MoleMole::EffectSimulate::NapEffectSimulatorMgr* _SimulatorMgr; // 0xD0
		::UnityEngine::Animation* _effectAnimation; // 0xD8
		::System::Boolean Field_5_35; // 0xE0
		::Il2CppArray<::UnityEngine::Animation*>* Field_5_34; // 0xE8
		::System::Boolean Field_5_33; // 0xF0
		::MoleMole::MonoEffectExtensionBehaviour* Field_5_32; // 0xF8
		::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* _effectLogicController; // 0x100
		::MoleMole::MonoEffectPluginAudio* _effectPluginAudio; // 0x108
		::MoleMole::MonoEffectPluginDither* _effectPluginDither; // 0x110
		::MoleMole::MonoEffectPluginFade* _effectPluginFade; // 0x118
		::MoleMole::MonoEffectPluginFollow* _effectPluginFollow; // 0x120
		::MoleMole::MonoEffectPluginDestroy* _effectPluginDestroy; // 0x128
		::MoleMole::MonoEffectPluginAttachPoint* _effectPluginAttachPoint; // 0x130
		::MoleMole::MonoEffectPluginScreenEffect* _effectPluginScreenEffect; // 0x138
		::MoleMole::MonoEffectPluginTransform* _effectPluginTransform; // 0x140
		::MoleMole::MonoEffectShape* _effectShape; // 0x148
		::MoleMole::Battle::XWeaponTrailCustom* _effectWeapontrail; // 0x150
		::MoleMole::MonoEffectPluginHitWall* _pluginHitWall; // 0x158
		::MoleMole::MonoEffectPluginHitWallScratch* _pluginHitWallScratch; // 0x160
		::MoleMole::MonoEffectPluginHitWallBullet* _pluginHitWallBullet; // 0x168
		::UnityEngine::PBDDeformer* _deformer; // 0x170
		::MoleMole::MonoEffectPluginGroundLighting* _effectPluginGroundLighting; // 0x178
		::MoleMole::MonoEffectSelfAttachPoint* _effectSelfAttachPoint; // 0x180
		::MoleMole::MonoEffectPluginLaserLineRenderers* _effectPluginLaserLineRenderers; // 0x188
		::MoleMole::MonoEffectPluginAttachToCamera* _effectPluginAttachToCamera; // 0x190
		::MoleMole::MonoEffectPluginClipPlane* _effectPluginClipPlane; // 0x198
		::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* _dynamicBoneParaSwitches; // 0x1A0
		::MoleMole::MonoEffectPluginFollowCamera* _effectPluginFollowCamera; // 0x1A8
		::MoleMole::MonoEffectPluginConstantScreenSize* _effectPluginConstantScreenSize; // 0x1B0
		::MoleMole::MonoEffectPluginSyncEntityPos* _effectPluginSyncEntityPos; // 0x1B8
		::MoleMole::MonoEffectPluginStateAnimation* _effectPluginStateAnimation; // 0x1C0
		::MoleMole::MonoEffect_Enum_3_F8BBB3B7E922E8A1 Field_5_62; // 0x1C8
		::Class_0_16E4307DCC419505_452* Field_5_61; // 0x1D0
		::System::Boolean Field_5_60; // 0x1D8
		::Il2CppArray<::UnityEngine::Material*>* Field_5_67; // 0x1E0
		::MoleMole::Battle::Entity* Field_5_66; // 0x1E8
		::Class_3_D6DA183EF60F02C8* Field_5_65; // 0x1F0
		::System::Boolean IsBehavioursCached; // 0x1F8
		::Il2CppArray<::UnityEngine::Renderer*>* _cacheRenderersToEnable; // 0x200
		::Il2CppArray<::UnityEngine::Behaviour*>* _cachedBehaviours; // 0x208
		::MoleMole::MonoEffectRuntimeDataCache RuntimeDataCache; // 0x210
		::Struct_2_9E75F47F2670B678 RenderersThatNeedTimeOffsetMaterial; // 0x288
		::UnityEngine::Vector3 Field_5_75; // 0x2C8
		::UnityEngine::Vector3 Field_5_74; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean get_NeedInactiveCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_NEEDINACTIVECACHED_OFFSET))(this);
		}

		::System::Boolean get_IsInactiveCompCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_ISINACTIVECOMPCACHED_OFFSET))(this);
		}

		::System::Boolean get_IsAllComponentsCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_ISALLCOMPONENTSCACHED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Light*>* get_Lights()
		{
			return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* get_LayeredEffectLights()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTLIGHTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_RENDERERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* get_LayeredEffectRenders()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTRENDERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem*>* get_ParticleSys()
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PARTICLESYS_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::NapEffectSimulatorMgr* get_SimulatorMgr()
		{
			return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_SIMULATORMGR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_EffectAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animation*>* get_EffectAnimations()
		{
			return ((::Il2CppArray<::UnityEngine::Animation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATIONS_OFFSET))(this);
		}

		::MoleMole::MonoEffectExtensionBehaviour* get_MonoEffectExtensionBehaviour()
		{
			return ((::MoleMole::MonoEffectExtensionBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_MONOEFFECTEXTENSIONBEHAVIOUR_OFFSET))(this);
		}

		::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* get_EffectLogicController()
		{
			return ((::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTLOGICCONTROLLER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAudio* get_EffectPluginAudio()
		{
			return ((::MoleMole::MonoEffectPluginAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINAUDIO_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginDither* get_EffectPluginDither()
		{
			return ((::MoleMole::MonoEffectPluginDither*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDITHER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFade* get_EffectPluginFade()
		{
			return ((::MoleMole::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFADE_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFollow* get_EffectPluginFollow()
		{
			return ((::MoleMole::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOW_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginDestroy* get_EffectPluginDestroy()
		{
			return ((::MoleMole::MonoEffectPluginDestroy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDESTROY_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAttachPoint* get_EffectPluginAttachPoint()
		{
			return ((::MoleMole::MonoEffectPluginAttachPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHPOINT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginScreenEffect* get_EffectPluginScreenEffect()
		{
			return ((::MoleMole::MonoEffectPluginScreenEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSCREENEFFECT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginTransform* get_EffectPluginTransform()
		{
			return ((::MoleMole::MonoEffectPluginTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINTRANSFORM_OFFSET))(this);
		}

		::MoleMole::MonoEffectShape* get_EffectShape()
		{
			return ((::MoleMole::MonoEffectShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTSHAPE_OFFSET))(this);
		}

		::MoleMole::Battle::XWeaponTrailCustom* get_EffectWeapontrail()
		{
			return ((::MoleMole::Battle::XWeaponTrailCustom*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTWEAPONTRAIL_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWall* get_PluginHitWall()
		{
			return ((::MoleMole::MonoEffectPluginHitWall*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALL_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWallScratch* get_PluginHitWallScratch()
		{
			return ((::MoleMole::MonoEffectPluginHitWallScratch*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLSCRATCH_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWallBullet* get_PluginHitWallBullet()
		{
			return ((::MoleMole::MonoEffectPluginHitWallBullet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLBULLET_OFFSET))(this);
		}

		::UnityEngine::PBDDeformer* get_PBDDeformer()
		{
			return ((::UnityEngine::PBDDeformer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PBDDEFORMER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginGroundLighting* get_EffectPluginGroundLighting()
		{
			return ((::MoleMole::MonoEffectPluginGroundLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINGROUNDLIGHTING_OFFSET))(this);
		}

		::MoleMole::MonoEffectSelfAttachPoint* get_EffectSelfAttachPoint()
		{
			return ((::MoleMole::MonoEffectSelfAttachPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTSELFATTACHPOINT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginLaserLineRenderers* get_EffectPluginLaserLineRenderers()
		{
			return ((::MoleMole::MonoEffectPluginLaserLineRenderers*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINLASERLINERENDERERS_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAttachToCamera* get_EffectPluginAttachToCamera()
		{
			return ((::MoleMole::MonoEffectPluginAttachToCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHTOCAMERA_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginClipPlane* get_EffectPluginClipPlane()
		{
			return ((::MoleMole::MonoEffectPluginClipPlane*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCLIPPLANE_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* get_DynamicBoneParaSwitches()
		{
			return ((::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_DYNAMICBONEPARASWITCHES_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFollowCamera* get_EffectPluginFollowCamera()
		{
			return ((::MoleMole::MonoEffectPluginFollowCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOWCAMERA_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginConstantScreenSize* get_EffectPluginConstantScreenSize()
		{
			return ((::MoleMole::MonoEffectPluginConstantScreenSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCONSTANTSCREENSIZE_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginSyncEntityPos* get_EffectPluginSyncEntityPos()
		{
			return ((::MoleMole::MonoEffectPluginSyncEntityPos*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSYNCENTITYPOS_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginStateAnimation* get_EffectPluginStateAnimation()
		{
			return ((::MoleMole::MonoEffectPluginStateAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSTATEANIMATION_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_452* get_PolygonBehavior()
		{
			return ((::Class_0_16E4307DCC419505_452*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_POLYGONBEHAVIOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* get_casterEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CASTERENTITY_OFFSET))(this);
		}

		::System::Void set_casterEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SET_CASTERENTITY_OFFSET))(this, a1);
		}

		::Class_3_D6DA183EF60F02C8* get_effectModelComponent()
		{
			return ((::Class_3_D6DA183EF60F02C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTMODELCOMPONENT_OFFSET))(this);
		}

		::System::Void set_effectModelComponent(::Class_3_D6DA183EF60F02C8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SET_EFFECTMODELCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetCachedMaterial(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GETCACHEDMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetSharedMaterial(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GETSHAREDMATERIAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_CachedRenderersToEnable()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CACHEDRENDERERSTOENABLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Behaviour*>* get_CachedBehaviours()
		{
			return ((::Il2CppArray<::UnityEngine::Behaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CACHEDBEHAVIOURS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalPosOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_FINALPOSOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalAngleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_FINALANGLEOFFSET_OFFSET))(this);
		}

		::System::Void SetAttach(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SETATTACH_OFFSET))(this, a1, a2);
		}

		::System::Void InitParticles(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_INITPARTICLES_OFFSET))(this, a1, a2);
		}

		::System::Void ClearParticleSystems(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_CLEARPARTICLESYSTEMS_OFFSET))(this, a1);
		}

		::System::Void ClearRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_CLEARRENDER_OFFSET))(this);
		}

		::System::Void ResetPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_RESETPLAYSTATE_OFFSET))(this);
		}

		::System::Void SetComponentsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SETCOMPONENTSACTIVE_OFFSET))(this, a1);
		}

		::System::Void DoCacheBehaviours()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_DOCACHEBEHAVIOURS_OFFSET))(this);
		}

		::System::Void UpdateCacheSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_UPDATECACHESERIALIZEDATA_OFFSET))(this);
		}

		::System::Void Method_5_C5E0D2AA3A5BB59B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_C5E0D2AA3A5BB59B_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_071850D2764E9D4C_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_4CD1124C71DEC91E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_4CD1124C71DEC91E_OFFSET))(this, a1);
		}

		::System::Void Method_5_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}
	};
}
