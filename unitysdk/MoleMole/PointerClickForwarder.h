#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_30EDD259435FA28A;
class MonoUITableScrollV2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_POINTERCLICKFORWARDER_ATTACHTOSCROLLVIEWVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1264FCE0)
#define MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_160E21E8613C239F_OFFSET UNITYSDK_OFFSET(0x12650480)
#define MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_7135FE2B887E93E6_OFFSET UNITYSDK_OFFSET(0x12650B00)
#define MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_90E066A4ED51851F_OFFSET UNITYSDK_OFFSET(0x126509F0)
#define MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_C66EC3AEC1ED57FE_OFFSET UNITYSDK_OFFSET(0x126507A0)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1264F9D0)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1264FA30)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1264FA80)
#define MOLEMOLE_POINTERCLICKFORWARDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12650AB0)

namespace MoleMole
{
	inline static constexpr unsigned int PointerClickForwarder_TypeDefinitionIndex = 60343;

	class PointerClickForwarder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnClick; // 0x18
		::System::Boolean Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERUP_OFFSET))(this, a1);
		}

		static ::Class_1_30EDD259435FA28A* AttachToScrollViewViewport(::MonoUITableScrollV2* a1, ::System::Action* a2)
		{
			return ((::Class_1_30EDD259435FA28A*(*)(::MonoUITableScrollV2*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ATTACHTOSCROLLVIEWVIEWPORT_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_5_160E21E8613C239F(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_160E21E8613C239F_OFFSET))(a1);
		}

		static ::System::Void Method_5_7135FE2B887E93E6(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_7135FE2B887E93E6_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_5_90E066A4ED51851F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_90E066A4ED51851F_OFFSET))(a1, a2);
		}

		static ::MoleMole::PointerClickForwarder* Method_5_C66EC3AEC1ED57FE(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::MoleMole::PointerClickForwarder*(*)(::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_METHOD_5_C66EC3AEC1ED57FE_OFFSET))(a1, a2);
		}
	};
}
