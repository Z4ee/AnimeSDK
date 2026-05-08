#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x138788A0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x13878D20)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x138791B0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x138792B0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x138792C0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x138791C0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_DD914C20019D678E_OFFSET UNITYSDK_OFFSET(0x138791D0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x138791A0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x13878FA0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13879140)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x13878CD0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x13878850)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13879030)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13879190)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BatchActivationBehaviour_TypeDefinitionIndex = 73122;

	class BatchActivationBehaviour : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::System::Boolean isActivationType; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _targets; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* _initialStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_DD914C20019D678E(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_DD914C20019D678E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_57F015DFC718ABA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
		}

		::System::Void Method_3_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_METHOD_3_832295EC279E5994_2_OFFSET))(this);
		}
	};
}
