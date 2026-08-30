#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ADA2D40)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADA3690)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADA36F0)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ADA36A0)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADA2D30)
#define RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9E6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars__AsyncInitEnterGameStep_d__6_TypeDefinitionIndex = 61386;

	class GlobalVars__AsyncInitEnterGameStep_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::IEnumerator* _enumerator_5__2; // 0x18
		::System::Action* callback; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__ASYNCINITENTERGAMESTEP_D__6__CTOR_OFFSET))(this, a1);
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
