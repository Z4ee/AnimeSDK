#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F482D0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F483B0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F48410)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F483C0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F482C0)
#define MIHOYO_SDK_NETWORKMANAGER__POST_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x15F40DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Post_d__29_TypeDefinitionIndex = 7151;

	class NetworkManager__Post_d__29 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::System::String* requestUrl; // 0x18
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* bodyDic; // 0x28
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__POST_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
