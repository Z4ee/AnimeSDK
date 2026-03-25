#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationState; }
namespace Spine { class AnimationStateData; }
namespace Spine { class Skeleton; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_APPLYSKIN_OFFSET UNITYSDK_OFFSET(0x917B900)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x917AD40)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GET_ANIMATIONSTATEDATA_OFFSET UNITYSDK_OFFSET(0x917A920)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISANIMEXIST_OFFSET UNITYSDK_OFFSET(0x917ABB0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINANIM_OFFSET UNITYSDK_OFFSET(0x917AE00)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINSKIN_OFFSET UNITYSDK_OFFSET(0x917B650)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ONSPINEEVENT_OFFSET UNITYSDK_OFFSET(0x917BE30)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x917A9C0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_REGISTERANIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x917B180)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x917B030)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SETMIX_OFFSET UNITYSDK_OFFSET(0x917AC10)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SPINEUPDATE_OFFSET UNITYSDK_OFFSET(0x917BCE0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x917BE80)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__ONANIMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x917B400)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseSpineComponentController_TypeDefinitionIndex = 56382;

	class BaseSpineComponentController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* _AnimFinishCallbackDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__CTOR_OFFSET))(this);
		}

		::Spine::AnimationStateData* get_AnimationStateData()
		{
			return ((::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GET_ANIMATIONSTATEDATA_OFFSET))(this);
		}

		::Spine::TrackEntry* PlayAnimation(::System::String* anim, ::System::Int32 trackIndex, ::System::Boolean isLoop, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_PLAYANIMATION_OFFSET))(this, anim, trackIndex, isLoop, delay);
		}

		::System::Void SetMix(::System::String* fromAnim, ::System::String* toAnim, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SETMIX_OFFSET))(this, fromAnim, toAnim, duration);
		}

		::System::Boolean IsAnimExist(::System::String* anim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISANIMEXIST_OFFSET))(this, anim);
		}

		::System::Boolean IsInAnim(::System::String* anim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINANIM_OFFSET))(this, anim);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::Spine::Animation* GetAnimation(::System::String* anim)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GETANIMATION_OFFSET))(this, anim);
		}

		::System::Void RegisterAnimFinishCallback(::System::String* anim, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_REGISTERANIMFINISHCALLBACK_OFFSET))(this, anim, callback);
		}

		::System::Void _OnAnimComplete(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__ONANIMCOMPLETE_OFFSET))(this, trackEntry);
		}

		::System::Boolean IsInSkin(::System::String* skin)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINSKIN_OFFSET))(this, skin);
		}

		::System::Void ApplySkin(::System::String* skin)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_APPLYSKIN_OFFSET))(this, skin);
		}

		::System::Void SpineUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SPINEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnSpineEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ONSPINEEVENT_OFFSET))(this, eventName);
		}
	};
}
