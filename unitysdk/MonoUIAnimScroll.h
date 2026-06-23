#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/UI/Extension/ScrollRectEx.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Tweener; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOUIANIMSCROLL_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x115A8BC0)
#define MONOUIANIMSCROLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x115A81E0)
#define MONOUIANIMSCROLL_GETCHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x115A9C30)
#define MONOUIANIMSCROLL_GETUIELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x115A8B40)
#define MONOUIANIMSCROLL_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x115AAE60)
#define MONOUIANIMSCROLL_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x115AAED0)
#define MONOUIANIMSCROLL_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x115AAEC0)
#define MONOUIANIMSCROLL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x115AADD0)
#define MONOUIANIMSCROLL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x115AAD40)
#define MONOUIANIMSCROLL_ONCONTENTBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x115AA400)
#define MONOUIANIMSCROLL_ONCONTENTDRAG_OFFSET UNITYSDK_OFFSET(0x115AA8F0)
#define MONOUIANIMSCROLL_ONCONTENTENDDRAG_OFFSET UNITYSDK_OFFSET(0x115AA650)
#define MONOUIANIMSCROLL_ONSCROLLBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x115AAA70)
#define MONOUIANIMSCROLL_ONSCROLLDRAG_OFFSET UNITYSDK_OFFSET(0x115AAAC0)
#define MONOUIANIMSCROLL_ONSCROLLENDDRAG_OFFSET UNITYSDK_OFFSET(0x115AAB20)
#define MONOUIANIMSCROLL_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x115A8F40)
#define MONOUIANIMSCROLL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x115AA1A0)
#define MONOUIANIMSCROLL_ONVERTICALBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x115AAB70)
#define MONOUIANIMSCROLL_ONVERTICALDRAG_OFFSET UNITYSDK_OFFSET(0x115AAC90)
#define MONOUIANIMSCROLL_ONVERTICALPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x115AACE0)
#define MONOUIANIMSCROLL_ONVERTICALPOINTERUP_OFFSET UNITYSDK_OFFSET(0x115AAC30)
#define MONOUIANIMSCROLL_ONVERTICALVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x115AABC0)
#define MONOUIANIMSCROLL_OUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x115A8DA0)
#define MONOUIANIMSCROLL_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x115A9220)
#define MONOUIANIMSCROLL_REFRESH_OFFSET UNITYSDK_OFFSET(0x115A92E0)
#define MONOUIANIMSCROLL_SCROLLMOVE_OFFSET UNITYSDK_OFFSET(0x115A9020)
#define MONOUIANIMSCROLL_SETFIXPOSITION_OFFSET UNITYSDK_OFFSET(0x115AA140)
#define MONOUIANIMSCROLL_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x115AAE90)
#define MONOUIANIMSCROLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x115AA260)
#define MONOUIANIMSCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x115AAF30)
#define MONOUIANIMSCROLL___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x115AAFD0)
#define MONOUIANIMSCROLL___BASE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x115AB060)

inline static constexpr unsigned int MonoUIAnimScroll_TypeDefinitionIndex = 63779;

class MonoUIAnimScroll : public ::UnityEngine::UI::Extension::ScrollRectEx
{
public:
	::System::Single _lastHorizontalValue; // 0x160
	::System::Single _lastVerticalValue; // 0x164
	::System::Boolean _isEnableFix; // 0x168
	::System::Boolean _isDragging; // 0x169
	::System::Boolean _isDragged; // 0x16A
	::System::Single _deltaY; // 0x16C
	::System::Single _deltaX; // 0x170
	::UnityEngine::Vector2 _contentStartPosition; // 0x174
	::System::Boolean _isFixing; // 0x17C
	::UnityEngine::Vector2 _contentTargetPosition; // 0x180
	::System::Int32 xcount; // 0x188
	::System::Int32 ycount; // 0x18C
	::System::Single xsize; // 0x190
	::System::Single ysize; // 0x194
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Byte>* _itemStatus; // 0x198
	::UnityEngine::Bounds _viewBounds; // 0x1A0
	::UnityEngine::RectTransform* _viewRect; // 0x1B8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::DG::Tweening::Tweener*>*>* _tweeners; // 0x1C0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _itemList; // 0x1C8
	::System::Single FixDelta; // 0x1D0
	::System::Single CustomXSize; // 0x1D4
	::System::Single CustomYSize; // 0x1D8
	::System::Int32 CustomXCount; // 0x1DC
	::System::Int32 CustomYCount; // 0x1E0
	::UnityEngine::GameObject* Cell; // 0x1E8
	::System::Boolean _isScrollPointerDown; // 0x1F0
	::System::Boolean isMuteAppearSound; // 0x1F1
	::MoleMole::Config::ConfigSoundActionGeneral* appearSoundAction; // 0x1F8
	::MoleMole::Config::ConfigSoundActionGeneral* beginDragSoundAction; // 0x200
	::MoleMole::Config::ConfigSoundActionGeneral* endDragSoundAction; // 0x208
	::System::Boolean isMuteScrollSound; // 0x210
	::System::Single scrollingSoundTriggerDis; // 0x214
	::System::Single _scrollingSoundCurrentMoveDis; // 0x218
	::MoleMole::Config::ConfigSoundActionGeneral* scrollingSoundAction; // 0x220
	::Sirenix::Serialization::SerializationData serializationData; // 0x228

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_AWAKE_OFFSET))(this);
	}

	::System::Void AddChild(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ADDCHILD_OFFSET))(this, go);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* data)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONSCROLL_OFFSET))(this, data);
	}

	::System::Void RefreshState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_REFRESHSTATE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* GetUIElementInfo()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_GETUIELEMENTINFO_OFFSET))(this);
	}

	::System::Void Refresh(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_REFRESH_OFFSET))(this, go);
	}

	::System::Void SetFixPosition(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_SETFIXPOSITION_OFFSET))(this, enable);
	}

	::System::Void OnValueChanged(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVALUECHANGED_OFFSET))(this, value);
	}

	::System::Boolean OutOfRange(::UnityEngine::Transform* tran)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_OUTOFRANGE_OFFSET))(this, tran);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_UPDATE_OFFSET))(this);
	}

	::System::Void OnContentBeginDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONCONTENTBEGINDRAG_OFFSET))(this);
	}

	::System::Void ScrollMove(::UnityEngine::Vector2 scrollDelta)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_SCROLLMOVE_OFFSET))(this, scrollDelta);
	}

	::System::Void OnContentEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONCONTENTENDDRAG_OFFSET))(this);
	}

	::System::Void OnContentDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Boolean scroll)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONCONTENTDRAG_OFFSET))(this, eventData, scroll);
	}

	::System::Void OnScrollBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONSCROLLBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnScrollDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONSCROLLDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnScrollEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONSCROLLENDDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnVerticalBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVERTICALBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnVerticalValueChanged(::System::Single v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVERTICALVALUECHANGED_OFFSET))(this, v);
	}

	::System::Void OnVerticalPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVERTICALPOINTERUP_OFFSET))(this, eventData);
	}

	::System::Void OnVerticalDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVERTICALDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnVerticalPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONVERTICALPOINTERDOWN_OFFSET))(this, eventData);
	}

	::UnityEngine::Bounds GetChildBounds(::UnityEngine::RectTransform* childrecttrans)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_GETCHILDBOUNDS_OFFSET))(this, childrecttrans);
	}

	::System::Void OnBeforeSerialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONBEFORESERIALIZE_OFFSET))(this);
	}

	::System::Void OnAfterDeserialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_ONAFTERDESERIALIZE_OFFSET))(this);
	}

	::Sirenix::Serialization::SerializationData get_SerializationData()
	{
		return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_GET_SERIALIZATIONDATA_OFFSET))(this);
	}

	::System::Void set_SerializationData(::Sirenix::Serialization::SerializationData value)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_SET_SERIALIZATIONDATA_OFFSET))(this, value);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnScroll(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL___BASE_ONSCROLL_OFFSET))(this, P0);
	}
};
