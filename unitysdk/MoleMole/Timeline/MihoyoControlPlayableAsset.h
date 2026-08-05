#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ControlPlayableAsset.h"

class Class_2_85B53B5A8E1505FE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19728C00)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_05ED597505047531_OFFSET UNITYSDK_OFFSET(0x1972B380)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_383013D0BFD7AB22_OFFSET UNITYSDK_OFFSET(0x1972A550)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_41E028A5F533B293_OFFSET UNITYSDK_OFFSET(0x1972AE60)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_60FAF5F064D38859_OFFSET UNITYSDK_OFFSET(0x1972B1A0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_75E95797F163FF56_OFFSET UNITYSDK_OFFSET(0x1972B5C0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_98327DE548306CA0_OFFSET UNITYSDK_OFFSET(0x1972A340)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_DF8FC72A6DE8A2B7_OFFSET UNITYSDK_OFFSET(0x1972A980)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_E47EEE8FF1774C6E_OFFSET UNITYSDK_OFFSET(0x1972A4C0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_FD6EF60946CE2CE7_OFFSET UNITYSDK_OFFSET(0x1972B6E0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1972AFF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoControlPlayableAsset_TypeDefinitionIndex = 84719;

	class MihoyoControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset
	{
	public:
		::Class_2_85B53B5A8E1505FE* template_; // 0x60
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> avatarGo; // 0x68
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> bindingTransform; // 0x78
		::UnityEngine::Timeline::TimelineClip* clip; // 0x88
		::UnityEngine::Playables::PlayableGraph graph; // 0x90
		::System::Boolean controlScale; // 0xA0
		::System::Boolean controlPos; // 0xA1
		::System::Boolean controlRot; // 0xA2
		::System::Single timeScale; // 0xA4
		::System::String* bindingPath; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_60FAF5F064D38859(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Playables::PlayableGraph a3, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_60FAF5F064D38859_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_05ED597505047531(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_05ED597505047531_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* Method_6_E47EEE8FF1774C6E(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_E47EEE8FF1774C6E_OFFSET))(a1);
		}

		::System::Void Method_6_DF8FC72A6DE8A2B7(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_DF8FC72A6DE8A2B7_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_6_383013D0BFD7AB22(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_383013D0BFD7AB22_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_6_75E95797F163FF56(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_75E95797F163FF56_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_6_98327DE548306CA0(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_98327DE548306CA0_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Playables::Playable Method_6_41E028A5F533B293(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_41E028A5F533B293_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_FD6EF60946CE2CE7(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_METHOD_6_FD6EF60946CE2CE7_OFFSET))(this, a1, a2);
		}
	};
}
