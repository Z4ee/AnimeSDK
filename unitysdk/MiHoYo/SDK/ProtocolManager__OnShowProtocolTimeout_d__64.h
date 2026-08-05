#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C93C870)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C93CB60)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C93CBC0)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C93CB70)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C93C860)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64__CTOR_OFFSET UNITYSDK_OFFSET(0x1C93C850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager__OnShowProtocolTimeout_d__64_TypeDefinitionIndex = 20166;

	class ProtocolManager__OnShowProtocolTimeout_d__64 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::MiHoYo::SDK::JSONNode* _protocolShowFlag_5__1; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
