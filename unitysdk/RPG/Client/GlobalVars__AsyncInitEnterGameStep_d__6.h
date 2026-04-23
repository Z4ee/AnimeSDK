#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA437710)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA437F90)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA437FF0)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA437FA0)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA437700)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0xA432F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars__AsyncInitEnterGameStep_d__6_TypeDefinitionIndex = 56521;

	class GlobalVars__AsyncInitEnterGameStep_d__6 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Collections::IEnumerator* _enumerator_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
