#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9722B40)
#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9722B60)
#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9722BC0)
#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9722B70)
#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9722B30)
#define RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x9722730)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder__OnStopIK_d__28_TypeDefinitionIndex = 60890;

	class Grounder__OnStopIK_d__28 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER__ONSTOPIK_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
