#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraNewMembersStateController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC35540)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC35B80)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC35BE0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC35B90)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC35530)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37__CTOR_OFFSET UNITYSDK_OFFSET(0xDC34F80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraNewMembersStateController___MoveRoutine_d__37_TypeDefinitionIndex = 78030;

	class ChimeraNewMembersStateController___MoveRoutine_d__37 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* end; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* start; // 0x20
		::RPG::Client::Prop::ChimeraNewMembersStateController* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single _total_5__2; // 0x34
		::System::Single duration; // 0x38
		::System::Single _elapsed_5__3; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
