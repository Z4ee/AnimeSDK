#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14284720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14284C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14284BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14284CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14284C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14284C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142846F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x142846D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14284710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelChat__GetAvailableChatKeys_d__17_TypeDefinitionIndex = 64781;

	class LD_InLevelChat__GetAvailableChatKeys_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::MoleMole::InLevelChatConfig> __7__wrap1; // 0x18
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__GETAVAILABLECHATKEYS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
