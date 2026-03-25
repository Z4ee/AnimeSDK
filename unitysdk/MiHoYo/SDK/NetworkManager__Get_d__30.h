#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F447E0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F449B0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F44A10)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F449C0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F447D0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x15F40E60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__30_TypeDefinitionIndex = 7152;

	class NetworkManager__Get_d__30 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Action* timeoutCallback; // 0x20
		::System::String* requestUrl; // 0x28
		::System::String* _queryString_5__1; // 0x30
		::MiHoYo::SDK::JSONObject* query; // 0x38
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x40
		::System::Boolean checkMD5; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
