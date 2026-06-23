#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDShootGame; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10D41DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D423A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D42400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10D423B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D41DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x10D41DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGame__WaitGameFinished_d__11_TypeDefinitionIndex = 79784;

	class LDShootGame__WaitGameFinished_d__11 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDShootGame* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__WAITGAMEFINISHED_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
