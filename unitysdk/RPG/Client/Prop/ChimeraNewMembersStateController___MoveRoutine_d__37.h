#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraNewMembersStateController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC7FD90)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC803D0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC80430)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC803E0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC7FD80)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___MOVEROUTINE_D__37__CTOR_OFFSET UNITYSDK_OFFSET(0xDC7F7D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraNewMembersStateController___MoveRoutine_d__37_TypeDefinitionIndex = 78501;

	class ChimeraNewMembersStateController___MoveRoutine_d__37 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* start; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::Prop::ChimeraNewMembersStateController* __4__this; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* end; // 0x28
		::System::Single _elapsed_5__3; // 0x30
		::System::Single _total_5__2; // 0x34
		::System::Single duration; // 0x38
		::System::Int32 __1__state; // 0x3C

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
