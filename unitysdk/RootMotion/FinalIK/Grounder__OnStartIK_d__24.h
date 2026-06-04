#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA258720)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA258740)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA2587A0)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA258750)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA258710)
#define ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0xA2583B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder__OnStartIK_d__24_TypeDefinitionIndex = 41810;

	class Grounder__OnStartIK_d__24 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__ONSTARTIK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
