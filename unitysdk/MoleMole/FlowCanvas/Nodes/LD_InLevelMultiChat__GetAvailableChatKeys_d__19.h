#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1174F2F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1174F830)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1174F7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1174F8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1174F820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1174F7D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1174F2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1174F2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1174F2E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelMultiChat__GetAvailableChatKeys_d__19_TypeDefinitionIndex = 45942;

	class LD_InLevelMultiChat__GetAvailableChatKeys_d__19 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::MoleMole::InLevelMultiChatConfig> __7__wrap1; // 0x10
		::System::Object* __2__current; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__GETAVAILABLECHATKEYS_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
