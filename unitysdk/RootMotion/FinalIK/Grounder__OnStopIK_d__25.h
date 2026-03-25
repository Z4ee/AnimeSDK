#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85D4FD0)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85D4FF0)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85D5050)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x85D5000)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85D4FC0)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x85D4D30)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder__OnStopIK_d__25_TypeDefinitionIndex = 35182;

	class Grounder__OnStopIK_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTOPIK_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
