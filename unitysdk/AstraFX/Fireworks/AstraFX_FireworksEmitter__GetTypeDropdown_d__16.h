#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksEmitter; }
namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15970F20)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x159711C0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15971110)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15971240)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15971170)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15971120)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15970F10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x15970E10)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksEmitter__GetTypeDropdown_d__16_TypeDefinitionIndex = 49453;

	class AstraFX_FireworksEmitter__GetTypeDropdown_d__16 : public ::System::Object
	{
	public:
		::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* _plugin_5__2; // 0x10
		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32> __2__current; // 0x18
		::AstraFX::Fireworks::AstraFX_FireworksEmitter* __4__this; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 _i_5__3; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_MOVENEXT_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_System_Int32___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_System_Int32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__GETTYPEDROPDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
