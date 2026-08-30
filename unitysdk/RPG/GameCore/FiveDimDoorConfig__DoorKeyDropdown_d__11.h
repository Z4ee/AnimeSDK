#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D0E0FA0)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0E1130)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0E1080)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0E11A0)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0E10E0)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D0E1090)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0E0F90)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDoorConfig__DoorKeyDropdown_d__11_TypeDefinitionIndex = 18384;

	class FiveDimDoorConfig__DoorKeyDropdown_d__11 : public ::System::Object
	{
	public:
		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32> __2__current; // 0x10
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_MOVENEXT_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_System_UInt32___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_System_UInt32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__DOORKEYDROPDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
