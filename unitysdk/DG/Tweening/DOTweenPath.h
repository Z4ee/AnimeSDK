#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/Core/ABSAnimationComponent.h"
#include "unitysdk/DG/Tweening/DOTweenInspectorMode.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/HandlesDrawMode.h"
#include "unitysdk/DG/Tweening/HandlesType.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/PathMode.h"
#include "unitysdk/DG/Tweening/PathType.h"
#include "unitysdk/DG/Tweening/Plugins/Options/OrientType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Plugins::Core::PathCore { class Path; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_DOTWEENPATH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C473630)
#define DG_TWEENING_DOTWEENPATH_DOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C474AD0)
#define DG_TWEENING_DOTWEENPATH_DOKILL_OFFSET UNITYSDK_OFFSET(0x1C474AE0)
#define DG_TWEENING_DOTWEENPATH_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x1C474990)
#define DG_TWEENING_DOTWEENPATH_DOPLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1C474970)
#define DG_TWEENING_DOTWEENPATH_DOPLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1C474980)
#define DG_TWEENING_DOTWEENPATH_DOPLAY_OFFSET UNITYSDK_OFFSET(0x1C474930)
#define DG_TWEENING_DOTWEENPATH_DORESTART_OFFSET UNITYSDK_OFFSET(0x1C4749F0)
#define DG_TWEENING_DOTWEENPATH_DOREWIND_OFFSET UNITYSDK_OFFSET(0x1C4749E0)
#define DG_TWEENING_DOTWEENPATH_DOTOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1C4749D0)
#define DG_TWEENING_DOTWEENPATH_GETDRAWPOINTS_OFFSET UNITYSDK_OFFSET(0x1C474C00)
#define DG_TWEENING_DOTWEENPATH_GETFULLWPS_OFFSET UNITYSDK_OFFSET(0x1C474CD0)
#define DG_TWEENING_DOTWEENPATH_GETTWEEN_OFFSET UNITYSDK_OFFSET(0x1C474AF0)
#define DG_TWEENING_DOTWEENPATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C474900)
#define DG_TWEENING_DOTWEENPATH_REEVALUATERELATIVETWEEN_OFFSET UNITYSDK_OFFSET(0x1C4745E0)
#define DG_TWEENING_DOTWEENPATH_RESET_OFFSET UNITYSDK_OFFSET(0x1C474800)
#define DG_TWEENING_DOTWEENPATH__AWAKE_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C4750E0)
#define DG_TWEENING_DOTWEENPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C474ED0)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenPath_TypeDefinitionIndex = 32925;

	class DOTweenPath : public ::DG::Tweening::Core::ABSAnimationComponent
	{
	public:
		::System::Single delay; // 0x60
		::System::Single duration; // 0x64
		::DG::Tweening::Ease easeType; // 0x68
		::UnityEngine::AnimationCurve* easeCurve; // 0x70
		::System::Int32 loops; // 0x78
		::System::String* id; // 0x80
		::DG::Tweening::LoopType loopType; // 0x88
		::DG::Tweening::Plugins::Options::OrientType orientType; // 0x8C
		::UnityEngine::Transform* lookAtTransform; // 0x90
		::UnityEngine::Vector3 lookAtPosition; // 0x98
		::System::Single lookAhead; // 0xA4
		::System::Boolean autoPlay; // 0xA8
		::System::Boolean autoKill; // 0xA9
		::System::Boolean relative; // 0xAA
		::System::Boolean isLocal; // 0xAB
		::System::Boolean isClosedPath; // 0xAC
		::System::Int32 pathResolution; // 0xB0
		::DG::Tweening::PathMode pathMode; // 0xB4
		::DG::Tweening::AxisConstraint lockRotation; // 0xB8
		::System::Boolean assignForwardAndUp; // 0xBC
		::UnityEngine::Vector3 forwardDirection; // 0xC0
		::UnityEngine::Vector3 upDirection; // 0xCC
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* wps; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* fullWps; // 0xE0
		::DG::Tweening::Plugins::Core::PathCore::Path* path; // 0xE8
		::DG::Tweening::DOTweenInspectorMode inspectorMode; // 0xF0
		::DG::Tweening::PathType pathType; // 0xF4
		::DG::Tweening::HandlesType handlesType; // 0xF8
		::System::Boolean livePreview; // 0xFC
		::DG::Tweening::HandlesDrawMode handlesDrawMode; // 0x100
		::System::Single perspectiveHandleSize; // 0x104
		::System::Boolean showIndexes; // 0x108
		::System::Boolean showWpLength; // 0x109
		::UnityEngine::Color pathColor; // 0x10C
		::UnityEngine::Vector3 lastSrcPosition; // 0x11C
		::System::Boolean wpsDropdown; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_ONDESTROY_OFFSET))(this);
		}

		::System::Void DOPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOPLAY_OFFSET))(this);
		}

		::System::Void DOPlayBackwards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOPLAYBACKWARDS_OFFSET))(this);
		}

		::System::Void DOPlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOPLAYFORWARD_OFFSET))(this);
		}

		::System::Void DOPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOPAUSE_OFFSET))(this);
		}

		::System::Void DOTogglePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOTOGGLEPAUSE_OFFSET))(this);
		}

		::System::Void DORewind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOREWIND_OFFSET))(this);
		}

		::System::Void DORestart(::System::Boolean fromHere)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DORESTART_OFFSET))(this, fromHere);
		}

		::System::Void DOComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOCOMPLETE_OFFSET))(this);
		}

		::System::Void DOKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_DOKILL_OFFSET))(this);
		}

		::DG::Tweening::Tween* GetTween()
		{
			return ((::DG::Tweening::Tween*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_GETTWEEN_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetDrawPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_GETDRAWPOINTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetFullWps()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_GETFULLWPS_OFFSET))(this);
		}

		::System::Void ReEvaluateRelativeTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH_REEVALUATERELATIVETWEEN_OFFSET))(this);
		}

		::System::Void _Awake_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPATH__AWAKE_B__36_0_OFFSET))(this);
		}
	};
}
