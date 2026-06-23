#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/BlendTarget.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x11634F30)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBINDINGDICT_OFFSET UNITYSDK_OFFSET(0x11634F80)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBRANCHBINDINGDICT_OFFSET UNITYSDK_OFFSET(0x11635990)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_GETTRACKBINDING_OFFSET UNITYSDK_OFFSET(0x116369F0)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_GET_ISBRANCHTIMELINEV2_OFFSET UNITYSDK_OFFSET(0x11634ED0)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_ISANIMATIONTRACK_OFFSET UNITYSDK_OFFSET(0x11636E70)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x11637150)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x116375F0)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x11637480)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETTRACKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x11636570)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0x116378F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDirectorBindingReplace_TypeDefinitionIndex = 64291;

	class MonoDirectorBindingReplace : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Playables::PlayableBinding>* Field_5_1; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Playables::PlayableBinding>*>* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBranchTimelineV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_GET_ISBRANCHTIMELINEV2_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_AWAKE_OFFSET))(this);
		}

		::System::Void CollectBindingDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBINDINGDICT_OFFSET))(this);
		}

		::System::Void CollectBranchBindingDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBRANCHBINDINGDICT_OFFSET))(this);
		}

		::System::Void SetTrackDynamic(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETTRACKDYNAMIC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* GetTrackBinding(::System::String* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_GETTRACKBINDING_OFFSET))(this, a1);
		}

		::System::Boolean IsAnimationTrack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_ISANIMATIONTRACK_OFFSET))(this, a1);
		}

		::System::Void SetAnimationTrackBlendTarget(::System::String* a1, ::UnityEngine::Animations::BlendTarget a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Animations::BlendTarget))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKBLENDTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimationTrackOutputWeight(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimationTrackOutputWeight_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_1_OFFSET))(this, a1, a2);
		}
	};
}
