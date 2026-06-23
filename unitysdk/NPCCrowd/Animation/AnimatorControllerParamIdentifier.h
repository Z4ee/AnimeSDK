#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x412140)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x412100)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x4120C0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x4120E0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x4120B0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x412120)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x8C49B80)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x8C49B60)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWINTPARAM_OFFSET UNITYSDK_OFFSET(0x8C49B70)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWTRIGGERPARAM_OFFSET UNITYSDK_OFFSET(0x8C49B90)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C49BA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerParamIdentifier_TypeDefinitionIndex = 82597;

	struct alignas(4) AnimatorControllerParamIdentifier
	{
		static ::NPCCrowd::Animation::AnimatorControllerParamIdentifier* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::AnimatorControllerParamIdentifier*)Il2CppClass::FromTypeDefinitionIndex(AnimatorControllerParamIdentifier_TypeDefinitionIndex)->GetStaticField(0xBC70);
		}
		::System::Int32 paramHash; // 0x10
		::UnityEngine::AnimatorControllerParameterType paramType; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean get_IsInteger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISINTEGER_OFFSET))(this);
		}

		::System::Boolean get_IsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISBOOL_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Boolean Equals(::NPCCrowd::Animation::AnimatorControllerParamIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimatorControllerParamIdentifier))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		static ::NPCCrowd::Animation::AnimatorControllerParamIdentifier NewFloatParam(::System::Int32 paramId)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWFLOATPARAM_OFFSET))(paramId);
		}

		static ::NPCCrowd::Animation::AnimatorControllerParamIdentifier NewIntParam(::System::Int32 paramId)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWINTPARAM_OFFSET))(paramId);
		}

		static ::NPCCrowd::Animation::AnimatorControllerParamIdentifier NewBoolParam(::System::Int32 paramId)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWBOOLPARAM_OFFSET))(paramId);
		}

		static ::NPCCrowd::Animation::AnimatorControllerParamIdentifier NewTriggerParam(::System::Int32 paramId)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMIDENTIFIER_NEWTRIGGERPARAM_OFFSET))(paramId);
		}
	};
}
