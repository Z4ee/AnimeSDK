#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_ED5897DDCD2F7F22_GET_EXITBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x191B89D0)
#define CLASS_1_ED5897DDCD2F7F22_GET_EXITDURATION_OFFSET UNITYSDK_OFFSET(0x191B89B0)
#define CLASS_1_ED5897DDCD2F7F22_GET_HOMINGMAXACCUMULATEDANGLE_OFFSET UNITYSDK_OFFSET(0x191B8970)
#define CLASS_1_ED5897DDCD2F7F22_GET_HOMINGSTRENGTHCURVE_OFFSET UNITYSDK_OFFSET(0x191B8950)
#define CLASS_1_ED5897DDCD2F7F22_GET_HOMINGTURNSPEED_OFFSET UNITYSDK_OFFSET(0x191B8930)
#define CLASS_1_ED5897DDCD2F7F22_GET_IMPACTCURRENTSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x191B8910)
#define CLASS_1_ED5897DDCD2F7F22_GET_IMPACTULTIMATEENERGYCARS_OFFSET UNITYSDK_OFFSET(0x191B88F0)
#define CLASS_1_ED5897DDCD2F7F22_GET_IMPACTULTIMATEENERGY_OFFSET UNITYSDK_OFFSET(0x191B88D0)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVEDURATION_OFFSET UNITYSDK_OFFSET(0x191B8870)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVEOFFSETDURATION_OFFSET UNITYSDK_OFFSET(0x191B88B0)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVEOFFSETROTATECURVE_OFFSET UNITYSDK_OFFSET(0x191B8890)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x191B8830)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x191B8810)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDPROTECTDURATION_OFFSET UNITYSDK_OFFSET(0x191B8990)
#define CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x191B8850)
#define CLASS_1_ED5897DDCD2F7F22_SET_EXITBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x191B89E0)
#define CLASS_1_ED5897DDCD2F7F22_SET_EXITDURATION_OFFSET UNITYSDK_OFFSET(0x191B89C0)
#define CLASS_1_ED5897DDCD2F7F22_SET_HOMINGMAXACCUMULATEDANGLE_OFFSET UNITYSDK_OFFSET(0x191B8980)
#define CLASS_1_ED5897DDCD2F7F22_SET_HOMINGSTRENGTHCURVE_OFFSET UNITYSDK_OFFSET(0x191B8960)
#define CLASS_1_ED5897DDCD2F7F22_SET_HOMINGTURNSPEED_OFFSET UNITYSDK_OFFSET(0x191B8940)
#define CLASS_1_ED5897DDCD2F7F22_SET_IMPACTCURRENTSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x191B8920)
#define CLASS_1_ED5897DDCD2F7F22_SET_IMPACTULTIMATEENERGYCARS_OFFSET UNITYSDK_OFFSET(0x191B8900)
#define CLASS_1_ED5897DDCD2F7F22_SET_IMPACTULTIMATEENERGY_OFFSET UNITYSDK_OFFSET(0x191B88E0)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVEDURATION_OFFSET UNITYSDK_OFFSET(0x191B8880)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVEOFFSETDURATION_OFFSET UNITYSDK_OFFSET(0x191B88C0)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVEOFFSETROTATECURVE_OFFSET UNITYSDK_OFFSET(0x191B88A0)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x191B8840)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x191B8820)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDPROTECTDURATION_OFFSET UNITYSDK_OFFSET(0x191B89A0)
#define CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x191B8860)
#define CLASS_1_ED5897DDCD2F7F22__CTOR_OFFSET UNITYSDK_OFFSET(0x191B89F0)

inline static constexpr unsigned int Class_1_ED5897DDCD2F7F22_TypeDefinitionIndex = 75419;

class Class_1_ED5897DDCD2F7F22 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* _ImpactUltimateEnergyCars_k__BackingField; // 0x10
	::UnityEngine::AnimationCurve* _MoveOffsetRotateCurve_k__BackingField; // 0x18
	::UnityEngine::AnimationCurve* _ExitBlendCurve_k__BackingField; // 0x20
	::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* _ImpactCurrentSpeedModifier_k__BackingField; // 0x28
	::UnityEngine::AnimationCurve* _MoveSpeedBlendCurve_k__BackingField; // 0x30
	::UnityEngine::AnimationCurve* _MoveSpeedCurve_k__BackingField; // 0x38
	::UnityEngine::AnimationCurve* _HomingStrengthCurve_k__BackingField; // 0x40
	::System::Single _MoveSpeed_k__BackingField; // 0x48
	::System::Single _MoveOffsetDuration_k__BackingField; // 0x4C
	::System::Single _ExitDuration_k__BackingField; // 0x50
	::System::Single _HomingMaxAccumulatedAngle_k__BackingField; // 0x54
	::System::Single _HomingTurnSpeed_k__BackingField; // 0x58
	::System::Single _MoveSpeedProtectDuration_k__BackingField; // 0x5C
	::System::Single _MoveDuration_k__BackingField; // 0x60
	::System::Single _ImpactUltimateEnergy_k__BackingField; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22__CTOR_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* get_MoveSpeedCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDCURVE_OFFSET))(this);
	}

	::System::Void set_MoveSpeedCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDCURVE_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_MoveSpeedBlendCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDBLENDCURVE_OFFSET))(this);
	}

	::System::Void set_MoveSpeedBlendCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDBLENDCURVE_OFFSET))(this, a1);
	}

	::System::Single get_MoveSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEED_OFFSET))(this);
	}

	::System::Void set_MoveSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEED_OFFSET))(this, a1);
	}

	::System::Single get_MoveDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVEDURATION_OFFSET))(this);
	}

	::System::Void set_MoveDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVEDURATION_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_MoveOffsetRotateCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVEOFFSETROTATECURVE_OFFSET))(this);
	}

	::System::Void set_MoveOffsetRotateCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVEOFFSETROTATECURVE_OFFSET))(this, a1);
	}

	::System::Single get_MoveOffsetDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVEOFFSETDURATION_OFFSET))(this);
	}

	::System::Void set_MoveOffsetDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVEOFFSETDURATION_OFFSET))(this, a1);
	}

	::System::Single get_ImpactUltimateEnergy()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_IMPACTULTIMATEENERGY_OFFSET))(this);
	}

	::System::Void set_ImpactUltimateEnergy(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_IMPACTULTIMATEENERGY_OFFSET))(this, a1);
	}

	::RPG::PoolHashSet_1<::System::Int32>* get_ImpactUltimateEnergyCars()
	{
		return ((::RPG::PoolHashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_IMPACTULTIMATEENERGYCARS_OFFSET))(this);
	}

	::System::Void set_ImpactUltimateEnergyCars(::RPG::PoolHashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_IMPACTULTIMATEENERGYCARS_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* get_ImpactCurrentSpeedModifier()
	{
		return ((::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_IMPACTCURRENTSPEEDMODIFIER_OFFSET))(this);
	}

	::System::Void set_ImpactCurrentSpeedModifier(::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_IMPACTCURRENTSPEEDMODIFIER_OFFSET))(this, a1);
	}

	::System::Single get_HomingTurnSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_HOMINGTURNSPEED_OFFSET))(this);
	}

	::System::Void set_HomingTurnSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_HOMINGTURNSPEED_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_HomingStrengthCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_HOMINGSTRENGTHCURVE_OFFSET))(this);
	}

	::System::Void set_HomingStrengthCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_HOMINGSTRENGTHCURVE_OFFSET))(this, a1);
	}

	::System::Single get_HomingMaxAccumulatedAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_HOMINGMAXACCUMULATEDANGLE_OFFSET))(this);
	}

	::System::Void set_HomingMaxAccumulatedAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_HOMINGMAXACCUMULATEDANGLE_OFFSET))(this, a1);
	}

	::System::Single get_MoveSpeedProtectDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_MOVESPEEDPROTECTDURATION_OFFSET))(this);
	}

	::System::Void set_MoveSpeedProtectDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_MOVESPEEDPROTECTDURATION_OFFSET))(this, a1);
	}

	::System::Single get_ExitDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_EXITDURATION_OFFSET))(this);
	}

	::System::Void set_ExitDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_EXITDURATION_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_ExitBlendCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_GET_EXITBLENDCURVE_OFFSET))(this);
	}

	::System::Void set_ExitBlendCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_ED5897DDCD2F7F22_SET_EXITBLENDCURVE_OFFSET))(this, a1);
	}
};
