#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class GrounderIK; }

#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA25DF70)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA25E0F0)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA25E150)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA25E100)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25DF60)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0xA25DD90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK__OnStartIK_d__44_TypeDefinitionIndex = 41813;

	class GrounderIK__OnStartIK_d__44 : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::GrounderIK* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _timeScale_5__2; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTARTIK_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
