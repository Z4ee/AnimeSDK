#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationBoneDeltaData32___storage_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOROTATION_OFFSET UNITYSDK_OFFSET(0x5ED5B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOSCALE_OFFSET UNITYSDK_OFFSET(0x5ED760)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOTRANSLATION_OFFSET UNITYSDK_OFFSET(0x5ED440)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTO_OFFSET UNITYSDK_OFFSET(0x5ED9C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE570D20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GENERATE_OFFSET UNITYSDK_OFFSET(0xE570E80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x5ED0F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONDURATION_OFFSET UNITYSDK_OFFSET(0x5ED190)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x5ED290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEAXIS_OFFSET UNITYSDK_OFFSET(0x5ED130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEDURATION_OFFSET UNITYSDK_OFFSET(0x5ED1B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x5ED350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x5ED0B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONDURATION_OFFSET UNITYSDK_OFFSET(0x5ED170)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x5ED1D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITROTATION_OFFSET UNITYSDK_OFFSET(0x5ED420)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITSCALE_OFFSET UNITYSDK_OFFSET(0x5ED430)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITTRANSLATION_OFFSET UNITYSDK_OFFSET(0x5ED410)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INIT_OFFSET UNITYSDK_OFFSET(0x5ED8D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IPOSEINERTIALIZATIONBONEDELTADATA_INIT_OFFSET UNITYSDK_OFFSET(0x5EDED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x5ED110)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_ROTATIONDURATION_OFFSET UNITYSDK_OFFSET(0x5ED1A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_SCALEAXIS_OFFSET UNITYSDK_OFFSET(0x5ED150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_SCALEDURATION_OFFSET UNITYSDK_OFFSET(0x5ED1C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_TRANSLATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x5ED0D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_TRANSLATIONDURATION_OFFSET UNITYSDK_OFFSET(0x5ED180)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationBoneDeltaData32_TypeDefinitionIndex = 88345;

	struct alignas(4) AnimationSubManager_PoseInertializationBoneDeltaData32
	{
		// static const ::System::Int32 TranslationDirectionX = 0x0; // 0x0
		// static const ::System::Int32 TranslationDirectionY = 0x1; // 0x0
		// static const ::System::Int32 TranslationDirectionZ = 0x2; // 0x0
		// static const ::System::Int32 RotationAxisX = 0x3; // 0x0
		// static const ::System::Int32 RotationAxisY = 0x4; // 0x0
		// static const ::System::Int32 RotationAxisZ = 0x5; // 0x0
		// static const ::System::Int32 ScaleAxisX = 0x6; // 0x0
		// static const ::System::Int32 ScaleAxisY = 0x7; // 0x0
		// static const ::System::Int32 ScaleAxisZ = 0x8; // 0x0
		// static const ::System::Int32 TranslationDurationIndex = 0x9; // 0x0
		// static const ::System::Int32 RotationDurationIndex = 0xA; // 0x0
		// static const ::System::Int32 ScaleDurationIndex = 0xB; // 0x0
		// static const ::System::Int32 TranslationPolynomialStartIndex = 0xC; // 0x0
		// static const ::System::Int32 RotationPolynomialStartIndex = 0x12; // 0x0
		// static const ::System::Int32 ScalePolynomialStartIndex = 0x18; // 0x0
		// static const ::System::Int32 PolynomialOrder = 0x5; // 0x0
		::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData32___storage_e__FixedBuffer _storage; // 0x10

		/*
		::UnityEngine::Vector3 get_TranslationDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONDIRECTION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TranslationDirection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_TRANSLATIONDIRECTION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_RotationAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONAXIS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_RotationAxis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_ROTATIONAXIS_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_ScaleAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEAXIS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ScaleAxis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_SCALEAXIS_OFFSET))(this, value);
		}
		*/

		::System::Single get_TranslationDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONDURATION_OFFSET))(this);
		}

		::System::Void set_TranslationDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_TRANSLATIONDURATION_OFFSET))(this, value);
		}

		::System::Single get_RotationDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONDURATION_OFFSET))(this);
		}

		::System::Void set_RotationDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_ROTATIONDURATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEDURATION_OFFSET))(this);
		}

		::System::Void set_ScaleDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_SET_SCALEDURATION_OFFSET))(this, value);
		}

		/*
		::System::Span_1<::System::Single> get_TranslationPolynomial()
		{
			return ((::System::Span_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_TRANSLATIONPOLYNOMIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Span_1<::System::Single> get_RotationPolynomial()
		{
			return ((::System::Span_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_ROTATIONPOLYNOMIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Span_1<::System::Single> get_ScalePolynomial()
		{
			return ((::System::Span_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GET_SCALEPOLYNOMIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Void InitTranslation(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& lastLast, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITTRANSLATION_OFFSET))(this, deltaTime, current, last, lastLast, duration);
		}
		*/

		/*
		::System::Void InitRotation(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& lastLast, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITROTATION_OFFSET))(this, deltaTime, current, last, lastLast, duration);
		}
		*/

		/*
		::System::Void InitScale(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& lastLast, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INITSCALE_OFFSET))(this, deltaTime, current, last, lastLast, duration);
		}
		*/

		/*
		::System::Void ApplyToTranslation(::UnityEngine::NapTransformData& bone, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOTRANSLATION_OFFSET))(this, bone, time);
		}
		*/

		/*
		::System::Void ApplyToRotation(::UnityEngine::NapTransformData& bone, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOROTATION_OFFSET))(this, bone, time);
		}
		*/

		/*
		::System::Void ApplyToScale(::UnityEngine::NapTransformData& bone, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTOSCALE_OFFSET))(this, bone, time);
		}
		*/

		/*
		static ::System::Single Evaluate(::System::Span_1<::System::Single> polynomial, ::System::Single time)
		{
			return ((::System::Single(*)(::System::Span_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_EVALUATE_OFFSET))(polynomial, time);
		}
		*/

		/*
		static ::System::Single Generate(::System::Single duration, ::System::Single x, ::System::Single v, ::System::Span_1<::System::Single> polynomial)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Span_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_GENERATE_OFFSET))(duration, x, v, polynomial);
		}
		*/

		/*
		::System::Void Init(::System::Single previousDeltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_INIT_OFFSET))(this, previousDeltaTime, current, last, last2, duration);
		}
		*/

		/*
		::UnityEngine::NapTransformData ApplyTo(::UnityEngine::NapTransformData bone, ::System::Single time, ::System::Single duration)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_APPLYTO_OFFSET))(this, bone, time, duration);
		}
		*/

		/*
		::System::Void NPCCrowd_Animation_AnimationSubManager_IPoseInertializationBoneDeltaData_Init(::System::Single previousDeltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA32_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IPOSEINERTIALIZATIONBONEDELTADATA_INIT_OFFSET))(this, previousDeltaTime, current, last, last2, duration);
		}
		*/
	};
}
