#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/ABSSequentiable.h"
#include "unitysdk/DG/Tweening/Core/Enums/SpecialStartupMode.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateMode.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/UpdateType.h"

namespace DG::Tweening { class EaseFunction; }
namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { template <typename T> class TweenCallback_1; }
namespace System { class Object; }
namespace System { class Type; }

#define DG_TWEENING_TWEEN_DOGOTO_OFFSET UNITYSDK_OFFSET(0x1E585FA0)
#define DG_TWEENING_TWEEN_GET_FULLPOSITION_OFFSET UNITYSDK_OFFSET(0x1E585AB0)
#define DG_TWEENING_TWEEN_ONTWEENCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E5862B0)
#define DG_TWEENING_TWEEN_RESET_OFFSET UNITYSDK_OFFSET(0x1E585EF0)
#define DG_TWEENING_TWEEN_SET_FULLPOSITION_OFFSET UNITYSDK_OFFSET(0x1E585C90)
#define DG_TWEENING_TWEEN_UPDATEDELAY_OFFSET UNITYSDK_OFFSET(0x1E585F90)
#define DG_TWEENING_TWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E586450)

namespace DG::Tweening
{
	inline static constexpr unsigned int Tween_TypeDefinitionIndex = 27932;

	class Tween : public ::DG::Tweening::Core::ABSSequentiable
	{
	public:
		::DG::Tweening::TweenCallback* onComplete; // 0x28
		::DG::Tweening::TweenCallback_1<::System::Int32>* onWaypointChange; // 0x30
		::DG::Tweening::TweenCallback* onUpdate; // 0x38
		::DG::Tweening::TweenCallback* onPlay; // 0x40
		::DG::Tweening::TweenCallback* onPause; // 0x48
		::DG::Tweening::TweenCallback* onStepComplete; // 0x50
		::System::Object* id; // 0x58
		::DG::Tweening::EaseFunction* customEase; // 0x60
		::DG::Tweening::Sequence* sequenceParent; // 0x68
		::System::Type* typeofT2; // 0x70
		::System::Object* target; // 0x78
		::System::Type* typeofT1; // 0x80
		::System::Type* typeofTPlugOptions; // 0x88
		::DG::Tweening::TweenCallback* onRewind; // 0x90
		::DG::Tweening::TweenCallback* onKill; // 0x98
		::DG::Tweening::Ease easeType; // 0xA0
		::System::Boolean playedOnce; // 0xA4
		::System::Boolean isComplete; // 0xA5
		::System::Boolean startupDone; // 0xA6
		::System::Boolean isRecyclable; // 0xA7
		::System::Single easePeriod; // 0xA8
		::DG::Tweening::Core::Enums::SpecialStartupMode specialStartupMode; // 0xAC
		::System::Boolean autoKill; // 0xB0
		::System::Boolean active; // 0xB1
		::System::Boolean isBlendable; // 0xB2
		::System::Boolean isPlaying; // 0xB3
		::System::Int32 activeId; // 0xB4
		::System::Single timeScale; // 0xB8
		::System::Int32 miscInt; // 0xBC
		::DG::Tweening::LoopType loopType; // 0xC0
		::System::Boolean isSequenced; // 0xC4
		::System::Boolean creationLocked; // 0xC5
		::System::Boolean isBackwards; // 0xC6
		::System::Boolean isRelative; // 0xC7
		::System::Single duration; // 0xC8
		::System::Boolean isSpeedBased; // 0xCC
		::System::Boolean isIndependentUpdate; // 0xCD
		::System::Boolean isFrom; // 0xCE
		::System::Boolean delayComplete; // 0xCF
		::System::Single easeOvershootOrAmplitude; // 0xD0
		::DG::Tweening::UpdateType updateType; // 0xD4
		::System::Single delay; // 0xD8
		::System::Int32 completedLoops; // 0xDC
		::System::Single elapsedDelay; // 0xE0
		::System::Single fullDuration; // 0xE4
		::System::Single position; // 0xE8
		::System::Int32 loops; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN__CTOR_OFFSET))(this);
		}

		::System::Single get_fullPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_GET_FULLPOSITION_OFFSET))(this);
		}

		::System::Void set_fullPosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_SET_FULLPOSITION_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_RESET_OFFSET))(this);
		}

		::System::Single UpdateDelay(::System::Single elapsed)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_UPDATEDELAY_OFFSET))(this, elapsed);
		}

		static ::System::Boolean DoGoto(::DG::Tweening::Tween* t, ::System::Single toPosition, ::System::Int32 toCompletedLoops, ::DG::Tweening::Core::Enums::UpdateMode updateMode)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Tween*, ::System::Single, ::System::Int32, ::DG::Tweening::Core::Enums::UpdateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_DOGOTO_OFFSET))(t, toPosition, toCompletedLoops, updateMode);
		}

		static ::System::Boolean OnTweenCallback(::DG::Tweening::TweenCallback* callback)
		{
			return ((::System::Boolean(*)(::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEEN_ONTWEENCALLBACK_OFFSET))(callback);
		}
	};
}
