#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED5897DDCD2F7F22;
class Class_2_2987B890D0DF2670;
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_C49840971C7DFFA6_GET_BOUNDARYIMPACTELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1898BF50)
#define CLASS_2_C49840971C7DFFA6_GET_BOUNDARYIMPACTINWARDSIGN_OFFSET UNITYSDK_OFFSET(0x1898BF70)
#define CLASS_2_C49840971C7DFFA6_GET_CACHEDNORMALSPEED_OFFSET UNITYSDK_OFFSET(0x1898BF90)
#define CLASS_2_C49840971C7DFFA6_GET_CURRENTPARAMS_OFFSET UNITYSDK_OFFSET(0x1898BE90)
#define CLASS_2_C49840971C7DFFA6_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1898BE70)
#define CLASS_2_C49840971C7DFFA6_GET_EXITELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1898C010)
#define CLASS_2_C49840971C7DFFA6_GET_EXITSTARTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1898C050)
#define CLASS_2_C49840971C7DFFA6_GET_EXITSTARTSPEED_OFFSET UNITYSDK_OFFSET(0x1898C030)
#define CLASS_2_C49840971C7DFFA6_GET_HASTRIGGEREDIMPACTWINDOW_OFFSET UNITYSDK_OFFSET(0x1898BD20)
#define CLASS_2_C49840971C7DFFA6_GET_HOMINGACCUMULATEDANGLE_OFFSET UNITYSDK_OFFSET(0x1898BFB0)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURDURATION_OFFSET UNITYSDK_OFFSET(0x1898BCA0)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURFEATHER_OFFSET UNITYSDK_OFFSET(0x1898BC80)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1898BC40)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURSTART_OFFSET UNITYSDK_OFFSET(0x1898BC60)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1898BBC0)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x1898BBE0)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1898BC00)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x1898BC20)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVDELTA_OFFSET UNITYSDK_OFFSET(0x1898BB80)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVDURATION_OFFSET UNITYSDK_OFFSET(0x1898BBA0)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTMODIFIERTOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BB40)
#define CLASS_2_C49840971C7DFFA6_GET_IMPACTTRIGGERMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1898BCC0)
#define CLASS_2_C49840971C7DFFA6_GET_ISEXITSTARTCACHED_OFFSET UNITYSDK_OFFSET(0x1898BFF0)
#define CLASS_2_C49840971C7DFFA6_GET_ISHITTARGET_OFFSET UNITYSDK_OFFSET(0x1898BFD0)
#define CLASS_2_C49840971C7DFFA6_GET_ISIMPACTBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1898BF30)
#define CLASS_2_C49840971C7DFFA6_GET_ISTRIGGEREDBYIMPACTWINDOW_OFFSET UNITYSDK_OFFSET(0x1898BD00)
#define CLASS_2_C49840971C7DFFA6_GET_LV2TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD40)
#define CLASS_2_C49840971C7DFFA6_GET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD60)
#define CLASS_2_C49840971C7DFFA6_GET_LV3VISUALTOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD80)
#define CLASS_2_C49840971C7DFFA6_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1898BB20)
#define CLASS_2_C49840971C7DFFA6_GET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x1898BB00)
#define CLASS_2_C49840971C7DFFA6_GET_SELFIMPACTSPEEDMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1898BB60)
#define CLASS_2_C49840971C7DFFA6_GET_SLAMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1898BED0)
#define CLASS_2_C49840971C7DFFA6_GET_TARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x1898BEB0)
#define CLASS_2_C49840971C7DFFA6_GET_TARGETSPEEDCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1898BDE0)
#define CLASS_2_C49840971C7DFFA6_GET_TARGETYAWOFFSET_OFFSET UNITYSDK_OFFSET(0x1898BF10)
#define CLASS_2_C49840971C7DFFA6_GET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0x1898BCE0)
#define CLASS_2_C49840971C7DFFA6_GET_USEENHANCEIMPACTSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1898BE50)
#define CLASS_2_C49840971C7DFFA6_GET_USEENHANCEIMPACT_OFFSET UNITYSDK_OFFSET(0x1898BDC0)
#define CLASS_2_C49840971C7DFFA6_GET_USELV3VISUAL_OFFSET UNITYSDK_OFFSET(0x1898BDA0)
#define CLASS_2_C49840971C7DFFA6_METHOD_2_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x1898BE00)
#define CLASS_2_C49840971C7DFFA6_SET_BOUNDARYIMPACTELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1898BF60)
#define CLASS_2_C49840971C7DFFA6_SET_BOUNDARYIMPACTINWARDSIGN_OFFSET UNITYSDK_OFFSET(0x1898BF80)
#define CLASS_2_C49840971C7DFFA6_SET_CACHEDNORMALSPEED_OFFSET UNITYSDK_OFFSET(0x1898BFA0)
#define CLASS_2_C49840971C7DFFA6_SET_CURRENTPARAMS_OFFSET UNITYSDK_OFFSET(0x1898BEA0)
#define CLASS_2_C49840971C7DFFA6_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1898BE80)
#define CLASS_2_C49840971C7DFFA6_SET_EXITELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1898C020)
#define CLASS_2_C49840971C7DFFA6_SET_EXITSTARTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1898C070)
#define CLASS_2_C49840971C7DFFA6_SET_EXITSTARTSPEED_OFFSET UNITYSDK_OFFSET(0x1898C040)
#define CLASS_2_C49840971C7DFFA6_SET_HASTRIGGEREDIMPACTWINDOW_OFFSET UNITYSDK_OFFSET(0x1898BD30)
#define CLASS_2_C49840971C7DFFA6_SET_HOMINGACCUMULATEDANGLE_OFFSET UNITYSDK_OFFSET(0x1898BFC0)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURDURATION_OFFSET UNITYSDK_OFFSET(0x1898BCB0)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURFEATHER_OFFSET UNITYSDK_OFFSET(0x1898BC90)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1898BC50)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURSTART_OFFSET UNITYSDK_OFFSET(0x1898BC70)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1898BBD0)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x1898BBF0)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1898BC10)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x1898BC30)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVDELTA_OFFSET UNITYSDK_OFFSET(0x1898BB90)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVDURATION_OFFSET UNITYSDK_OFFSET(0x1898BBB0)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTMODIFIERTOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BB50)
#define CLASS_2_C49840971C7DFFA6_SET_IMPACTTRIGGERMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1898BCD0)
#define CLASS_2_C49840971C7DFFA6_SET_ISEXITSTARTCACHED_OFFSET UNITYSDK_OFFSET(0x1898C000)
#define CLASS_2_C49840971C7DFFA6_SET_ISHITTARGET_OFFSET UNITYSDK_OFFSET(0x1898BFE0)
#define CLASS_2_C49840971C7DFFA6_SET_ISIMPACTBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1898BF40)
#define CLASS_2_C49840971C7DFFA6_SET_ISTRIGGEREDBYIMPACTWINDOW_OFFSET UNITYSDK_OFFSET(0x1898BD10)
#define CLASS_2_C49840971C7DFFA6_SET_LV2TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD50)
#define CLASS_2_C49840971C7DFFA6_SET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD70)
#define CLASS_2_C49840971C7DFFA6_SET_LV3VISUALTOGGLENAME_OFFSET UNITYSDK_OFFSET(0x1898BD90)
#define CLASS_2_C49840971C7DFFA6_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1898BB30)
#define CLASS_2_C49840971C7DFFA6_SET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x1898BB10)
#define CLASS_2_C49840971C7DFFA6_SET_SELFIMPACTSPEEDMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1898BB70)
#define CLASS_2_C49840971C7DFFA6_SET_SLAMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1898BEF0)
#define CLASS_2_C49840971C7DFFA6_SET_TARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x1898BEC0)
#define CLASS_2_C49840971C7DFFA6_SET_TARGETSPEEDCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1898BDF0)
#define CLASS_2_C49840971C7DFFA6_SET_TARGETYAWOFFSET_OFFSET UNITYSDK_OFFSET(0x1898BF20)
#define CLASS_2_C49840971C7DFFA6_SET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0x1898BCF0)
#define CLASS_2_C49840971C7DFFA6_SET_USEENHANCEIMPACTSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1898BE60)
#define CLASS_2_C49840971C7DFFA6_SET_USEENHANCEIMPACT_OFFSET UNITYSDK_OFFSET(0x1898BDD0)
#define CLASS_2_C49840971C7DFFA6_SET_USELV3VISUAL_OFFSET UNITYSDK_OFFSET(0x1898BDB0)
#define CLASS_2_C49840971C7DFFA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1898C090)

inline static constexpr unsigned int Class_2_C49840971C7DFFA6_TypeDefinitionIndex = 75418;

class Class_2_C49840971C7DFFA6 : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_2987B890D0DF2670*>
{
public:
	// static const ::System::Int32 EJBHNIJHPKP = 0x1869F; // 0x0
	::UnityEngine::AnimationCurve* _ImpactFOVBlendInCurve_k__BackingField; // 0x18
	::System::String* _LV2ToggleName_k__BackingField; // 0x20
	::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* _SelfImpactSpeedModifiers_k__BackingField; // 0x28
	::System::String* _LV3VisualToggleName_k__BackingField; // 0x30
	::Class_1_ED5897DDCD2F7F22* _CurrentParams_k__BackingField; // 0x38
	::System::String* _TaskUnlock_k__BackingField; // 0x40
	::UnityEngine::AnimationCurve* _ImpactFOVBlendOutCurve_k__BackingField; // 0x48
	::Class_1_ED5897DDCD2F7F22* _Params_k__BackingField; // 0x50
	::System::String* _ImpactModifierToggleName_k__BackingField; // 0x58
	::System::String* _LV3ToggleName_k__BackingField; // 0x60
	::System::String* _ImpactTriggerModifierName_k__BackingField; // 0x68
	::System::Single _CurrentTime_k__BackingField; // 0x70
	::System::Single _BoundaryImpactElapsedTime_k__BackingField; // 0x74
	::System::Single _CachedNormalSpeed_k__BackingField; // 0x78
	::System::Single _TargetSpeedClampValue_k__BackingField; // 0x7C
	::System::Single _HomingAccumulatedAngle_k__BackingField; // 0x80
	::System::Single _BoundaryImpactInwardSign_k__BackingField; // 0x84
	::System::Single _ImpactBlurDuration_k__BackingField; // 0x88
	::System::Int32 _TargetEntityID_k__BackingField; // 0x8C
	::System::Single _ExitElapsedTime_k__BackingField; // 0x90
	::System::Boolean _IsHitTarget_k__BackingField; // 0x94
	::System::Boolean _IsImpactBoundary_k__BackingField; // 0x95
	::System::Boolean _UseLv3Visual_k__BackingField; // 0x96
	::System::Boolean _IsTriggeredByImpactWindow_k__BackingField; // 0x97
	::System::Single _ImpactFOVDuration_k__BackingField; // 0x98
	::System::Single _ImpactBlurFeather_k__BackingField; // 0x9C
	::System::Single _ImpactBlurStart_k__BackingField; // 0xA0
	::System::Single _ImpactFOVBlendInTime_k__BackingField; // 0xA4
	::UnityEngine::Vector3 _ExitStartDirection_k__BackingField; // 0xA8
	::System::Single _TargetYawOffset_k__BackingField; // 0xB4
	::System::Single _ImpactFOVDelta_k__BackingField; // 0xB8
	::System::Single _ImpactBlurRadius_k__BackingField; // 0xBC
	::System::Boolean _IsExitStartCached_k__BackingField; // 0xC0
	::System::Boolean _UseEnhanceImpact_k__BackingField; // 0xC1
	::System::Boolean _UseEnhanceImpactSpeedModifier_k__BackingField; // 0xC2
	::System::Boolean _HasTriggeredImpactWindow_k__BackingField; // 0xC3
	::System::Single _ExitStartSpeed_k__BackingField; // 0xC4
	::System::Single _RequiredCastTime_k__BackingField; // 0xC8
	::UnityEngine::Vector3 _SlamDirection_k__BackingField; // 0xCC
	::System::Single _ImpactFOVBlendOutTime_k__BackingField; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6__CTOR_OFFSET))(this);
	}

	::System::Single get_RequiredCastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_REQUIREDCASTTIME_OFFSET))(this);
	}

	::System::Void set_RequiredCastTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_REQUIREDCASTTIME_OFFSET))(this, a1);
	}

	::Class_1_ED5897DDCD2F7F22* get_Params()
	{
		return ((::Class_1_ED5897DDCD2F7F22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_PARAMS_OFFSET))(this);
	}

	::System::Void set_Params(::Class_1_ED5897DDCD2F7F22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED5897DDCD2F7F22*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_PARAMS_OFFSET))(this, a1);
	}

	::System::String* get_ImpactModifierToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTMODIFIERTOGGLENAME_OFFSET))(this);
	}

	::System::Void set_ImpactModifierToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTMODIFIERTOGGLENAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* get_SelfImpactSpeedModifiers()
	{
		return ((::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_SELFIMPACTSPEEDMODIFIERS_OFFSET))(this);
	}

	::System::Void set_SelfImpactSpeedModifiers(::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_SELFIMPACTSPEEDMODIFIERS_OFFSET))(this, a1);
	}

	::System::Single get_ImpactFOVDelta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVDELTA_OFFSET))(this);
	}

	::System::Void set_ImpactFOVDelta(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVDELTA_OFFSET))(this, a1);
	}

	::System::Single get_ImpactFOVDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVDURATION_OFFSET))(this);
	}

	::System::Void set_ImpactFOVDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVDURATION_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_ImpactFOVBlendInCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDINCURVE_OFFSET))(this);
	}

	::System::Void set_ImpactFOVBlendInCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDINCURVE_OFFSET))(this, a1);
	}

	::System::Single get_ImpactFOVBlendInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDINTIME_OFFSET))(this);
	}

	::System::Void set_ImpactFOVBlendInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDINTIME_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_ImpactFOVBlendOutCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDOUTCURVE_OFFSET))(this);
	}

	::System::Void set_ImpactFOVBlendOutCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDOUTCURVE_OFFSET))(this, a1);
	}

	::System::Single get_ImpactFOVBlendOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTFOVBLENDOUTTIME_OFFSET))(this);
	}

	::System::Void set_ImpactFOVBlendOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTFOVBLENDOUTTIME_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBlurRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURRADIUS_OFFSET))(this);
	}

	::System::Void set_ImpactBlurRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURRADIUS_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBlurStart()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURSTART_OFFSET))(this);
	}

	::System::Void set_ImpactBlurStart(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURSTART_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBlurFeather()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURFEATHER_OFFSET))(this);
	}

	::System::Void set_ImpactBlurFeather(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURFEATHER_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBlurDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTBLURDURATION_OFFSET))(this);
	}

	::System::Void set_ImpactBlurDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTBLURDURATION_OFFSET))(this, a1);
	}

	::System::String* get_ImpactTriggerModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_IMPACTTRIGGERMODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ImpactTriggerModifierName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_IMPACTTRIGGERMODIFIERNAME_OFFSET))(this, a1);
	}

	::System::String* get_TaskUnlock()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_TASKUNLOCK_OFFSET))(this);
	}

	::System::Void set_TaskUnlock(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_TASKUNLOCK_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTriggeredByImpactWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_ISTRIGGEREDBYIMPACTWINDOW_OFFSET))(this);
	}

	::System::Void set_IsTriggeredByImpactWindow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_ISTRIGGEREDBYIMPACTWINDOW_OFFSET))(this, a1);
	}

	::System::Boolean get_HasTriggeredImpactWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_HASTRIGGEREDIMPACTWINDOW_OFFSET))(this);
	}

	::System::Void set_HasTriggeredImpactWindow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_HASTRIGGEREDIMPACTWINDOW_OFFSET))(this, a1);
	}

	::System::String* get_LV2ToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_LV2TOGGLENAME_OFFSET))(this);
	}

	::System::Void set_LV2ToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_LV2TOGGLENAME_OFFSET))(this, a1);
	}

	::System::String* get_LV3ToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_LV3TOGGLENAME_OFFSET))(this);
	}

	::System::Void set_LV3ToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_LV3TOGGLENAME_OFFSET))(this, a1);
	}

	::System::String* get_LV3VisualToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_LV3VISUALTOGGLENAME_OFFSET))(this);
	}

	::System::Void set_LV3VisualToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_LV3VISUALTOGGLENAME_OFFSET))(this, a1);
	}

	::System::Boolean get_UseLv3Visual()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_USELV3VISUAL_OFFSET))(this);
	}

	::System::Void set_UseLv3Visual(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_USELV3VISUAL_OFFSET))(this, a1);
	}

	::System::Boolean get_UseEnhanceImpact()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_USEENHANCEIMPACT_OFFSET))(this);
	}

	::System::Void set_UseEnhanceImpact(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_USEENHANCEIMPACT_OFFSET))(this, a1);
	}

	::System::Single get_TargetSpeedClampValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_TARGETSPEEDCLAMPVALUE_OFFSET))(this);
	}

	::System::Void set_TargetSpeedClampValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_TARGETSPEEDCLAMPVALUE_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_METHOD_2_E6184566299DAB0F_OFFSET))(a1);
	}

	::System::Boolean get_UseEnhanceImpactSpeedModifier()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_USEENHANCEIMPACTSPEEDMODIFIER_OFFSET))(this);
	}

	::System::Void set_UseEnhanceImpactSpeedModifier(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_USEENHANCEIMPACTSPEEDMODIFIER_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::Class_1_ED5897DDCD2F7F22* get_CurrentParams()
	{
		return ((::Class_1_ED5897DDCD2F7F22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_CURRENTPARAMS_OFFSET))(this);
	}

	::System::Void set_CurrentParams(::Class_1_ED5897DDCD2F7F22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED5897DDCD2F7F22*))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_CURRENTPARAMS_OFFSET))(this, a1);
	}

	::System::Int32 get_TargetEntityID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_TARGETENTITYID_OFFSET))(this);
	}

	::System::Void set_TargetEntityID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_TARGETENTITYID_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_SlamDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_SLAMDIRECTION_OFFSET))(this);
	}

	::System::Void set_SlamDirection(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_SLAMDIRECTION_OFFSET))(this, a1);
	}

	::System::Single get_TargetYawOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_TARGETYAWOFFSET_OFFSET))(this);
	}

	::System::Void set_TargetYawOffset(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_TARGETYAWOFFSET_OFFSET))(this, a1);
	}

	::System::Boolean get_IsImpactBoundary()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_ISIMPACTBOUNDARY_OFFSET))(this);
	}

	::System::Void set_IsImpactBoundary(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_ISIMPACTBOUNDARY_OFFSET))(this, a1);
	}

	::System::Single get_BoundaryImpactElapsedTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_BOUNDARYIMPACTELAPSEDTIME_OFFSET))(this);
	}

	::System::Void set_BoundaryImpactElapsedTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_BOUNDARYIMPACTELAPSEDTIME_OFFSET))(this, a1);
	}

	::System::Single get_BoundaryImpactInwardSign()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_BOUNDARYIMPACTINWARDSIGN_OFFSET))(this);
	}

	::System::Void set_BoundaryImpactInwardSign(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_BOUNDARYIMPACTINWARDSIGN_OFFSET))(this, a1);
	}

	::System::Single get_CachedNormalSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_CACHEDNORMALSPEED_OFFSET))(this);
	}

	::System::Void set_CachedNormalSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_CACHEDNORMALSPEED_OFFSET))(this, a1);
	}

	::System::Single get_HomingAccumulatedAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_HOMINGACCUMULATEDANGLE_OFFSET))(this);
	}

	::System::Void set_HomingAccumulatedAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_HOMINGACCUMULATEDANGLE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsHitTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_ISHITTARGET_OFFSET))(this);
	}

	::System::Void set_IsHitTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_ISHITTARGET_OFFSET))(this, a1);
	}

	::System::Boolean get_IsExitStartCached()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_ISEXITSTARTCACHED_OFFSET))(this);
	}

	::System::Void set_IsExitStartCached(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_ISEXITSTARTCACHED_OFFSET))(this, a1);
	}

	::System::Single get_ExitElapsedTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_EXITELAPSEDTIME_OFFSET))(this);
	}

	::System::Void set_ExitElapsedTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_EXITELAPSEDTIME_OFFSET))(this, a1);
	}

	::System::Single get_ExitStartSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_EXITSTARTSPEED_OFFSET))(this);
	}

	::System::Void set_ExitStartSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_EXITSTARTSPEED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ExitStartDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_GET_EXITSTARTDIRECTION_OFFSET))(this);
	}

	::System::Void set_ExitStartDirection(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C49840971C7DFFA6_SET_EXITSTARTDIRECTION_OFFSET))(this, a1);
	}
};
