#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCloseLoadingBuddyNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16B79EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B7A150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B7A1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16B7A160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B79EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B79E50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCloseLoadingBuddyNode__Invoke_d__2_TypeDefinitionIndex = 71568;

	class LDCloseLoadingBuddyNode__Invoke_d__2 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDCloseLoadingBuddyNode* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single time; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
