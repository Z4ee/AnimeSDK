#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class StaticIcon; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4BA500)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4BA590)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4BA5F0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D4BA5A0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4BA4F0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BA4E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int StaticIcon__DelayedAction_d__19_TypeDefinitionIndex = 20126;

	class StaticIcon__DelayedAction_d__19 : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x10
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* action; // 0x18
		::System::Object* __2__current; // 0x20
		::MiHoYo::SDK::StaticIcon* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
