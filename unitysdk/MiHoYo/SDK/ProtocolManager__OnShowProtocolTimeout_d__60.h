#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1840A330)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1840A640)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1840A6A0)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1840A650)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1840A320)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60__CTOR_OFFSET UNITYSDK_OFFSET(0x18408300)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager__OnShowProtocolTimeout_d__60_TypeDefinitionIndex = 7999;

	class ProtocolManager__OnShowProtocolTimeout_d__60 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* _protocolShowFlag_5__1; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_D__60_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
