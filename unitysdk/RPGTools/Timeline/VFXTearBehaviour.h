#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFXTearClip_EyeTearState.h"
#include "unitysdk/RPGTools/Timeline/VFXTearClip_FaceTearState.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class VFXTearBehaviour_Class_2_006BAB46FE72520C; }
namespace RPGTools::Timeline { class VFXTearBehaviour_Class_2_396AFD4C5FDE54CE; }
namespace RPGTools::Timeline { class VFXTearClip; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x19F60EA0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19F61880)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19F60EC0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x19F60EB0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F61A70)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F61A60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearBehaviour_TypeDefinitionIndex = 46305;

	class VFXTearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPGTools::Timeline::VFXTearClip_EyeTearState, ::System::Int32>** StaticGet_EyeTearStateToAnimatorState()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPGTools::Timeline::VFXTearClip_EyeTearState, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x6B9A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPGTools::Timeline::VFXTearClip_FaceTearState, ::System::Int32>** StaticGet_FaceTearStateToAnimatorState()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPGTools::Timeline::VFXTearClip_FaceTearState, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x6B9A8);
		}
		static ::System::Int32* StaticGet_AnimParam_TransSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x14810);
		}
		static ::System::Int32* StaticGet_AnimParam_EyeTearState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x14814);
		}
		static ::System::Int32* StaticGet_AnimParam_FaceTearState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x14818);
		}
		static ::System::Int32* StaticGet_AnimParam_LoopSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VFXTearBehaviour_TypeDefinitionIndex)->GetStaticField(0x1481C);
		}
		// static const ::System::String* LeftEyeTearPath; // 0x0
		// static const ::System::String* RightEyeTearPath; // 0x0
		// static const ::System::String* LeftFaceTearPath; // 0x0
		// static const ::System::String* RightFaceTearPath; // 0x0
		// static const ::System::String* LeftEyeTearUniqueName; // 0x0
		// static const ::System::String* RightEyeTearUniqueName; // 0x0
		// static const ::System::String* LeftFaceTearUniqueName; // 0x0
		// static const ::System::String* RightFaceTearUniqueName; // 0x0
		// static const ::System::String* LeftEyeTearAttachPath; // 0x0
		// static const ::System::String* RightEyeTearAttachPath; // 0x0
		// static const ::System::String* FaceTearAttachPath; // 0x0
		::RPGTools::Timeline::VFXTearClip* _Clip_k__BackingField; // 0x10
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_396AFD4C5FDE54CE* _LeftEye; // 0x18
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_396AFD4C5FDE54CE* _RightEye; // 0x20
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_006BAB46FE72520C* _LeftFace; // 0x28
		::RPGTools::Timeline::VFXTearBehaviour_Class_2_006BAB46FE72520C* _RightFace; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR__CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::VFXTearClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFXTearClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFXTearClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFXTearClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
