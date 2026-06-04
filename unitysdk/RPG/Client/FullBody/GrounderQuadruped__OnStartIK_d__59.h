#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FullBody { class GrounderQuadruped; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBA85F00)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA860C0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA86120)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBA860D0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA85EF0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0xBA85A10)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped__OnStartIK_d__59_TypeDefinitionIndex = 69316;

	class GrounderQuadruped__OnStartIK_d__59 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::FullBody::GrounderQuadruped* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _timeScale_5__2; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTARTIK_D__59__CTOR_OFFSET))(this, a1);
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
