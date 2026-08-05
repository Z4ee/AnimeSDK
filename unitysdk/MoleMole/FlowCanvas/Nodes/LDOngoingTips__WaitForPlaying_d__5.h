#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas::Nodes { class LDOngoingTips___c__DisplayClass5_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B1A0C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1A0EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1A0F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B1A0EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1A0C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A0C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips__WaitForPlaying_d__5_TypeDefinitionIndex = 74327;

	class LDOngoingTips__WaitForPlaying_d__5 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDOngoingTips___c__DisplayClass5_0* __8__1; // 0x10
		::FlowCanvas::FlowOutput* finish; // 0x18
		::Class_0_16E4307DCC419505_422* inLevel; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 groupID; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
