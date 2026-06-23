#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUITableScrollV2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1264B530)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1264B420)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_DODESTROY_OFFSET UNITYSDK_OFFSET(0x1264AD00)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1264B810)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1264B8B0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1264B940)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_REFRESHCAROUSELSETTING_OFFSET UNITYSDK_OFFSET(0x1264B060)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELACTION_OFFSET UNITYSDK_OFFSET(0x1264AFF0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELMOTIONSETTING_OFFSET UNITYSDK_OFFSET(0x1264AF20)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELSETTING_OFFSET UNITYSDK_OFFSET(0x1264AEC0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELTIME_OFFSET UNITYSDK_OFFSET(0x1264AF80)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1264B0B0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTMOTIONCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1264B210)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STOPCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1264B260)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1264ACA0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1264B9D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIScrollViewCarousel_TypeDefinitionIndex = 72481;

	class MonoUIScrollViewCarousel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x18
		::System::Single carouselTime; // 0x20
		::System::Single firstCarouselTime; // 0x24
		::System::Single exchangeDelayTime; // 0x28
		::System::Single motionSpeed; // 0x2C
		::System::Single controlMotionMaxSpeed; // 0x30
		::System::Single controlMotionAccelerate; // 0x34
		::UnityEngine::AnimationCurve* leaveLogicPosition2ViewPositionCurve; // 0x38
		::UnityEngine::AnimationCurve* enterLogicPosition2ViewPositionCurve; // 0x40
		::Foundation::Coroutine::CoroutineHandle carouselHandle; // 0x48
		::System::Int32 nowItemIndex; // 0x4C
		::System::Int32 maxItemNum; // 0x50
		::System::Boolean isDestroyed; // 0x54
		::System::Boolean isMoving; // 0x55
		::System::Action* updateCallback; // 0x58
		::System::Action_2<::System::Int32, ::System::Int32>* changeCallback; // 0x60
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragBeginAction; // 0x68
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragAction; // 0x70
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragEndAction; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_UPDATE_OFFSET))(this);
		}

		::System::Void DoDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_DODESTROY_OFFSET))(this);
		}

		::System::Void SetCarouselSetting(::System::Int32 a1, ::System::Action_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELSETTING_OFFSET))(this, a1, a2);
		}

		::System::Void SetCarouselMotionSetting(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELMOTIONSETTING_OFFSET))(this, a1, a2);
		}

		::System::Void SetCarouselTime(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELTIME_OFFSET))(this, a1, a2);
		}

		::System::Void SetCarouselAction(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* a1, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* a2, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELACTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshCarouselSetting(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_REFRESHCAROUSELSETTING_OFFSET))(this, a1);
		}

		::System::Void StartCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTCAROUSEL_OFFSET))(this);
		}

		::System::Void StartMotionCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTMOTIONCAROUSEL_OFFSET))(this);
		}

		::System::Void StopCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STOPCAROUSEL_OFFSET))(this);
		}

		::System::Void CarouselScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEW_OFFSET))(this);
		}

		::System::Void CarouselScrollViewImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEWIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
