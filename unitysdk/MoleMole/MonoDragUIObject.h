#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoDragUIObject_Enum_3_08353798F305D15F.h"
#include "unitysdk/MoleMole/MonoDragUIObject_Enum_3_609562921AF9106A.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoDragUIObject_Class_3_50D343C44D28BEFB_5; }
namespace MoleMole { class MonoDragUIObject_Class_3_50D343C44D28BEFB_6; }
namespace MoleMole { class MonoDragUIObject_Class_3_52CA2A020DC1CB7B; }
namespace MoleMole { class MonoDragUIObject_Class_3_84B5919479DA988C; }
namespace MoleMole { class MonoDragUIObject_Class_3_84B5919479DA988C_1; }
namespace MoleMole { class MonoDragUIObject_Class_3_84B5919479DA988C_2; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONODRAGUIOBJECT_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x1262D710)
#define MOLEMOLE_MONODRAGUIOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x1262D780)
#define MOLEMOLE_MONODRAGUIOBJECT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1262DD10)
#define MOLEMOLE_MONODRAGUIOBJECT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1262DF80)
#define MOLEMOLE_MONODRAGUIOBJECT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1262E0E0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1262DF20)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1262DDB0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1262DED0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1262DE20)
#define MOLEMOLE_MONODRAGUIOBJECT_REGBEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D7E0)
#define MOLEMOLE_MONODRAGUIOBJECT_REGCLCIKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D880)
#define MOLEMOLE_MONODRAGUIOBJECT_REGDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D830)
#define MOLEMOLE_MONODRAGUIOBJECT_REGENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262DB80)
#define MOLEMOLE_MONODRAGUIOBJECT_REGLONGPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D980)
#define MOLEMOLE_MONODRAGUIOBJECT_REGONBOUNDBACK_OFFSET UNITYSDK_OFFSET(0x1262DA80)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVECLCIKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D8D0)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVEENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262DBD0)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVELONGPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1262D9D0)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVEONBOUNDBACK_OFFSET UNITYSDK_OFFSET(0x1262DAD0)
#define MOLEMOLE_MONODRAGUIOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1262E180)
#define MOLEMOLE_MONODRAGUIOBJECT_SETDRAGSTATE_OFFSET UNITYSDK_OFFSET(0x1262E310)
#define MOLEMOLE_MONODRAGUIOBJECT_SETLOINGPRESSINTEVAL_OFFSET UNITYSDK_OFFSET(0x1262D720)
#define MOLEMOLE_MONODRAGUIOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1262DC80)
#define MOLEMOLE_MONODRAGUIOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1262E360)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_TypeDefinitionIndex = 46804;

	class MonoDragUIObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C* Field_5_0; // 0x18
		::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_1* Field_5_1; // 0x20
		::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_2* Field_5_2; // 0x28
		::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_5* Field_5_3; // 0x30
		::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_6* Field_5_4; // 0x38
		::MoleMole::MonoDragUIObject_Class_3_52CA2A020DC1CB7B* Field_5_5; // 0x40
		::System::Boolean IsReset; // 0x48
		::UnityEngine::RectTransform* dragObject; // 0x50
		::System::Boolean FollowMous; // 0x58
		::UnityEngine::Vector2 Field_5_9; // 0x5C
		::System::Boolean enableDrag; // 0x64
		::System::Single longPressInteval; // 0x68
		::System::Single Field_5_12; // 0x6C
		::MoleMole::MonoDragUIObject_Enum_3_609562921AF9106A Field_5_13; // 0x70
		::MoleMole::MonoDragUIObject_Enum_3_08353798F305D15F Field_5_14; // 0x74
		::UnityEngine::Vector2 Field_5_15; // 0x78
		::System::Boolean Field_5_16; // 0x80
		::Il2CppArray<::System::Object*>* Field_5_17; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ExtraData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GET_EXTRADATA_OFFSET))(this);
		}

		::System::Void SetLoingPressInteval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_SETLOINGPRESSINTEVAL_OFFSET))(this, a1);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_INIT_OFFSET))(this, a1);
		}

		::System::Void RegBeginDragCallback(::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGBEGINDRAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegDragCallback(::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGDRAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegClcikCallback(::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGCLCIKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveClcikCallback(::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVECLCIKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegLongPressCallBack(::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGLONGPRESSCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveLongPressCallBack(::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_50D343C44D28BEFB_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVELONGPRESSCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegOnBoundBack(::MoleMole::MonoDragUIObject_Class_3_52CA2A020DC1CB7B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_52CA2A020DC1CB7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGONBOUNDBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveOnBoundBack(::MoleMole::MonoDragUIObject_Class_3_52CA2A020DC1CB7B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_52CA2A020DC1CB7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVEONBOUNDBACK_OFFSET))(this, a1);
		}

		::System::Void RegEndDragCallback(::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGENDDRAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveEndDragCallback(::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_Class_3_84B5919479DA988C_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVEENDDRAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_RESET_OFFSET))(this);
		}

		::System::Void SetDragState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_SETDRAGSTATE_OFFSET))(this);
		}
	};
}
