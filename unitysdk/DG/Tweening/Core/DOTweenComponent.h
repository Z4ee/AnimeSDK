#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace DG::Tweening { class IDOTweenInit; }
namespace DG::Tweening { class Tween; }
namespace System::Collections { class IEnumerator; }

#define DG_TWEENING_CORE_DOTWEENCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C4E8970)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4E9A40)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C4E9C80)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C4E8FA0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C4E8E50)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1C4E9780)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C4E92F0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C4E9170)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C4E97E0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_START_OFFSET UNITYSDK_OFFSET(0x1C4E8990)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4E8AC0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1C4E9850)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORELAPSEDLOOPS_OFFSET UNITYSDK_OFFSET(0x1C4E9940)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORKILL_OFFSET UNITYSDK_OFFSET(0x1C4E98F0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4E9990)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORREWIND_OFFSET UNITYSDK_OFFSET(0x1C4E98A0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORSTART_OFFSET UNITYSDK_OFFSET(0x1C4E99F0)
#define DG_TWEENING_CORE_DOTWEENCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E9EE0)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenComponent_TypeDefinitionIndex = 25490;

	class DOTweenComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 inspectorUpdater; // 0x18
		::System::Single _unscaledTime; // 0x1C
		::System::Single _unscaledDeltaTime; // 0x20
		::System::Boolean _duplicateToDestroy; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::DG::Tweening::IDOTweenInit* SetCapacity(::System::Int32 tweenersCapacity, ::System::Int32 sequencesCapacity)
		{
			return ((::DG::Tweening::IDOTweenInit*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_SETCAPACITY_OFFSET))(this, tweenersCapacity, sequencesCapacity);
		}

		::System::Collections::IEnumerator* WaitForCompletion(::DG::Tweening::Tween* t)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORCOMPLETION_OFFSET))(this, t);
		}

		::System::Collections::IEnumerator* WaitForRewind(::DG::Tweening::Tween* t)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORREWIND_OFFSET))(this, t);
		}

		::System::Collections::IEnumerator* WaitForKill(::DG::Tweening::Tween* t)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORKILL_OFFSET))(this, t);
		}

		::System::Collections::IEnumerator* WaitForElapsedLoops(::DG::Tweening::Tween* t, ::System::Int32 elapsedLoops)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORELAPSEDLOOPS_OFFSET))(this, t, elapsedLoops);
		}

		::System::Collections::IEnumerator* WaitForPosition(::DG::Tweening::Tween* t, ::System::Single position)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORPOSITION_OFFSET))(this, t, position);
		}

		::System::Collections::IEnumerator* WaitForStart(::DG::Tweening::Tween* t)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_WAITFORSTART_OFFSET))(this, t);
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_CREATE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENCOMPONENT_DESTROYINSTANCE_OFFSET))();
		}
	};
}
