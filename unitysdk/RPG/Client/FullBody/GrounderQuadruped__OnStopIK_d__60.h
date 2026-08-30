#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FullBody { class GrounderQuadruped; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD0CC460)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0CC600)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0CC660)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD0CC610)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0CC450)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60__CTOR_OFFSET UNITYSDK_OFFSET(0xD0CBF20)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped__OnStopIK_d__60_TypeDefinitionIndex = 74138;

	class GrounderQuadruped__OnStopIK_d__60 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::FullBody::GrounderQuadruped* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _timeScale_5__2; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__ONSTOPIK_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
