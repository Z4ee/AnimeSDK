#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class PadsPuzzlePadBase; }

#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE8C770)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE8C820)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE8C880)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAE8C830)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE8C760)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0xAE8C730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzlePadBase___DeactivateInDelay_d__7_TypeDefinitionIndex = 72254;

	class PadsPuzzlePadBase___DeactivateInDelay_d__7 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::PadsPuzzlePadBase* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE___DEACTIVATEINDELAY_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
