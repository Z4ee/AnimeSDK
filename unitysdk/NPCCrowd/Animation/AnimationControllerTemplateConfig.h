#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParameterInfo.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateIdentifier.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateInfo.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateMachineInfo.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace Foundation::StateMachine { class MachineCache; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_CLEARSERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x10643AB0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_FETCHSTATEID_OFFSET UNITYSDK_OFFSET(0x10643B30)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_ANIMCLIPS_OFFSET UNITYSDK_OFFSET(0x106437B0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREACURVE_OFFSET UNITYSDK_OFFSET(0x106439B0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREADERIVATIVECURVE_OFFSET UNITYSDK_OFFSET(0x106439F0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREASECTIONCURVE_OFFSET UNITYSDK_OFFSET(0x10643A30)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x10643A70)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_LEFTFOOTIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x10643930)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_RIGHTFOOTIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x10643970)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x10643C00)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10643DC0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x10643E20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerTemplateConfig_TypeDefinitionIndex = 71268;

	class AnimationControllerTemplateConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::RuntimeAnimatorController* template_; // 0x58
		::Il2CppArray<::NPCCrowd::Animation::AnimatorControllerStateIdentifier>* clipToState; // 0x60
		::Il2CppArray<::NPCCrowd::Animation::AnimatorControllerParameterInfo>* parameters; // 0x68
		::Il2CppArray<::NPCCrowd::Animation::AnimatorControllerStateMachineInfo>* machines; // 0x70
		::Il2CppArray<::NPCCrowd::Animation::AnimatorControllerStateInfo>* states; // 0x78
		::Il2CppArray<::System::Int32>* defaultStateIndex; // 0x80
		::Foundation::StateMachine::MachineCache* cache; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::AnimationClip*>* get_AnimClips()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_ANIMCLIPS_OFFSET))(this);
		}

		static ::System::String* get_LeftFootIkWeight()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_LEFTFOOTIKWEIGHT_OFFSET))();
		}

		static ::System::String* get_RightFootIkWeight()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_RIGHTFOOTIKWEIGHT_OFFSET))();
		}

		static ::System::String* get_FootAreaCurve()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREACURVE_OFFSET))();
		}

		static ::System::String* get_FootAreaDerivativeCurve()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREADERIVATIVECURVE_OFFSET))();
		}

		static ::System::String* get_FootAreaSectionCurve()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTAREASECTIONCURVE_OFFSET))();
		}

		static ::System::String* get_FootLockStatus()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_GET_FOOTLOCKSTATUS_OFFSET))();
		}

		::System::Void ClearSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_CLEARSERIALIZEDATA_OFFSET))(this);
		}

		::System::Int32 FetchStateId(::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateIdentifier> buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateIdentifier>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_FETCHSTATEID_OFFSET))(this, buffer);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERTEMPLATECONFIG___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
