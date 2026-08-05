#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class Cooldown; }

#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DFC7C80)
#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DFC7F50)
#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DFC7FB0)
#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DFC7F60)
#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DFC7C70)
#define FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC7C60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Cooldown__CountDown_d__14_TypeDefinitionIndex = 29981;

	class Cooldown__CountDown_d__14 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Cooldown* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::FlowCanvas::Flow f; // 0x20
		::System::Int32 __1__state; // 0x48
		::System::Single _total_5__2; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COOLDOWN__COUNTDOWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
