#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class YieldInstruction; }

#define DG_TWEENING_TWEENEXTENSIONS_COMPLETEDLOOPS_OFFSET UNITYSDK_OFFSET(0x1F9861E0)
#define DG_TWEENING_TWEENEXTENSIONS_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1F984370)
#define DG_TWEENING_TWEENEXTENSIONS_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1F984360)
#define DG_TWEENING_TWEENEXTENSIONS_DELAY_OFFSET UNITYSDK_OFFSET(0x1F9862A0)
#define DG_TWEENING_TWEENEXTENSIONS_DURATION_OFFSET UNITYSDK_OFFSET(0x1F986360)
#define DG_TWEENING_TWEENEXTENSIONS_ELAPSEDDIRECTIONALPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1F986550)
#define DG_TWEENING_TWEENEXTENSIONS_ELAPSEDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1F986450)
#define DG_TWEENING_TWEENEXTENSIONS_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1F983A70)
#define DG_TWEENING_TWEENEXTENSIONS_FLIP_OFFSET UNITYSDK_OFFSET(0x1F9844F0)
#define DG_TWEENING_TWEENEXTENSIONS_FORCEINIT_OFFSET UNITYSDK_OFFSET(0x1F984650)
#define DG_TWEENING_TWEENEXTENSIONS_GOTOWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1F985410)
#define DG_TWEENING_TWEENEXTENSIONS_GOTO_OFFSET UNITYSDK_OFFSET(0x1F983B70)
#define DG_TWEENING_TWEENEXTENSIONS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1F986660)
#define DG_TWEENING_TWEENEXTENSIONS_ISBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1F986680)
#define DG_TWEENING_TWEENEXTENSIONS_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F986740)
#define DG_TWEENING_TWEENEXTENSIONS_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F986800)
#define DG_TWEENING_TWEENEXTENSIONS_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F9868C0)
#define DG_TWEENING_TWEENEXTENSIONS_KILL_OFFSET UNITYSDK_OFFSET(0x1F984870)
#define DG_TWEENING_TWEENEXTENSIONS_LOOPS_OFFSET UNITYSDK_OFFSET(0x1F986980)
#define DG_TWEENING_TWEENEXTENSIONS_PATHGETDRAWPOINTS_OFFSET UNITYSDK_OFFSET(0x1F986CF0)
#define DG_TWEENING_TWEENEXTENSIONS_PATHGETPOINT_OFFSET UNITYSDK_OFFSET(0x1F986A40)
#define DG_TWEENING_TWEENEXTENSIONS_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1F986EE0)
#define DG_TWEENING_TWEENEXTENSIONS_PLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1F984A70)
#define DG_TWEENING_TWEENEXTENSIONS_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1F984BD0)
#define DG_TWEENING_TWEENEXTENSIONS_RESTART_OFFSET UNITYSDK_OFFSET(0x1F984D30)
#define DG_TWEENING_TWEENEXTENSIONS_REWIND_OFFSET UNITYSDK_OFFSET(0x1F984EA0)
#define DG_TWEENING_TWEENEXTENSIONS_SMOOTHREWIND_OFFSET UNITYSDK_OFFSET(0x1F9850A0)
#define DG_TWEENING_TWEENEXTENSIONS_TOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1F9852B0)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1F985870)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORELAPSEDLOOPS_OFFSET UNITYSDK_OFFSET(0x1F985D20)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORKILL_OFFSET UNITYSDK_OFFSET(0x1F985B90)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORPOSITION_OFFSET UNITYSDK_OFFSET(0x1F985EB0)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORREWIND_OFFSET UNITYSDK_OFFSET(0x1F985A00)
#define DG_TWEENING_TWEENEXTENSIONS_WAITFORSTART_OFFSET UNITYSDK_OFFSET(0x1F986050)

namespace DG::Tweening
{
	inline static constexpr unsigned int TweenExtensions_TypeDefinitionIndex = 28451;

	class TweenExtensions : public ::System::Object
	{
	public:
		static ::System::Void Complete(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_COMPLETE_OFFSET))(t);
		}

		static ::System::Void Complete_1(::DG::Tweening::Tween* t, ::System::Boolean withCallbacks)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_COMPLETE_1_OFFSET))(t, withCallbacks);
		}

		static ::System::Void Flip(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_FLIP_OFFSET))(t);
		}

		static ::System::Void ForceInit(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_FORCEINIT_OFFSET))(t);
		}

		static ::System::Void Goto(::DG::Tweening::Tween* t, ::System::Single to, ::System::Boolean andPlay)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_GOTO_OFFSET))(t, to, andPlay);
		}

		static ::System::Void Kill(::DG::Tweening::Tween* t, ::System::Boolean complete)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_KILL_OFFSET))(t, complete);
		}

		static ::System::Void PlayBackwards(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_PLAYBACKWARDS_OFFSET))(t);
		}

		static ::System::Void PlayForward(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_PLAYFORWARD_OFFSET))(t);
		}

		static ::System::Void Restart(::DG::Tweening::Tween* t, ::System::Boolean includeDelay)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_RESTART_OFFSET))(t, includeDelay);
		}

		static ::System::Void Rewind(::DG::Tweening::Tween* t, ::System::Boolean includeDelay)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_REWIND_OFFSET))(t, includeDelay);
		}

		static ::System::Void SmoothRewind(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_SMOOTHREWIND_OFFSET))(t);
		}

		static ::System::Void TogglePause(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_TOGGLEPAUSE_OFFSET))(t);
		}

		static ::System::Void GotoWaypoint(::DG::Tweening::Tween* t, ::System::Int32 waypointIndex, ::System::Boolean andPlay)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_GOTOWAYPOINT_OFFSET))(t, waypointIndex, andPlay);
		}

		static ::UnityEngine::YieldInstruction* WaitForCompletion(::DG::Tweening::Tween* t)
		{
			return ((::UnityEngine::YieldInstruction*(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORCOMPLETION_OFFSET))(t);
		}

		static ::UnityEngine::YieldInstruction* WaitForRewind(::DG::Tweening::Tween* t)
		{
			return ((::UnityEngine::YieldInstruction*(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORREWIND_OFFSET))(t);
		}

		static ::UnityEngine::YieldInstruction* WaitForKill(::DG::Tweening::Tween* t)
		{
			return ((::UnityEngine::YieldInstruction*(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORKILL_OFFSET))(t);
		}

		static ::UnityEngine::YieldInstruction* WaitForElapsedLoops(::DG::Tweening::Tween* t, ::System::Int32 elapsedLoops)
		{
			return ((::UnityEngine::YieldInstruction*(*)(::DG::Tweening::Tween*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORELAPSEDLOOPS_OFFSET))(t, elapsedLoops);
		}

		static ::UnityEngine::YieldInstruction* WaitForPosition(::DG::Tweening::Tween* t, ::System::Single position)
		{
			return ((::UnityEngine::YieldInstruction*(*)(::DG::Tweening::Tween*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORPOSITION_OFFSET))(t, position);
		}

		static ::UnityEngine::Coroutine* WaitForStart(::DG::Tweening::Tween* t)
		{
			return ((::UnityEngine::Coroutine*(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_WAITFORSTART_OFFSET))(t);
		}

		static ::System::Int32 CompletedLoops(::DG::Tweening::Tween* t)
		{
			return ((::System::Int32(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_COMPLETEDLOOPS_OFFSET))(t);
		}

		static ::System::Single Delay(::DG::Tweening::Tween* t)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_DELAY_OFFSET))(t);
		}

		static ::System::Single Duration(::DG::Tweening::Tween* t, ::System::Boolean includeLoops)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_DURATION_OFFSET))(t, includeLoops);
		}

		static ::System::Single Elapsed(::DG::Tweening::Tween* t, ::System::Boolean includeLoops)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ELAPSED_OFFSET))(t, includeLoops);
		}

		static ::System::Single ElapsedPercentage(::DG::Tweening::Tween* t, ::System::Boolean includeLoops)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ELAPSEDPERCENTAGE_OFFSET))(t, includeLoops);
		}

		static ::System::Single ElapsedDirectionalPercentage(::DG::Tweening::Tween* t)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ELAPSEDDIRECTIONALPERCENTAGE_OFFSET))(t);
		}

		static ::System::Boolean IsActive(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ISACTIVE_OFFSET))(t);
		}

		static ::System::Boolean IsBackwards(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ISBACKWARDS_OFFSET))(t);
		}

		static ::System::Boolean IsComplete(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ISCOMPLETE_OFFSET))(t);
		}

		static ::System::Boolean IsInitialized(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ISINITIALIZED_OFFSET))(t);
		}

		static ::System::Boolean IsPlaying(::DG::Tweening::Tween* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_ISPLAYING_OFFSET))(t);
		}

		static ::System::Int32 Loops(::DG::Tweening::Tween* t)
		{
			return ((::System::Int32(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_LOOPS_OFFSET))(t);
		}

		static ::UnityEngine::Vector3 PathGetPoint(::DG::Tweening::Tween* t, ::System::Single pathPercentage)
		{
			return ((::UnityEngine::Vector3(*)(::DG::Tweening::Tween*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_PATHGETPOINT_OFFSET))(t, pathPercentage);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* PathGetDrawPoints(::DG::Tweening::Tween* t, ::System::Int32 subdivisionsXSegment)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::DG::Tweening::Tween*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_PATHGETDRAWPOINTS_OFFSET))(t, subdivisionsXSegment);
		}

		static ::System::Single PathLength(::DG::Tweening::Tween* t)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENEXTENSIONS_PATHLENGTH_OFFSET))(t);
		}
	};
}
