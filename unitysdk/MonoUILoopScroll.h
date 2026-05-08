#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Tweener; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }

#define MONOUILOOPSCROLL_ADDID_OFFSET UNITYSDK_OFFSET(0x11343540)
#define MONOUILOOPSCROLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x11342DF0)
#define MONOUILOOPSCROLL_FINDNEARESTNOTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0x113448F0)
#define MONOUILOOPSCROLL_GETCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x113435A0)
#define MONOUILOOPSCROLL_GETMOVESTEP_OFFSET UNITYSDK_OFFSET(0x11344350)
#define MONOUILOOPSCROLL_INIT_OFFSET UNITYSDK_OFFSET(0x11342EC0)
#define MONOUILOOPSCROLL_MOVECENTERGAMEOBJECTID_OFFSET UNITYSDK_OFFSET(0x113442E0)
#define MONOUILOOPSCROLL_MOVEID_OFFSET UNITYSDK_OFFSET(0x11344270)
#define MONOUILOOPSCROLL_MOVESCROLL_OFFSET UNITYSDK_OFFSET(0x11344CB0)
#define MONOUILOOPSCROLL_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x113453F0)
#define MONOUILOOPSCROLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11343CE0)
#define MONOUILOOPSCROLL_ONDRAG_OFFSET UNITYSDK_OFFSET(0x11345330)
#define MONOUILOOPSCROLL_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x113453A0)
#define MONOUILOOPSCROLL_ROLETOGO_OFFSET UNITYSDK_OFFSET(0x11343F40)
#define MONOUILOOPSCROLL_SCROLLTOINDEX_OFFSET UNITYSDK_OFFSET(0x11344870)
#define MONOUILOOPSCROLL_SUBID_OFFSET UNITYSDK_OFFSET(0x113443A0)
#define MONOUILOOPSCROLL_UPDATESELECTANIM_OFFSET UNITYSDK_OFFSET(0x11343610)
#define MONOUILOOPSCROLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x113443F0)
#define MONOUILOOPSCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11345440)

inline static constexpr unsigned int MonoUILoopScroll_TypeDefinitionIndex = 45171;

class MonoUILoopScroll : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 FullCount = 0x9; // 0x0
	// static const ::System::Int32 AddedCount = 0x2; // 0x0
	::System::Int32 Count; // 0x18
	::UnityEngine::RectTransform* content; // 0x20
	::UnityEngine::UI::ScrollRect* scroll; // 0x28
	::UnityEngine::AnimationCurve* OpenCurve; // 0x30
	::UnityEngine::AnimationCurve* CloseCurve; // 0x38
	::System::Single OpenTime; // 0x40
	::System::Single CloseTime; // 0x44
	::System::Single targetY; // 0x48
	::System::Single height; // 0x4C
	::System::Single centerPositionY; // 0x50
	::System::Int32 centerID; // 0x54
	::System::Int32 centerGameObjectID; // 0x58
	::System::Single itemHeight; // 0x5C
	::UnityEngine::Vector2 itemSize; // 0x60
	::System::Single lastContentY; // 0x68
	::System::Action_2<::System::Object*, ::UnityEngine::GameObject*>* callback; // 0x70
	::System::Action_1<::System::Int32>* onCenterIDChanged; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* cachGos; // 0x80
	::System::Collections::Generic::List_1<::System::Object*>* datas; // 0x88
	::UnityEngine::RectTransform* lastAnim; // 0x90
	::System::Boolean isDragging; // 0x98
	::System::Single FinalMoveSpeed; // 0x9C
	::System::Single MoveSpeed; // 0xA0
	::System::String* prefab; // 0xA8
	::System::Boolean isRolling; // 0xB0
	::System::Int32 targetGameObjectID; // 0xB4
	::DG::Tweening::Tweener* lastOpenTweener; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_AWAKE_OFFSET))(this);
	}

	::System::Void Init(::System::String* prefab, ::System::Collections::Generic::List_1<::System::Object*>* datas, ::System::Action_2<::System::Object*, ::UnityEngine::GameObject*>* callback, ::System::Action_1<::System::Int32>* onCenterIDChanged)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action_2<::System::Object*, ::UnityEngine::GameObject*>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_INIT_OFFSET))(this, prefab, datas, callback, onCenterIDChanged);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ONDESTROY_OFFSET))(this);
	}

	::System::Void RoleToGo(::System::Int32 gameObjectID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ROLETOGO_OFFSET))(this, gameObjectID);
	}

	::System::Void UpdateSelectAnim(::System::Boolean immediate, ::System::Object* data)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_UPDATESELECTANIM_OFFSET))(this, immediate, data);
	}

	::System::Single GetCurrentPosition()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_GETCURRENTPOSITION_OFFSET))(this);
	}

	::System::Int32 MoveID(::System::Int32 id, ::System::Int32 step)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_MOVEID_OFFSET))(this, id, step);
	}

	::System::Int32 MoveCenterGameObjectID(::System::Int32 id, ::System::Int32 step)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_MOVECENTERGAMEOBJECTID_OFFSET))(this, id, step);
	}

	::System::Int32 GetMoveStep()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_GETMOVESTEP_OFFSET))(this);
	}

	::System::Int32 AddID(::System::Int32 id)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ADDID_OFFSET))(this, id);
	}

	::System::Int32 SubID(::System::Int32 id)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_SUBID_OFFSET))(this, id);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_UPDATE_OFFSET))(this);
	}

	::System::Void ScrollToIndex(::System::Boolean up)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_SCROLLTOINDEX_OFFSET))(this, up);
	}

	::System::Int32 FindNearestNotEmptyIndex(::System::Boolean& Up)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_FINDNEARESTNOTEMPTYINDEX_OFFSET))(this, Up);
	}

	::System::Void MoveScroll(::System::Single deltaY)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_MOVESCROLL_OFFSET))(this, deltaY);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ONENDDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUILOOPSCROLL_ONBEGINDRAG_OFFSET))(this, eventData);
	}
};
