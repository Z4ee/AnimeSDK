#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class GrounderIK; }

#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8E10980)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8E10AC0)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8E10B20)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8E10AD0)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E10970)
#define ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45__CTOR_OFFSET UNITYSDK_OFFSET(0x8E10660)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK__OnStopIK_d__45_TypeDefinitionIndex = 41011;

	class GrounderIK__OnStopIK_d__45 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RootMotion::FinalIK::GrounderIK* __4__this; // 0x18
		::System::Single _timeScale_5__2; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__ONSTOPIK_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
