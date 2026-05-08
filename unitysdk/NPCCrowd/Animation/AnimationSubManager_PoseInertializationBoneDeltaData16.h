#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationBoneDeltaData16___storage_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOROTATION_OFFSET UNITYSDK_OFFSET(0x58C620)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOSCALE_OFFSET UNITYSDK_OFFSET(0x58C970)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOTRANSLATION_OFFSET UNITYSDK_OFFSET(0x58C2F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTO_OFFSET UNITYSDK_OFFSET(0x58C2A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_CALCULATEINERTIALIZATIONFLOAT_OFFSET UNITYSDK_OFFSET(0xD253A10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x58C050)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C110)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x58C130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALEAXIS_OFFSET UNITYSDK_OFFSET(0x58C090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALESPEED_OFFSET UNITYSDK_OFFSET(0x58C170)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x58C010)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C0D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONSPEED_OFFSET UNITYSDK_OFFSET(0x58C0F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITROTATION_OFFSET UNITYSDK_OFFSET(0x58C280)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITSCALE_OFFSET UNITYSDK_OFFSET(0x58C290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITTRANSLATION_OFFSET UNITYSDK_OFFSET(0x58C270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INIT_OFFSET UNITYSDK_OFFSET(0x58C190)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IPOSEINERTIALIZATIONBONEDELTADATA_INIT_OFFSET UNITYSDK_OFFSET(0x58CCA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x58C070)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C120)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x58C140)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALEAXIS_OFFSET UNITYSDK_OFFSET(0x58C0B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C160)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALESPEED_OFFSET UNITYSDK_OFFSET(0x58C180)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x58C030)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x58C0E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONSPEED_OFFSET UNITYSDK_OFFSET(0x58C100)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationBoneDeltaData16_TypeDefinitionIndex = 70533;

	struct alignas(4) AnimationSubManager_PoseInertializationBoneDeltaData16
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
		// static const ::System::Int32 TranslationMagnitudeIndex = 0x9; // 0x0
		// static const ::System::Int32 TranslationSpeedIndex = 0xA; // 0x0
		// static const ::System::Int32 RotationMagnitudeIndex = 0xB; // 0x0
		// static const ::System::Int32 RotationSpeedIndex = 0xC; // 0x0
		// static const ::System::Int32 ScaleMagnitudeIndex = 0xD; // 0x0
		// static const ::System::Int32 ScaleSpeedIndex = 0xE; // 0x0
		::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData16___storage_e__FixedBuffer _storage; // 0x10

		/*
		::UnityEngine::Vector3 get_TranslationDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONDIRECTION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TranslationDirection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONDIRECTION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_RotationAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONAXIS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_RotationAxis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONAXIS_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_ScaleAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALEAXIS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ScaleAxis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALEAXIS_OFFSET))(this, value);
		}
		*/

		::System::Single get_TranslationMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONMAGNITUDE_OFFSET))(this);
		}

		::System::Void set_TranslationMagnitude(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONMAGNITUDE_OFFSET))(this, value);
		}

		::System::Single get_TranslationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_TRANSLATIONSPEED_OFFSET))(this);
		}

		::System::Void set_TranslationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_TRANSLATIONSPEED_OFFSET))(this, value);
		}

		::System::Single get_RotationMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONMAGNITUDE_OFFSET))(this);
		}

		::System::Void set_RotationMagnitude(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONMAGNITUDE_OFFSET))(this, value);
		}

		::System::Single get_RotationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_ROTATIONSPEED_OFFSET))(this);
		}

		::System::Void set_RotationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_ROTATIONSPEED_OFFSET))(this, value);
		}

		::System::Single get_ScaleMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALEMAGNITUDE_OFFSET))(this);
		}

		::System::Void set_ScaleMagnitude(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALEMAGNITUDE_OFFSET))(this, value);
		}

		::System::Single get_ScaleSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_GET_SCALESPEED_OFFSET))(this);
		}

		::System::Void set_ScaleSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_SET_SCALESPEED_OFFSET))(this, value);
		}

		/*
		::System::Void Init(::System::Single previousDeltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INIT_OFFSET))(this, previousDeltaTime, current, last, last2, duration);
		}
		*/

		/*
		::System::Void InitTranslation(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITTRANSLATION_OFFSET))(this, deltaTime, current, last, last2);
		}
		*/

		/*
		::System::Void InitRotation(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITROTATION_OFFSET))(this, deltaTime, current, last, last2);
		}
		*/

		/*
		::System::Void InitScale(::System::Single deltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_INITSCALE_OFFSET))(this, deltaTime, current, last, last2);
		}
		*/

		/*
		::UnityEngine::NapTransformData ApplyTo(::UnityEngine::NapTransformData bone, ::System::Single time, ::System::Single duration)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTO_OFFSET))(this, bone, time, duration);
		}
		*/

		/*
		::System::Void ApplyToTranslation(::UnityEngine::NapTransformData& bone, ::System::Single time, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOTRANSLATION_OFFSET))(this, bone, time, duration);
		}
		*/

		/*
		::System::Void ApplyToRotation(::UnityEngine::NapTransformData& bone, ::System::Single time, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOROTATION_OFFSET))(this, bone, time, duration);
		}
		*/

		/*
		::System::Void ApplyToScale(::UnityEngine::NapTransformData& bone, ::System::Single time, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_APPLYTOSCALE_OFFSET))(this, bone, time, duration);
		}
		*/

		static ::System::Single CalculateInertializationFloat(::System::Single magnitude, ::System::Single speed, ::System::Single duration, ::System::Single time)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_CALCULATEINERTIALIZATIONFLOAT_OFFSET))(magnitude, speed, duration, time);
		}

		/*
		::System::Void NPCCrowd_Animation_AnimationSubManager_IPoseInertializationBoneDeltaData_Init(::System::Single previousDeltaTime, ::UnityEngine::NapTransformData& current, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& last2, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEINERTIALIZATIONBONEDELTADATA16_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_IPOSEINERTIALIZATIONBONEDELTADATA_INIT_OFFSET))(this, previousDeltaTime, current, last, last2, duration);
		}
		*/
	};
}
