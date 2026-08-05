#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepPathDirection.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepPathType.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PredictState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETCURRENTFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668CA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETFOOTGROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x668B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETFOOTHEIGHT_OFFSET UNITYSDK_OFFSET(0x668AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETGROUNDEDSTATE_OFFSET UNITYSDK_OFFSET(0x668DE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETHITHEIGHT_OFFSET UNITYSDK_OFFSET(0x668BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x668BB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETISGROUNDEDFORFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETNEXTFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668D70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETPREDICTENABLE_OFFSET UNITYSDK_OFFSET(0x668E30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETPREDICTTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x668D10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GET_TARGETENABLE_OFFSET UNITYSDK_OFFSET(0x324690)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETCURRENTFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668C70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETFOOTGROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x668B80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETFOOTHEIGHT_OFFSET UNITYSDK_OFFSET(0x668B10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETGROUNDEDSTATE_OFFSET UNITYSDK_OFFSET(0x668DC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETHITHEIGHT_OFFSET UNITYSDK_OFFSET(0x668C10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x668BD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETISGROUNDEDFORFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668ED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETNEXTFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668D40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETPREDICTENABLE_OFFSET UNITYSDK_OFFSET(0x668E10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETPREDICTTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x668CF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SET_TARGETENABLE_OFFSET UNITYSDK_OFFSET(0x668A60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_UPDATEFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x668C30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF76DE80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepControlData_TypeDefinitionIndex = 88239;

	struct alignas(4) AnimationSubManager_FootStepControlData
	{
		static ::UnityEngine::NapTransformData* StaticGet_DummyTransform()
		{
			return (::UnityEngine::NapTransformData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepControlData_TypeDefinitionIndex)->GetStaticField(0xBCE0);
		}
		static ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_FootStepControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepControlData_TypeDefinitionIndex)->GetStaticField(0xBD10);
		}
		::System::Boolean targetEnable; // 0x10
		::System::Boolean enableDirty; // 0x11
		::System::Boolean ForceRefresh; // 0x12
		::System::Single IkWeight; // 0x14
		::System::Single BlendTimeRemain; // 0x18
		::NPCCrowd::Animation::AnimationSubManager_FootStepPathType PathType; // 0x1C
		::NPCCrowd::Animation::AnimationSubManager_FootStepPathDirection Direction; // 0x20
		::System::Single LeftFootHeight; // 0x24
		::System::Single RightFootHeight; // 0x28
		::UnityEngine::Vector3 LeftFootGroundNormal; // 0x2C
		::UnityEngine::Vector3 RightFootGroundNormal; // 0x38
		::System::Single LastLeftIkWeight; // 0x44
		::System::Single LastRightIkWeight; // 0x48
		::System::Single LeftHitHeight; // 0x4C
		::System::Single RightHitHeight; // 0x50
		::System::Single LastPelvisDelta; // 0x54
		::System::Single LastPelvisDeltaDiff; // 0x58
		::UnityEngine::NapTransformData LeftFootAnimWorldSpace; // 0x5C
		::UnityEngine::NapTransformData RightFootAnimWorldSpace; // 0x8C
		::System::Boolean EnablePIK; // 0xBC
		::System::Single SpeedScaleLastFrame; // 0xC0
		::System::Single InitDesiredSpeed; // 0xC4
		::UnityEngine::Vector3 EntityVelocity; // 0xC8
		::System::Boolean IsLeftFootOnGround; // 0xD4
		::System::Boolean IsRightFootOnGround; // 0xD5
		::NPCCrowd::Animation::AnimationSubManager_PredictState LeftFootPredictState; // 0xD8
		::NPCCrowd::Animation::AnimationSubManager_PredictState RightFootPredictState; // 0xF4
		::System::Single LeftFootPredictTargetHeight; // 0x110
		::System::Single RightFootPredictTargetHeight; // 0x114
		::System::Boolean IsLeftGroundedForFootPrint; // 0x118
		::System::Boolean IsRightGroundedForFootPrint; // 0x119

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_TargetEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GET_TARGETENABLE_OFFSET))(this);
		}

		::System::Void set_TargetEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SET_TARGETENABLE_OFFSET))(this, value);
		}

		::System::Single GetFootHeight(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETFOOTHEIGHT_OFFSET))(this, i);
		}

		::System::Void SetFootHeight(::System::Int32 i, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETFOOTHEIGHT_OFFSET))(this, i, val);
		}

		::UnityEngine::Vector3 GetFootGroundNormal(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETFOOTGROUNDNORMAL_OFFSET))(this, i);
		}

		::System::Void SetFootGroundNormal(::System::Int32 i, ::UnityEngine::Vector3 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETFOOTGROUNDNORMAL_OFFSET))(this, i, val);
		}

		::System::Single GetIkWeight(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETIKWEIGHT_OFFSET))(this, i);
		}

		::System::Void SetIkWeight(::System::Int32 i, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETIKWEIGHT_OFFSET))(this, i, val);
		}

		::System::Single GetHitHeight(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETHITHEIGHT_OFFSET))(this, i);
		}

		::System::Void SetHitHeight(::System::Int32 i, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETHITHEIGHT_OFFSET))(this, i, val);
		}

		::System::Void UpdateFootPrint(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_UPDATEFOOTPRINT_OFFSET))(this, i);
		}

		::System::Void SetCurrentFootPrint(::System::Int32 i, ::UnityEngine::Vector3 curr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETCURRENTFOOTPRINT_OFFSET))(this, i, curr);
		}

		::UnityEngine::Vector3 GetCurrentFootPrint(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETCURRENTFOOTPRINT_OFFSET))(this, i);
		}

		::System::Void SetPredictTargetHeight(::System::Int32 i, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETPREDICTTARGETHEIGHT_OFFSET))(this, i, value);
		}

		::System::Single GetPredictTargetHeight(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETPREDICTTARGETHEIGHT_OFFSET))(this, i);
		}

		::System::Void SetNextFootPrint(::System::Int32 i, ::UnityEngine::Vector3 next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETNEXTFOOTPRINT_OFFSET))(this, i, next);
		}

		::UnityEngine::Vector3 GetNextFootPrint(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETNEXTFOOTPRINT_OFFSET))(this, i);
		}

		::System::Void SetGroundedState(::System::Int32 i, ::System::Boolean isGrounded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETGROUNDEDSTATE_OFFSET))(this, i, isGrounded);
		}

		::System::Boolean GetGroundedState(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETGROUNDEDSTATE_OFFSET))(this, i);
		}

		::System::Void SetPredictEnable(::System::Int32 i, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETPREDICTENABLE_OFFSET))(this, i, enable);
		}

		::System::Boolean GetPredictEnable(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETPREDICTENABLE_OFFSET))(this, i);
		}

		::System::Boolean GetIsGroundedForFootPrint(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_GETISGROUNDEDFORFOOTPRINT_OFFSET))(this, i);
		}

		::System::Void SetIsGroundedForFootPrint(::System::Int32 i, ::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPCONTROLDATA_SETISGROUNDEDFORFOOTPRINT_OFFSET))(this, i, val);
		}
	};
}
