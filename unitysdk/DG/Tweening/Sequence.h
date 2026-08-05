#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateMode.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Tween.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { class ABSSequentiable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DG_TWEENING_SEQUENCE_APPLYINTERNALCYCLE_OFFSET UNITYSDK_OFFSET(0x1FAD0740)
#define DG_TWEENING_SEQUENCE_APPLYTWEEN_OFFSET UNITYSDK_OFFSET(0x1FAD02B0)
#define DG_TWEENING_SEQUENCE_DOAPPENDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1FACFE10)
#define DG_TWEENING_SEQUENCE_DOAPPLYTWEEN_OFFSET UNITYSDK_OFFSET(0x1FAD02C0)
#define DG_TWEENING_SEQUENCE_DOINSERTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FACFF20)
#define DG_TWEENING_SEQUENCE_DOINSERT_OFFSET UNITYSDK_OFFSET(0x1FACFC40)
#define DG_TWEENING_SEQUENCE_DOPREPENDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1FACFE50)
#define DG_TWEENING_SEQUENCE_DOPREPEND_OFFSET UNITYSDK_OFFSET(0x1FACFB40)
#define DG_TWEENING_SEQUENCE_DOSTARTUP_OFFSET UNITYSDK_OFFSET(0x1FAD00C0)
#define DG_TWEENING_SEQUENCE_RESET_OFFSET UNITYSDK_OFFSET(0x1FACFA00)
#define DG_TWEENING_SEQUENCE_SETUP_OFFSET UNITYSDK_OFFSET(0x1FAD0620)
#define DG_TWEENING_SEQUENCE_SORTSEQUENCEDOBJS_OFFSET UNITYSDK_OFFSET(0x1FAD0E60)
#define DG_TWEENING_SEQUENCE_STARTUP_OFFSET UNITYSDK_OFFSET(0x1FAD00B0)
#define DG_TWEENING_SEQUENCE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1FACFFD0)
#define DG_TWEENING_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACF7C0)

namespace DG::Tweening
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 28453;

	class Sequence : public ::DG::Tweening::Tween
	{
	public:
		::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* sequencedTweens; // 0xF0
		::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>* _sequencedObjs; // 0xF8
		::System::Single lastTweenInsertTime; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE__CTOR_OFFSET))(this);
		}

		static ::DG::Tweening::Sequence* DoPrepend(::DG::Tweening::Sequence* inSequence, ::DG::Tweening::Tween* t)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOPREPEND_OFFSET))(inSequence, t);
		}

		static ::DG::Tweening::Sequence* DoInsert(::DG::Tweening::Sequence* inSequence, ::DG::Tweening::Tween* t, ::System::Single atPosition)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOINSERT_OFFSET))(inSequence, t, atPosition);
		}

		static ::DG::Tweening::Sequence* DoAppendInterval(::DG::Tweening::Sequence* inSequence, ::System::Single interval)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOAPPENDINTERVAL_OFFSET))(inSequence, interval);
		}

		static ::DG::Tweening::Sequence* DoPrependInterval(::DG::Tweening::Sequence* inSequence, ::System::Single interval)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOPREPENDINTERVAL_OFFSET))(inSequence, interval);
		}

		static ::DG::Tweening::Sequence* DoInsertCallback(::DG::Tweening::Sequence* inSequence, ::DG::Tweening::TweenCallback* callback, ::System::Single atPosition)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::TweenCallback*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOINSERTCALLBACK_OFFSET))(inSequence, callback, atPosition);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_RESET_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_VALIDATE_OFFSET))(this);
		}

		::System::Boolean Startup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_STARTUP_OFFSET))(this);
		}

		::System::Boolean ApplyTween(::System::Single prevPosition, ::System::Int32 prevCompletedLoops, ::System::Int32 newCompletedSteps, ::System::Boolean useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode updateMode, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateMode, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_APPLYTWEEN_OFFSET))(this, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
		}

		static ::System::Void Setup(::DG::Tweening::Sequence* s)
		{
			return ((::System::Void(*)(::DG::Tweening::Sequence*))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_SETUP_OFFSET))(s);
		}

		static ::System::Boolean DoStartup(::DG::Tweening::Sequence* s)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Sequence*))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOSTARTUP_OFFSET))(s);
		}

		static ::System::Boolean DoApplyTween(::DG::Tweening::Sequence* s, ::System::Single prevPosition, ::System::Int32 prevCompletedLoops, ::System::Int32 newCompletedSteps, ::System::Boolean useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode updateMode)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Sequence*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_DOAPPLYTWEEN_OFFSET))(s, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode);
		}

		static ::System::Boolean ApplyInternalCycle(::DG::Tweening::Sequence* s, ::System::Single fromPos, ::System::Single toPos, ::DG::Tweening::Core::Enums::UpdateMode updateMode, ::System::Boolean useInverse, ::System::Boolean prevPosIsInverse, ::System::Boolean multiCycleStep)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Sequence*, ::System::Single, ::System::Single, ::DG::Tweening::Core::Enums::UpdateMode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_APPLYINTERNALCYCLE_OFFSET))(s, fromPos, toPos, updateMode, useInverse, prevPosIsInverse, multiCycleStep);
		}

		static ::System::Int32 SortSequencedObjs(::DG::Tweening::Core::ABSSequentiable* a, ::DG::Tweening::Core::ABSSequentiable* b)
		{
			return ((::System::Int32(*)(::DG::Tweening::Core::ABSSequentiable*, ::DG::Tweening::Core::ABSSequentiable*))((::PBYTE)hIl2Cpp + DG_TWEENING_SEQUENCE_SORTSEQUENCEDOBJS_OFFSET))(a, b);
		}
	};
}
