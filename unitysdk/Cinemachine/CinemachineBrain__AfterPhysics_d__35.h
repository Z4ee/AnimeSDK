#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }

#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12B6D600)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B6D6D0)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B6D730)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12B6D6E0)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B6D5F0)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6A6C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain__AfterPhysics_d__35_TypeDefinitionIndex = 36485;

	class CinemachineBrain__AfterPhysics_d__35 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::Cinemachine::CinemachineBrain* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
