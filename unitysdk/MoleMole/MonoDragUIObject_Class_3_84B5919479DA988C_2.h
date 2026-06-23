#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class MonoDragUIObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16CC5D30)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16CC5D70)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CC57B0)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC5790)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_Class_3_84B5919479DA988C_2_TypeDefinitionIndex = 46809;

	class MonoDragUIObject_Class_3_84B5919479DA988C_2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MoleMole::MonoDragUIObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoDragUIObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_84B5919479DA988C_2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
