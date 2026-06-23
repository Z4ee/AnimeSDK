#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/NPCCrowd/Animation/FootLockStatus.h"
#include "unitysdk/NPCCrowd/Animation/PhaseSectionFlag.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_PHASESECTION_CALCULATELOSSFUNCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x77D860)
#define NPCCROWD_ANIMATION_PHASESECTION_CALCULATELOSSFUNCTION_OFFSET UNITYSDK_OFFSET(0x77D670)
#define NPCCROWD_ANIMATION_PHASESECTION_COULDMATCHPHASE_OFFSET UNITYSDK_OFFSET(0x11F871D0)
#define NPCCROWD_ANIMATION_PHASESECTION_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x77D4F0)
#define NPCCROWD_ANIMATION_PHASESECTION_ENSURETIME01_OFFSET UNITYSDK_OFFSET(0x11F86AA0)
#define NPCCROWD_ANIMATION_PHASESECTION_EVALUATEPHASE_OFFSET UNITYSDK_OFFSET(0x77D580)
#define NPCCROWD_ANIMATION_PHASESECTION_EVALUATETIME_OFFSET UNITYSDK_OFFSET(0x77D5D0)
#define NPCCROWD_ANIMATION_PHASESECTION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x77D3B0)
#define NPCCROWD_ANIMATION_PHASESECTION_GENERATELOSSFUNCTIONDERIVATIVEZEROEQUATION_OFFSET UNITYSDK_OFFSET(0x77D740)
#define NPCCROWD_ANIMATION_PHASESECTION_GETZEROEQUATIONINPUTRANGE_OFFSET UNITYSDK_OFFSET(0x77D720)
#define NPCCROWD_ANIMATION_PHASESECTION_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x77D2B0)
#define NPCCROWD_ANIMATION_PHASESECTION_GET_FOOTSTATUS_OFFSET UNITYSDK_OFFSET(0x77D2F0)
#define NPCCROWD_ANIMATION_PHASESECTION_GET_ISZEROSECTION_OFFSET UNITYSDK_OFFSET(0x77D5F0)
#define NPCCROWD_ANIMATION_PHASESECTION_ISSINGLEFOOT_OFFSET UNITYSDK_OFFSET(0x11F871C0)
#define NPCCROWD_ANIMATION_PHASESECTION_MATCHZEROSECTION_OFFSET UNITYSDK_OFFSET(0x77D610)
#define NPCCROWD_ANIMATION_PHASESECTION_MATCH_OFFSET UNITYSDK_OFFSET(0x77D640)
#define NPCCROWD_ANIMATION_PHASESECTION_SELECT_OFFSET UNITYSDK_OFFSET(0x77D5E0)
#define NPCCROWD_ANIMATION_PHASESECTION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x77D2C0)
#define NPCCROWD_ANIMATION_PHASESECTION_SET_FOOTSTATUS_OFFSET UNITYSDK_OFFSET(0x77D300)
#define NPCCROWD_ANIMATION_PHASESECTION_SLICE_OFFSET UNITYSDK_OFFSET(0x77D390)
#define NPCCROWD_ANIMATION_PHASESECTION_UPDATEBYLOSSFUNCTIONEXTREME_OFFSET UNITYSDK_OFFSET(0x77D6C0)
#define NPCCROWD_ANIMATION_PHASESECTION_UPDATELOSSFUNCTIONRESULT_OFFSET UNITYSDK_OFFSET(0x77D7C0)
#define NPCCROWD_ANIMATION_PHASESECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F89130)
#define NPCCROWD_ANIMATION_PHASESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x77D360)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int PhaseSection_TypeDefinitionIndex = 53454;

	struct alignas(4) PhaseSection
	{
		static ::Foundation::Unreal::Interval_1<::System::Single>* StaticGet_DecelerateIncreasing()
		{
			return (::Foundation::Unreal::Interval_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PhaseSection_TypeDefinitionIndex)->GetStaticField(0x11240);
		}
		static ::Foundation::Unreal::Interval_1<::System::Single>* StaticGet_AccelerateDecreasing()
		{
			return (::Foundation::Unreal::Interval_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PhaseSection_TypeDefinitionIndex)->GetStaticField(0x11250);
		}
		static ::Foundation::Unreal::Interval_1<::System::Single>* StaticGet_AccelerateIncreasing()
		{
			return (::Foundation::Unreal::Interval_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PhaseSection_TypeDefinitionIndex)->GetStaticField(0x11260);
		}
		static ::Foundation::Unreal::Interval_1<::System::Single>* StaticGet_DecelerateDecreasing()
		{
			return (::Foundation::Unreal::Interval_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PhaseSection_TypeDefinitionIndex)->GetStaticField(0x11270);
		}
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single BigNumber; // 0x0
		::System::Single StartTime; // 0x10
		::System::Single EndTime; // 0x14
		::System::Single StartPhase; // 0x18
		::System::Single EndPhase; // 0x1C
		::System::Single Amplitude; // 0x20
		::System::Single Constant; // 0x24
		::NPCCrowd::Animation::PhaseSectionFlag _flag; // 0x28

		::System::Void _ctor(::System::Single startTime, ::System::Single endTime, ::System::Single startPhase, ::System::Single endPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION__CTOR_OFFSET))(this, startTime, endTime, startPhase, endPhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION__CCTOR_OFFSET))();
		}

		::System::Single get_Flags()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_SET_FLAGS_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::FootLockStatus get_FootStatus()
		{
			return ((::NPCCrowd::Animation::FootLockStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_GET_FOOTSTATUS_OFFSET))(this);
		}

		::System::Void set_FootStatus(::NPCCrowd::Animation::FootLockStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FootLockStatus))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_SET_FOOTSTATUS_OFFSET))(this, value);
		}

		static ::System::Single EnsureTime01(::System::Single time)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_ENSURETIME01_OFFSET))(time);
		}

		::NPCCrowd::Animation::PhaseSection Slice(::System::Single startTime, ::System::Single endTime)
		{
			return ((::NPCCrowd::Animation::PhaseSection(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_SLICE_OFFSET))(this, startTime, endTime);
		}

		::System::Single Evaluate(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_EVALUATE_OFFSET))(this, time);
		}

		::System::Single Derivative(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_DERIVATIVE_OFFSET))(this, time);
		}

		::System::Single EvaluatePhase(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_EVALUATEPHASE_OFFSET))(this, time);
		}

		::System::Single EvaluateTime(::System::Single phase)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_EVALUATETIME_OFFSET))(this, phase);
		}

		::System::Single Select(::System::Single phase1, ::System::Single phase2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_SELECT_OFFSET))(this, phase1, phase2);
		}

		::System::Boolean get_IsZeroSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_GET_ISZEROSECTION_OFFSET))(this);
		}

		/*
		::NPCCrowd::Animation::PhaseMatchingResult MatchZeroSection(::NPCCrowd::Animation::PhaseMatchingTarget target)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::NPCCrowd::Animation::PhaseMatchingTarget))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_MATCHZEROSECTION_OFFSET))(this, target);
		}
		*/

		static ::System::Boolean IsSingleFoot(::NPCCrowd::Animation::FootLockStatus self)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::FootLockStatus))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_ISSINGLEFOOT_OFFSET))(self);
		}

		static ::System::Boolean CouldMatchPhase(::NPCCrowd::Animation::FootLockStatus currentLock, ::NPCCrowd::Animation::FootLockStatus sectionLock)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::FootLockStatus, ::NPCCrowd::Animation::FootLockStatus))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_COULDMATCHPHASE_OFFSET))(currentLock, sectionLock);
		}

		/*
		::NPCCrowd::Animation::PhaseMatchingResult Match(::NPCCrowd::Animation::PhaseMatchingTarget target)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::NPCCrowd::Animation::PhaseMatchingTarget))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_MATCH_OFFSET))(this, target);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseSection_LossFunctionResult CalculateLossFunction(::System::Single time, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::System::Single areaWeight, ::System::Single areaDerivativeWeight)
		{
			return ((::NPCCrowd::Animation::PhaseSection_LossFunctionResult(*)(::PVOID, ::System::Single, ::NPCCrowd::Animation::PhaseMatchingTarget, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_CALCULATELOSSFUNCTION_OFFSET))(this, time, target, areaWeight, areaDerivativeWeight);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseSection_LossFunctionResult UpdateByLossFunctionExtreme(::NPCCrowd::Animation::PhaseMatchingTarget target, ::System::Single areaWeight, ::System::Single areaDerivativeWeight, ::NPCCrowd::Animation::PhaseSection_LossFunctionResult result)
		{
			return ((::NPCCrowd::Animation::PhaseSection_LossFunctionResult(*)(::PVOID, ::NPCCrowd::Animation::PhaseMatchingTarget, ::System::Single, ::System::Single, ::NPCCrowd::Animation::PhaseSection_LossFunctionResult))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_UPDATEBYLOSSFUNCTIONEXTREME_OFFSET))(this, target, areaWeight, areaDerivativeWeight, result);
		}
		*/

		::Foundation::Unreal::Interval_1<::System::Single> GetZeroEquationInputRange()
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_GETZEROEQUATIONINPUTRANGE_OFFSET))(this);
		}

		/*
		::System::ValueTuple_5<::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single> GenerateLossFunctionDerivativeZeroEquation(::NPCCrowd::Animation::PhaseMatchingTarget target, ::System::Single areaWeight, ::System::Single areaDerivativeWeight)
		{
			return ((::System::ValueTuple_5<::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID, ::NPCCrowd::Animation::PhaseMatchingTarget, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_GENERATELOSSFUNCTIONDERIVATIVEZEROEQUATION_OFFSET))(this, target, areaWeight, areaDerivativeWeight);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseSection_LossFunctionResult UpdateLossFunctionResult(::Foundation::Unreal::Interval_1<::System::Single> range, ::System::Numerics::Complex root, ::NPCCrowd::Animation::PhaseSection_LossFunctionResult result, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::System::Single areaWeight, ::System::Single areaDerivativeWeight)
		{
			return ((::NPCCrowd::Animation::PhaseSection_LossFunctionResult(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Numerics::Complex, ::NPCCrowd::Animation::PhaseSection_LossFunctionResult, ::NPCCrowd::Animation::PhaseMatchingTarget, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_UPDATELOSSFUNCTIONRESULT_OFFSET))(this, range, root, result, target, areaWeight, areaDerivativeWeight);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseSection_LossFunctionResult CalculateLossFunctionValue(::System::Single t, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::System::Single areaWeight, ::System::Single areaDerivativeWeight)
		{
			return ((::NPCCrowd::Animation::PhaseSection_LossFunctionResult(*)(::PVOID, ::System::Single, ::NPCCrowd::Animation::PhaseMatchingTarget, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_CALCULATELOSSFUNCTIONVALUE_OFFSET))(this, t, target, areaWeight, areaDerivativeWeight);
		}
		*/
	};
}
