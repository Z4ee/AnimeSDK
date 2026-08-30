#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_94E388FB15C6EFAA;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_507341E10C1B5E3E_GET_CHARGEBASERATE_OFFSET UNITYSDK_OFFSET(0x16436800)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGECURVATUREEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436900)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGECURVATUREEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x164368E0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGELEVEL_OFFSET UNITYSDK_OFFSET(0x164367E0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMAXCURVATURE_OFFSET UNITYSDK_OFFSET(0x164368C0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMAXSPEED_OFFSET UNITYSDK_OFFSET(0x16436840)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMINCURVATURE_OFFSET UNITYSDK_OFFSET(0x164368A0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMINSPEED_OFFSET UNITYSDK_OFFSET(0x16436820)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGESPEEDEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436880)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGESPEEDEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436860)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEBASERATE_OFFSET UNITYSDK_OFFSET(0x16436920)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATECURVATUREEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436A20)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATECURVATUREEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436A00)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMAXCURVATURE_OFFSET UNITYSDK_OFFSET(0x164369E0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMAXSPEED_OFFSET UNITYSDK_OFFSET(0x16436960)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMINCURVATURE_OFFSET UNITYSDK_OFFSET(0x164369C0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMINSPEED_OFFSET UNITYSDK_OFFSET(0x16436940)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATESPEEDEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x164369A0)
#define CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATESPEEDEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436980)
#define CLASS_2_507341E10C1B5E3E_GET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x16436B20)
#define CLASS_2_507341E10C1B5E3E_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x16436AE0)
#define CLASS_2_507341E10C1B5E3E_GET_ENTRYSPEED_OFFSET UNITYSDK_OFFSET(0x164366A0)
#define CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYLOSSCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x16436A80)
#define CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYLOSSNEXTTIME_OFFSET UNITYSDK_OFFSET(0x16436AA0)
#define CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYVALUELOSS_OFFSET UNITYSDK_OFFSET(0x16436A60)
#define CLASS_2_507341E10C1B5E3E_GET_LASTIMPACTBOUNDARYFRAMEONCHARGESTART_OFFSET UNITYSDK_OFFSET(0x16436AC0)
#define CLASS_2_507341E10C1B5E3E_GET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x16436B00)
#define CLASS_2_507341E10C1B5E3E_GET_OVERRIDEXDAMPING_OFFSET UNITYSDK_OFFSET(0x16436A40)
#define CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNANGLE_OFFSET UNITYSDK_OFFSET(0x164366E0)
#define CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNCURVE_OFFSET UNITYSDK_OFFSET(0x164366C0)
#define CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNDURATION_OFFSET UNITYSDK_OFFSET(0x16436700)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONCURVE_OFFSET UNITYSDK_OFFSET(0x164365C0)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONDURATION_OFFSET UNITYSDK_OFFSET(0x164365E0)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONMINVALUE_OFFSET UNITYSDK_OFFSET(0x16436620)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGCURVE_OFFSET UNITYSDK_OFFSET(0x16436640)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGMAX_OFFSET UNITYSDK_OFFSET(0x16436680)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGMIN_OFFSET UNITYSDK_OFFSET(0x16436660)
#define CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONVALUE_OFFSET UNITYSDK_OFFSET(0x16436600)
#define CLASS_2_507341E10C1B5E3E_GET_TURNCURRENTANGLE_OFFSET UNITYSDK_OFFSET(0x164367C0)
#define CLASS_2_507341E10C1B5E3E_GET_TURNROTATION_OFFSET UNITYSDK_OFFSET(0x16436760)
#define CLASS_2_507341E10C1B5E3E_GET_TURNSIGNDETECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x16436720)
#define CLASS_2_507341E10C1B5E3E_GET_TURNSIGN_OFFSET UNITYSDK_OFFSET(0x16436740)
#define CLASS_2_507341E10C1B5E3E_GET_TURNSTARTANGLE_OFFSET UNITYSDK_OFFSET(0x164367A0)
#define CLASS_2_507341E10C1B5E3E_GET_TURNTIME_OFFSET UNITYSDK_OFFSET(0x16436780)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGEBASERATE_OFFSET UNITYSDK_OFFSET(0x16436810)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGECURVATUREEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436910)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGECURVATUREEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x164368F0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGELEVEL_OFFSET UNITYSDK_OFFSET(0x164367F0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMAXCURVATURE_OFFSET UNITYSDK_OFFSET(0x164368D0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMAXSPEED_OFFSET UNITYSDK_OFFSET(0x16436850)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMINCURVATURE_OFFSET UNITYSDK_OFFSET(0x164368B0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMINSPEED_OFFSET UNITYSDK_OFFSET(0x16436830)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGESPEEDEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436890)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGESPEEDEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436870)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEBASERATE_OFFSET UNITYSDK_OFFSET(0x16436930)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATECURVATUREEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x16436A30)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATECURVATUREEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436A10)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMAXCURVATURE_OFFSET UNITYSDK_OFFSET(0x164369F0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMAXSPEED_OFFSET UNITYSDK_OFFSET(0x16436970)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMINCURVATURE_OFFSET UNITYSDK_OFFSET(0x164369D0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMINSPEED_OFFSET UNITYSDK_OFFSET(0x16436950)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATESPEEDEFFECTMAXRATE_OFFSET UNITYSDK_OFFSET(0x164369B0)
#define CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATESPEEDEFFECTMINRATE_OFFSET UNITYSDK_OFFSET(0x16436990)
#define CLASS_2_507341E10C1B5E3E_SET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x16436B30)
#define CLASS_2_507341E10C1B5E3E_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x16436AF0)
#define CLASS_2_507341E10C1B5E3E_SET_ENTRYSPEED_OFFSET UNITYSDK_OFFSET(0x164366B0)
#define CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYLOSSCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x16436A90)
#define CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYLOSSNEXTTIME_OFFSET UNITYSDK_OFFSET(0x16436AB0)
#define CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYVALUELOSS_OFFSET UNITYSDK_OFFSET(0x16436A70)
#define CLASS_2_507341E10C1B5E3E_SET_LASTIMPACTBOUNDARYFRAMEONCHARGESTART_OFFSET UNITYSDK_OFFSET(0x16436AD0)
#define CLASS_2_507341E10C1B5E3E_SET_LASTTIME_OFFSET UNITYSDK_OFFSET(0x16436B10)
#define CLASS_2_507341E10C1B5E3E_SET_OVERRIDEXDAMPING_OFFSET UNITYSDK_OFFSET(0x16436A50)
#define CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNANGLE_OFFSET UNITYSDK_OFFSET(0x164366F0)
#define CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNCURVE_OFFSET UNITYSDK_OFFSET(0x164366D0)
#define CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNDURATION_OFFSET UNITYSDK_OFFSET(0x16436710)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONCURVE_OFFSET UNITYSDK_OFFSET(0x164365D0)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONDURATION_OFFSET UNITYSDK_OFFSET(0x164365F0)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONMINVALUE_OFFSET UNITYSDK_OFFSET(0x16436630)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGCURVE_OFFSET UNITYSDK_OFFSET(0x16436650)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGMAX_OFFSET UNITYSDK_OFFSET(0x16436690)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGMIN_OFFSET UNITYSDK_OFFSET(0x16436670)
#define CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONVALUE_OFFSET UNITYSDK_OFFSET(0x16436610)
#define CLASS_2_507341E10C1B5E3E_SET_TURNCURRENTANGLE_OFFSET UNITYSDK_OFFSET(0x164367D0)
#define CLASS_2_507341E10C1B5E3E_SET_TURNROTATION_OFFSET UNITYSDK_OFFSET(0x16436770)
#define CLASS_2_507341E10C1B5E3E_SET_TURNSIGNDETECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x16436730)
#define CLASS_2_507341E10C1B5E3E_SET_TURNSIGN_OFFSET UNITYSDK_OFFSET(0x16436750)
#define CLASS_2_507341E10C1B5E3E_SET_TURNSTARTANGLE_OFFSET UNITYSDK_OFFSET(0x164367B0)
#define CLASS_2_507341E10C1B5E3E_SET_TURNTIME_OFFSET UNITYSDK_OFFSET(0x16436790)
#define CLASS_2_507341E10C1B5E3E__CTOR_OFFSET UNITYSDK_OFFSET(0x16436B40)

inline static constexpr unsigned int Class_2_507341E10C1B5E3E_TypeDefinitionIndex = 75405;

class Class_2_507341E10C1B5E3E : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_94E388FB15C6EFAA*>
{
public:
	::UnityEngine::AnimationCurve* _RotationTurnCurve_k__BackingField; // 0x18
	::UnityEngine::AnimationCurve* _SpeedDecelerationCurve_k__BackingField; // 0x20
	::UnityEngine::AnimationCurve* _SpeedDecelerationSpeedMappingCurve_k__BackingField; // 0x28
	::System::Single _ChargeToUltimateCurvatureEffectMaxRate_k__BackingField; // 0x30
	::System::Single _ChargeRequireMinCurvature_k__BackingField; // 0x34
	::System::Single _TurnSign_k__BackingField; // 0x38
	::System::Single _ChargeRequireMaxSpeed_k__BackingField; // 0x3C
	::System::Single _EntrySpeed_k__BackingField; // 0x40
	::System::UInt32 _ChargeLevel_k__BackingField; // 0x44
	::System::Single _ChargeCurvatureEffectMaxRate_k__BackingField; // 0x48
	::System::Single _RotationTurnDuration_k__BackingField; // 0x4C
	::System::Single _ChargeBaseRate_k__BackingField; // 0x50
	::System::Single _RotationTurnAngle_k__BackingField; // 0x54
	::System::Single _SpeedDecelerationSpeedMappingMax_k__BackingField; // 0x58
	::System::Single _SpeedDecelerationSpeedMappingMin_k__BackingField; // 0x5C
	::System::Single _TurnSignDetectDistance_k__BackingField; // 0x60
	::System::Single _ImpactBoundaryLossCooldown_k__BackingField; // 0x64
	::System::Single _SpeedDecelerationValue_k__BackingField; // 0x68
	::System::Single _ChargeCurvatureEffectMinRate_k__BackingField; // 0x6C
	::System::Single _ChargeSpeedEffectMaxRate_k__BackingField; // 0x70
	::System::Single _SpeedDecelerationDuration_k__BackingField; // 0x74
	::System::Single _ChargeToUltimateSpeedEffectMinRate_k__BackingField; // 0x78
	::System::Single _ChargeToUltimateRequireMinCurvature_k__BackingField; // 0x7C
	::System::Single _SpeedDecelerationMinValue_k__BackingField; // 0x80
	::System::Single _TurnTime_k__BackingField; // 0x84
	::System::Single _ChargeToUltimateSpeedEffectMaxRate_k__BackingField; // 0x88
	::System::Single _ChargeToUltimateBaseRate_k__BackingField; // 0x8C
	::System::Single _OverrideXDamping_k__BackingField; // 0x90
	::UnityEngine::Quaternion _TurnRotation_k__BackingField; // 0x94
	::System::Single _ImpactBoundaryValueLoss_k__BackingField; // 0xA4
	::System::Single _ImpactBoundaryLossNextTime_k__BackingField; // 0xA8
	::System::Single _ChargeToUltimateRequireMaxCurvature_k__BackingField; // 0xAC
	::System::Single _ChargeRequireMinSpeed_k__BackingField; // 0xB0
	::System::Single _ChargeSpeedEffectMinRate_k__BackingField; // 0xB4
	::System::Single _ChargeToUltimateCurvatureEffectMinRate_k__BackingField; // 0xB8
	::System::Single _ChargeToUltimateRequireMinSpeed_k__BackingField; // 0xBC
	::System::Int32 _LastImpactBoundaryFrameOnChargeStart_k__BackingField; // 0xC0
	::System::Single _TurnStartAngle_k__BackingField; // 0xC4
	::System::Single _ChargeToUltimateRequireMaxSpeed_k__BackingField; // 0xC8
	::System::Single _CurrentChargeValue_k__BackingField; // 0xCC
	::System::Single _TurnCurrentAngle_k__BackingField; // 0xD0
	::System::Single _LastTime_k__BackingField; // 0xD4
	::System::Single _CurrentTime_k__BackingField; // 0xD8
	::System::Single _ChargeRequireMaxCurvature_k__BackingField; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E__CTOR_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* get_SpeedDecelerationCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONCURVE_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONCURVE_OFFSET))(this, a1);
	}

	::System::Single get_SpeedDecelerationDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONDURATION_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONDURATION_OFFSET))(this, a1);
	}

	::System::Single get_SpeedDecelerationValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONVALUE_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONVALUE_OFFSET))(this, a1);
	}

	::System::Single get_SpeedDecelerationMinValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONMINVALUE_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationMinValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONMINVALUE_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_SpeedDecelerationSpeedMappingCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGCURVE_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationSpeedMappingCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGCURVE_OFFSET))(this, a1);
	}

	::System::Single get_SpeedDecelerationSpeedMappingMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGMIN_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationSpeedMappingMin(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGMIN_OFFSET))(this, a1);
	}

	::System::Single get_SpeedDecelerationSpeedMappingMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_SPEEDDECELERATIONSPEEDMAPPINGMAX_OFFSET))(this);
	}

	::System::Void set_SpeedDecelerationSpeedMappingMax(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_SPEEDDECELERATIONSPEEDMAPPINGMAX_OFFSET))(this, a1);
	}

	::System::Single get_EntrySpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_ENTRYSPEED_OFFSET))(this);
	}

	::System::Void set_EntrySpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_ENTRYSPEED_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_RotationTurnCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNCURVE_OFFSET))(this);
	}

	::System::Void set_RotationTurnCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNCURVE_OFFSET))(this, a1);
	}

	::System::Single get_RotationTurnAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNANGLE_OFFSET))(this);
	}

	::System::Void set_RotationTurnAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNANGLE_OFFSET))(this, a1);
	}

	::System::Single get_RotationTurnDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_ROTATIONTURNDURATION_OFFSET))(this);
	}

	::System::Void set_RotationTurnDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_ROTATIONTURNDURATION_OFFSET))(this, a1);
	}

	::System::Single get_TurnSignDetectDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNSIGNDETECTDISTANCE_OFFSET))(this);
	}

	::System::Void set_TurnSignDetectDistance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNSIGNDETECTDISTANCE_OFFSET))(this, a1);
	}

	::System::Single get_TurnSign()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNSIGN_OFFSET))(this);
	}

	::System::Void set_TurnSign(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNSIGN_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_TurnRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNROTATION_OFFSET))(this);
	}

	::System::Void set_TurnRotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNROTATION_OFFSET))(this, a1);
	}

	::System::Single get_TurnTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNTIME_OFFSET))(this);
	}

	::System::Void set_TurnTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNTIME_OFFSET))(this, a1);
	}

	::System::Single get_TurnStartAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNSTARTANGLE_OFFSET))(this);
	}

	::System::Void set_TurnStartAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNSTARTANGLE_OFFSET))(this, a1);
	}

	::System::Single get_TurnCurrentAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_TURNCURRENTANGLE_OFFSET))(this);
	}

	::System::Void set_TurnCurrentAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_TURNCURRENTANGLE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ChargeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGELEVEL_OFFSET))(this);
	}

	::System::Void set_ChargeLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGELEVEL_OFFSET))(this, a1);
	}

	::System::Single get_ChargeBaseRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGEBASERATE_OFFSET))(this);
	}

	::System::Void set_ChargeBaseRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGEBASERATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeRequireMinSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMINSPEED_OFFSET))(this);
	}

	::System::Void set_ChargeRequireMinSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMINSPEED_OFFSET))(this, a1);
	}

	::System::Single get_ChargeRequireMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMAXSPEED_OFFSET))(this);
	}

	::System::Void set_ChargeRequireMaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMAXSPEED_OFFSET))(this, a1);
	}

	::System::Single get_ChargeSpeedEffectMinRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGESPEEDEFFECTMINRATE_OFFSET))(this);
	}

	::System::Void set_ChargeSpeedEffectMinRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGESPEEDEFFECTMINRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeSpeedEffectMaxRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGESPEEDEFFECTMAXRATE_OFFSET))(this);
	}

	::System::Void set_ChargeSpeedEffectMaxRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGESPEEDEFFECTMAXRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeRequireMinCurvature()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMINCURVATURE_OFFSET))(this);
	}

	::System::Void set_ChargeRequireMinCurvature(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMINCURVATURE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeRequireMaxCurvature()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGEREQUIREMAXCURVATURE_OFFSET))(this);
	}

	::System::Void set_ChargeRequireMaxCurvature(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGEREQUIREMAXCURVATURE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeCurvatureEffectMinRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGECURVATUREEFFECTMINRATE_OFFSET))(this);
	}

	::System::Void set_ChargeCurvatureEffectMinRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGECURVATUREEFFECTMINRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeCurvatureEffectMaxRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGECURVATUREEFFECTMAXRATE_OFFSET))(this);
	}

	::System::Void set_ChargeCurvatureEffectMaxRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGECURVATUREEFFECTMAXRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateBaseRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEBASERATE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateBaseRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEBASERATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateRequireMinSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMINSPEED_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateRequireMinSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMINSPEED_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateRequireMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMAXSPEED_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateRequireMaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMAXSPEED_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateSpeedEffectMinRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATESPEEDEFFECTMINRATE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateSpeedEffectMinRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATESPEEDEFFECTMINRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateSpeedEffectMaxRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATESPEEDEFFECTMAXRATE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateSpeedEffectMaxRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATESPEEDEFFECTMAXRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateRequireMinCurvature()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMINCURVATURE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateRequireMinCurvature(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMINCURVATURE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateRequireMaxCurvature()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATEREQUIREMAXCURVATURE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateRequireMaxCurvature(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATEREQUIREMAXCURVATURE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateCurvatureEffectMinRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATECURVATUREEFFECTMINRATE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateCurvatureEffectMinRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATECURVATUREEFFECTMINRATE_OFFSET))(this, a1);
	}

	::System::Single get_ChargeToUltimateCurvatureEffectMaxRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CHARGETOULTIMATECURVATUREEFFECTMAXRATE_OFFSET))(this);
	}

	::System::Void set_ChargeToUltimateCurvatureEffectMaxRate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CHARGETOULTIMATECURVATUREEFFECTMAXRATE_OFFSET))(this, a1);
	}

	::System::Single get_OverrideXDamping()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_OVERRIDEXDAMPING_OFFSET))(this);
	}

	::System::Void set_OverrideXDamping(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_OVERRIDEXDAMPING_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBoundaryValueLoss()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYVALUELOSS_OFFSET))(this);
	}

	::System::Void set_ImpactBoundaryValueLoss(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYVALUELOSS_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBoundaryLossCooldown()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYLOSSCOOLDOWN_OFFSET))(this);
	}

	::System::Void set_ImpactBoundaryLossCooldown(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYLOSSCOOLDOWN_OFFSET))(this, a1);
	}

	::System::Single get_ImpactBoundaryLossNextTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_IMPACTBOUNDARYLOSSNEXTTIME_OFFSET))(this);
	}

	::System::Void set_ImpactBoundaryLossNextTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_IMPACTBOUNDARYLOSSNEXTTIME_OFFSET))(this, a1);
	}

	::System::Int32 get_LastImpactBoundaryFrameOnChargeStart()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_LASTIMPACTBOUNDARYFRAMEONCHARGESTART_OFFSET))(this);
	}

	::System::Void set_LastImpactBoundaryFrameOnChargeStart(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_LASTIMPACTBOUNDARYFRAMEONCHARGESTART_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::System::Single get_LastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_LASTTIME_OFFSET))(this);
	}

	::System::Void set_LastTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_LASTTIME_OFFSET))(this, a1);
	}

	::System::Single get_CurrentChargeValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_GET_CURRENTCHARGEVALUE_OFFSET))(this);
	}

	::System::Void set_CurrentChargeValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507341E10C1B5E3E_SET_CURRENTCHARGEVALUE_OFFSET))(this, a1);
	}
};
