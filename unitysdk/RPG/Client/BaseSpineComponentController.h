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

#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_APPLYSKIN_OFFSET UNITYSDK_OFFSET(0xC8D2320)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GETANIMATION_OFFSET UNITYSDK_OFFSET(0xC8D16E0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GET_ANIMATIONSTATEDATA_OFFSET UNITYSDK_OFFSET(0xC8D12C0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISANIMEXIST_OFFSET UNITYSDK_OFFSET(0xC8D1550)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINANIM_OFFSET UNITYSDK_OFFSET(0xC8D17A0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINSKIN_OFFSET UNITYSDK_OFFSET(0xC8D2070)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ONSPINEEVENT_OFFSET UNITYSDK_OFFSET(0xC8D2930)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xC8D1360)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_REGISTERANIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8D1B60)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xC8D19A0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SETMIX_OFFSET UNITYSDK_OFFSET(0xC8D15B0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SPINEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8D27E0)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D2980)
#define RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__ONANIMCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC8D1E10)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseSpineComponentController_TypeDefinitionIndex = 68984;

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

		::Spine::TrackEntry* PlayAnimation(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_PLAYANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetMix(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SETMIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsAnimExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISANIMEXIST_OFFSET))(this, a1);
		}

		::System::Boolean IsInAnim(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINANIM_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::Spine::Animation* GetAnimation(::System::String* a1)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_GETANIMATION_OFFSET))(this, a1);
		}

		::System::Void RegisterAnimFinishCallback(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_REGISTERANIMFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAnimComplete(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER__ONANIMCOMPLETE_OFFSET))(this, a1);
		}

		::System::Boolean IsInSkin(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ISINSKIN_OFFSET))(this, a1);
		}

		::System::Void ApplySkin(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_APPLYSKIN_OFFSET))(this, a1);
		}

		::System::Void SpineUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_SPINEUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnSpineEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESPINECOMPONENTCONTROLLER_ONSPINEEVENT_OFFSET))(this, a1);
		}
	};
}
