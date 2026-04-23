#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FullBody { class GrounderQuadruped; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA3E8340)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA3E8520)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA3E8580)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA3E8530)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3E8330)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E7E60)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped__OnStartIK_d__59_TypeDefinitionIndex = 68342;

	class GrounderQuadruped__OnStartIK_d__59 : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::GrounderQuadruped* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _timeScale_5__2; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
